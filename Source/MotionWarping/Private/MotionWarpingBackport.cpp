// Copyright Epic Games, Inc. All Rights Reserved.

#include "MotionWarping.h"

#include "AnimNotifyState_MotionWarping.h"
#include "Animation/AnimInstance.h"
#include "Animation/AnimMontage.h"
#include "Animation/AnimNotifies/AnimNotifyState.h"
#include "Animation/AnimSequence.h"
#include "Components/SkeletalMeshComponent.h"
#include "GameFramework/Character.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "Kismet/KismetMathLibrary.h"
#include "MotionWarpingComponent.h"
#include "Net/UnrealNetwork.h"
#include "RootMotionModifier.h"
#include "RootMotionModifier_AdjustmentBlendWarp.h"
#include "RootMotionModifier_SkewWarp.h"

DEFINE_LOG_CATEGORY(LogMotionWarping);

namespace
{
	float WarpAxisDelta(float DeltaAxis, float TotalAxis, float TargetAxis, float StepAlpha)
	{
		if (FMath::Abs(TotalAxis) <= KINDA_SMALL_NUMBER)
		{
			// Animation has no total motion on this axis over the window.
			// Distribute target displacement linearly using time-based alpha.
			return TargetAxis * StepAlpha;
		}

		// Scale this frame's root motion delta by the ratio of (needed total / animation total).
		// Summed over the full window this equals TargetAxis exactly.
		return DeltaAxis * (TargetAxis / TotalAxis);
	}
}

#if !(UE_BUILD_SHIPPING || UE_BUILD_TEST)
TAutoConsoleVariable<int32> FMotionWarpingCVars::CVarMotionWarpingDisable(TEXT("a.MotionWarping.Disable"), 0, TEXT("Disable Motion Warping."));
TAutoConsoleVariable<int32> FMotionWarpingCVars::CVarMotionWarpingDebug(TEXT("a.MotionWarping.Debug"), 0, TEXT("Enable Motion Warping debug."));
TAutoConsoleVariable<float> FMotionWarpingCVars::CVarMotionWarpingDrawDebugDuration(TEXT("a.MotionWarping.DrawDebugDuration"), 0.0f, TEXT("Motion Warping debug draw duration."));
#endif

void FMotionWarpingModule::StartupModule()
{
}

void FMotionWarpingModule::ShutdownModule()
{
}

IMPLEMENT_MODULE(FMotionWarpingModule, MotionWarping)



UAnimNotifyState_MotionWarping::UAnimNotifyState_MotionWarping(const FObjectInitializer& ObjectInitializer)
	: Super(ObjectInitializer)
	, RootMotionModifier(nullptr)
{
}

void UAnimNotifyState_MotionWarping::OnBecomeRelevant(UMotionWarpingComponent* MotionWarpingComp, const UAnimSequenceBase* Animation, float StartTime, float EndTime) const
{
	AddRootMotionModifier(MotionWarpingComp, Animation, StartTime, EndTime);
}

URootMotionModifier* UAnimNotifyState_MotionWarping::AddRootMotionModifier_Implementation(UMotionWarpingComponent* MotionWarpingComp, const UAnimSequenceBase* Animation, float StartTime, float EndTime) const
{
	return MotionWarpingComp && RootMotionModifier ? MotionWarpingComp->AddModifierFromTemplate(RootMotionModifier, Animation, StartTime, EndTime) : nullptr;
}

void UAnimNotifyState_MotionWarping::OnRootMotionModifierActivate(UMotionWarpingComponent* MotionWarpingComp, URootMotionModifier* Modifier)
{
	OnWarpBegin(MotionWarpingComp, Modifier);
}

void UAnimNotifyState_MotionWarping::OnRootMotionModifierUpdate(UMotionWarpingComponent* MotionWarpingComp, URootMotionModifier* Modifier)
{
	OnWarpUpdate(MotionWarpingComp, Modifier);
}

void UAnimNotifyState_MotionWarping::OnRootMotionModifierDeactivate(UMotionWarpingComponent* MotionWarpingComp, URootMotionModifier* Modifier)
{
	OnWarpEnd(MotionWarpingComp, Modifier);
}

#if WITH_EDITOR
void UAnimNotifyState_MotionWarping::ValidateAssociatedAssets()
{
}
#endif

FTransform UMotionWarpingUtilities::ExtractRootMotionFromAnimation(const UAnimSequenceBase* Animation, float StartTime, float EndTime)
{
	if (const UAnimSequence* Sequence = Cast<UAnimSequence>(Animation))
	{
		return Sequence->ExtractRootMotionFromRange(StartTime, EndTime);
	}

	if (const UAnimMontage* Montage = Cast<UAnimMontage>(Animation))
	{
		return Montage->ExtractRootMotionFromTrackRange(StartTime, EndTime);
	}

	return FTransform::Identity;
}

void UMotionWarpingUtilities::ExtractLocalSpacePose(const UAnimSequenceBase* Animation, const FBoneContainer& BoneContainer, float Time, bool bExtractRootMotion, FCompactPose& OutPose)
{
}

void UMotionWarpingUtilities::ExtractComponentSpacePose(const UAnimSequenceBase* Animation, const FBoneContainer& BoneContainer, float Time, bool bExtractRootMotion, FCSPose<FCompactPose>& OutPose)
{
}

FTransform UMotionWarpingUtilities::ExtractRootTransformFromAnimation(const UAnimSequenceBase* Animation, float Time)
{
	return ExtractRootMotionFromAnimation(Animation, 0.0f, Time);
}

void UMotionWarpingUtilities::GetMotionWarpingWindowsFromAnimation(const UAnimSequenceBase* Animation, TArray<FMotionWarpingWindowData>& OutWindows)
{
	OutWindows.Reset();
	if (!Animation)
	{
		return;
	}

	for (const FAnimNotifyEvent& NotifyEvent : Animation->Notifies)
	{
		UAnimNotifyState_MotionWarping* MotionWarpNotify = Cast<UAnimNotifyState_MotionWarping>(NotifyEvent.NotifyStateClass);
		if (!MotionWarpNotify)
		{
			continue;
		}

		FMotionWarpingWindowData Window;
		Window.AnimNotify = MotionWarpNotify;
		Window.StartTime = NotifyEvent.GetTriggerTime();
		Window.EndTime = Window.StartTime + NotifyEvent.GetDuration();
		OutWindows.Add(Window);
	}
}

void UMotionWarpingUtilities::GetMotionWarpingWindowsForWarpTargetFromAnimation(const UAnimSequenceBase* Animation, FName WarpTargetName, TArray<FMotionWarpingWindowData>& OutWindows)
{
	TArray<FMotionWarpingWindowData> AllWindows;
	GetMotionWarpingWindowsFromAnimation(Animation, AllWindows);

	OutWindows.Reset();
	for (const FMotionWarpingWindowData& Window : AllWindows)
	{
		const URootMotionModifier_Warp* WarpModifier = Window.AnimNotify ? Cast<URootMotionModifier_Warp>(Window.AnimNotify->RootMotionModifier) : nullptr;
		if (!WarpModifier || WarpModifier->WarpTargetName == WarpTargetName)
		{
			OutWindows.Add(Window);
		}
	}
}

FTransform UMotionWarpingUtilities::CalculateRootTransformRelativeToWarpPointAtTime(const ACharacter& Character, const UAnimSequenceBase* Animation, float Time, const FName& WarpPointBoneName)
{
	return FTransform::Identity;
}

FTransform UMotionWarpingUtilities::CalculateRootTransformRelativeToWarpPointAtTime(const ACharacter& Character, const UAnimSequenceBase* Animation, float Time, const FTransform& WarpPointTransform)
{
	return WarpPointTransform.Inverse() * ExtractRootTransformFromAnimation(Animation, Time);
}

UMotionWarpingComponent::UMotionWarpingComponent(const FObjectInitializer& ObjectInitializer)
	: Super(ObjectInitializer)
	, bSearchForWindowsInAnimsWithinMontages(true)
{
	SetIsReplicatedByDefault(true);
	bWantsInitializeComponent = true;
	PrimaryComponentTick.bCanEverTick = true;
	PrimaryComponentTick.bStartWithTickEnabled = true;
	PrimaryComponentTick.TickGroup = TG_PrePhysics;
}

void UMotionWarpingComponent::InitializeComponent()
{
	Super::InitializeComponent();
	CharacterOwner = Cast<ACharacter>(GetOwner());
	if (CharacterOwner.IsValid())
	{
		if (UCharacterMovementComponent* MoveComp = CharacterOwner->GetCharacterMovement())
		{
			MoveComp->ProcessRootMotionPreConvertToWorld.BindUObject(this, &UMotionWarpingComponent::ProcessRootMotionPreConvertToWorld_UE4);
			MoveComp->AddTickPrerequisiteComponent(this);
		}
	}
}

void UMotionWarpingComponent::UninitializeComponent()
{
	if (CharacterOwner.IsValid())
	{
		if (UCharacterMovementComponent* MoveComp = CharacterOwner->GetCharacterMovement())
		{
			MoveComp->RemoveTickPrerequisiteComponent(this);
			if (MoveComp->ProcessRootMotionPreConvertToWorld.IsBoundToObject(this))
			{
				MoveComp->ProcessRootMotionPreConvertToWorld.Unbind();
			}
		}
	}
	Super::UninitializeComponent();
}

void UMotionWarpingComponent::TickComponent(float DeltaTime, enum ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);
	Update(DeltaTime);
}

void UMotionWarpingComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);
	DOREPLIFETIME(UMotionWarpingComponent, WarpTargets);
}

bool UMotionWarpingComponent::ContainsModifier(const UAnimSequenceBase* Animation, float StartTime, float EndTime) const
{
	for (const URootMotionModifier* Modifier : Modifiers)
	{
		if (Modifier && Modifier->GetAnimation() == Animation && FMath::IsNearlyEqual(Modifier->StartTime, StartTime) && FMath::IsNearlyEqual(Modifier->EndTime, EndTime))
		{
			return true;
		}
	}
	return false;
}

int32 UMotionWarpingComponent::AddModifier(URootMotionModifier* Modifier)
{
	if (!Modifier)
	{
		return INDEX_NONE;
	}

	if (CharacterOwner.IsValid())
	{
		Modifier->StartTransform = CharacterOwner->GetActorTransform();
	}
	Modifier->ActualStartTime = Modifier->StartTime;
	Modifier->ElapsedTime = 0.f;
	Modifier->SetState(ERootMotionModifierState::Waiting);
	return Modifiers.Add(Modifier);
}

void UMotionWarpingComponent::DisableAllRootMotionModifiers()
{
	for (URootMotionModifier* Modifier : Modifiers)
	{
		if (Modifier)
		{
			Modifier->SetState(ERootMotionModifierState::Disabled);
		}
	}
}

URootMotionModifier* UMotionWarpingComponent::AddModifierFromTemplate(URootMotionModifier* Template, const UAnimSequenceBase* Animation, float StartTime, float EndTime)
{
	if (!Template)
	{
		return nullptr;
	}

	URootMotionModifier* Modifier = DuplicateObject<URootMotionModifier>(Template, this);
	Modifier->Animation = Animation;
	Modifier->StartTime = StartTime;
	Modifier->EndTime = EndTime;
	AddModifier(Modifier);
	return Modifier;
}

void UMotionWarpingComponent::AddOrUpdateWarpTarget(const FMotionWarpingTarget& WarpTarget)
{
	if (FMotionWarpingTarget* Existing = WarpTargets.FindByPredicate([&WarpTarget](const FMotionWarpingTarget& Item) { return Item.Name == WarpTarget.Name; }))
	{
		*Existing = WarpTarget;
	}
	else
	{
		WarpTargets.Add(WarpTarget);
	}
}

void UMotionWarpingComponent::AddOrUpdateWarpTargetFromTransform(FName WarpTargetName, FTransform TargetTransform)
{
	AddOrUpdateWarpTarget(FMotionWarpingTarget(WarpTargetName, TargetTransform));
}

void UMotionWarpingComponent::AddOrUpdateWarpTargetFromComponent(FName WarpTargetName, const USceneComponent* Component, FName BoneName, bool bFollowComponent, FVector LocationOffset, FRotator RotationOffset)
{
	AddOrUpdateWarpTarget(FMotionWarpingTarget(WarpTargetName, Component, BoneName, bFollowComponent, LocationOffset, RotationOffset));
}

int32 UMotionWarpingComponent::RemoveWarpTarget(FName WarpTargetName)
{
	return WarpTargets.RemoveAll([WarpTargetName](const FMotionWarpingTarget& Item) { return Item.Name == WarpTargetName; });
}

int32 UMotionWarpingComponent::RemoveAllWarpTargets()
{
	const int32 Count = WarpTargets.Num();
	WarpTargets.Reset();
	return Count;
}

FTransform UMotionWarpingComponent::ProcessRootMotionForTesting(const FTransform& InRootMotion, float DeltaSeconds)
{
	return ProcessRootMotionPreConvertToWorld(InRootMotion, CharacterOwner.IsValid() ? CharacterOwner->GetCharacterMovement() : nullptr, DeltaSeconds);
}

void UMotionWarpingComponent::Update(float DeltaSeconds)
{
	OnPreUpdate.Broadcast(this);

	UAnimMontage* Montage = nullptr;
	UAnimInstance* AnimInstance = nullptr;
	float CurrentPosition = 0.f;
	float PlayRate = 1.f;
	if (ACharacter* Character = CharacterOwner.Get())
	{
		AnimInstance = Character->GetMesh() ? Character->GetMesh()->GetAnimInstance() : nullptr;
		Montage = AnimInstance ? AnimInstance->GetCurrentActiveMontage() : nullptr;
		if (Montage)
		{
			CurrentPosition = AnimInstance->Montage_GetPosition(Montage);
			PlayRate = AnimInstance->Montage_GetPlayRate(Montage);
		}
	}

	if (ActiveMontage.Get() != Montage)
	{
		ActiveMontage = Montage;
		PreviousMontagePosition = CurrentPosition;
	}

	if (Montage)
	{
		AddModifiersFromMontage(Montage, CurrentPosition);
	}

	for (int32 Index = Modifiers.Num() - 1; Index >= 0; --Index)
	{
		URootMotionModifier* Modifier = Modifiers[Index];
		if (!Modifier || Modifier->GetState() == ERootMotionModifierState::MarkedForRemoval)
		{
			Modifiers.RemoveAt(Index);
			continue;
		}

		if (!Montage || Modifier->GetAnimation() != Montage || CurrentPosition >= Modifier->EndTime || CurrentPosition < Modifier->StartTime)
		{
			Modifier->SetState(ERootMotionModifierState::MarkedForRemoval);
			continue;
		}

		if (Modifier->GetState() == ERootMotionModifierState::Waiting)
		{
			if (ACharacter* Character = CharacterOwner.Get())
			{
				Modifier->StartTransform = Character->GetActorTransform();
			}
			Modifier->ActualStartTime = CurrentPosition;
			Modifier->ElapsedTime = 0.f;
			Modifier->SetState(ERootMotionModifierState::Active);
		}

		if (Modifier->GetState() == ERootMotionModifierState::Active)
		{
			FMotionWarpingUpdateContext Context;
			Context.Animation = Modifier->GetAnimation();
			Context.PreviousPosition = FMath::Clamp(PreviousMontagePosition, Modifier->StartTime, Modifier->EndTime);
			Context.CurrentPosition = FMath::Clamp(CurrentPosition, Modifier->StartTime, Modifier->EndTime);
			Context.Weight = 1.f;
			Context.PlayRate = PlayRate;
			Context.DeltaSeconds = DeltaSeconds;
			Modifier->Update(Context);
			Modifier->ElapsedTime = FMath::Max(0.f, CurrentPosition - Modifier->ActualStartTime) / FMath::Max(FMath::Abs(PlayRate), KINDA_SMALL_NUMBER);
		}
	}

	PreviousMontagePosition = CurrentPosition;
}

void UMotionWarpingComponent::AddModifiersFromMontage(const UAnimMontage* Montage, float CurrentPosition)
{
	if (!Montage)
	{
		return;
	}

	auto AddWindowIfRelevant = [this, Montage, CurrentPosition](UAnimNotifyState_MotionWarping* Notify, float StartTime, float EndTime)
	{
		if (Notify && CurrentPosition >= StartTime && CurrentPosition < EndTime && !ContainsModifier(Montage, StartTime, EndTime))
		{
			Notify->OnBecomeRelevant(this, Montage, StartTime, EndTime);
		}
	};

	TArray<FMotionWarpingWindowData> MontageWindows;
	UMotionWarpingUtilities::GetMotionWarpingWindowsFromAnimation(Montage, MontageWindows);
	for (const FMotionWarpingWindowData& Window : MontageWindows)
	{
		AddWindowIfRelevant(Window.AnimNotify, Window.StartTime, Window.EndTime);
	}

	if (!bSearchForWindowsInAnimsWithinMontages)
	{
		return;
	}

	for (const FSlotAnimationTrack& SlotTrack : Montage->SlotAnimTracks)
	{
		for (const FAnimSegment& Segment : SlotTrack.AnimTrack.AnimSegments)
		{
			if (!Segment.AnimReference || Segment.GetValidPlayRate() <= 0.f)
			{
				continue;
			}

			TArray<FMotionWarpingWindowData> AnimationWindows;
			UMotionWarpingUtilities::GetMotionWarpingWindowsFromAnimation(Segment.AnimReference, AnimationWindows);
			const float SegmentRate = Segment.GetValidPlayRate();
			const float LoopLength = (Segment.AnimEndTime - Segment.AnimStartTime) / SegmentRate;
			for (int32 LoopIndex = 0; LoopIndex < Segment.LoopingCount; ++LoopIndex)
			{
				for (const FMotionWarpingWindowData& Window : AnimationWindows)
				{
					const float ClippedStart = FMath::Max(Window.StartTime, Segment.AnimStartTime);
					const float ClippedEnd = FMath::Min(Window.EndTime, Segment.AnimEndTime);
					if (ClippedEnd <= ClippedStart)
					{
						continue;
					}

					const float TrackStart = Segment.StartPos + LoopIndex * LoopLength + (ClippedStart - Segment.AnimStartTime) / SegmentRate;
					const float TrackEnd = Segment.StartPos + LoopIndex * LoopLength + (ClippedEnd - Segment.AnimStartTime) / SegmentRate;
					AddWindowIfRelevant(Window.AnimNotify, TrackStart, TrackEnd);
				}
			}
		}
	}
}

bool UMotionWarpingComponent::FindAndUpdateWarpTarget(const FMotionWarpingTarget& WarpTarget)
{
	return FindWarpTarget(WarpTarget.Name) != nullptr;
}

FTransform UMotionWarpingComponent::ProcessRootMotionPreConvertToWorld(const FTransform& InRootMotion, UCharacterMovementComponent* CharacterMovementComponent, float DeltaSeconds)
{
	FTransform Result = InRootMotion;
	for (URootMotionModifier* Modifier : Modifiers)
	{
		if (Modifier && Modifier->GetState() == ERootMotionModifierState::Active)
		{
			Result = Modifier->ProcessRootMotion(Result, DeltaSeconds);
		}
	}
	return Result;
}

FTransform UMotionWarpingComponent::ProcessRootMotionPreConvertToWorld_UE4(const FTransform& InRootMotion, UCharacterMovementComponent* CharacterMovementComponent)
{
	const float DeltaSeconds = CharacterMovementComponent && CharacterMovementComponent->GetWorld()
		? CharacterMovementComponent->GetWorld()->GetDeltaSeconds()
		: 0.f;
	return ProcessRootMotionPreConvertToWorld(InRootMotion, CharacterMovementComponent, DeltaSeconds);
}

URootMotionModifier::URootMotionModifier(const FObjectInitializer& ObjectInitializer)
	: Super(ObjectInitializer)
{
}

void URootMotionModifier::OnStateChanged(ERootMotionModifierState LastState)
{
	UMotionWarpingComponent* OwnerComp = GetOwnerComponent();
	if (!OwnerComp)
	{
		return;
	}

	if (State == ERootMotionModifierState::Active)
	{
		OnActivateDelegate.ExecuteIfBound(OwnerComp, this);
	}
	else if ((State == ERootMotionModifierState::MarkedForRemoval || State == ERootMotionModifierState::Disabled) && LastState == ERootMotionModifierState::Active)
	{
		OnDeactivateDelegate.ExecuteIfBound(OwnerComp, this);
	}
}

void URootMotionModifier::SetState(ERootMotionModifierState NewState)
{
	if (State != NewState)
	{
		const ERootMotionModifierState LastState = State;
		State = NewState;
		OnStateChanged(LastState);
	}
}

UMotionWarpingComponent* URootMotionModifier::GetOwnerComponent() const
{
	return Cast<UMotionWarpingComponent>(GetOuter());
}

ACharacter* URootMotionModifier::GetCharacterOwner() const
{
	return GetOwnerComponent() ? GetOwnerComponent()->GetCharacterOwner() : nullptr;
}

void URootMotionModifier::Update(const FMotionWarpingUpdateContext& Context)
{
	PreviousPosition = Context.PreviousPosition;
	CurrentPosition = Context.CurrentPosition;
	Weight = Context.Weight;
	OnUpdateDelegate.ExecuteIfBound(GetOwnerComponent(), this);
}

FMotionWarpingTarget::FMotionWarpingTarget(const FName& InName, const USceneComponent* InComp, FName InBoneName, bool bInbFollowComponent, const FVector& InLocOffset, const FRotator& InRotOffset)
	: Name(InName)
	, Location(FVector::ZeroVector)
	, Rotation(FRotator::ZeroRotator)
	, Component(InComp)
	, BoneName(InBoneName)
	, bFollowComponent(bInbFollowComponent)
	, LocationOffset(InLocOffset)
	, RotationOffset(InRotOffset)
{
	const FTransform Transform = GetTargetTransformFromComponent(InComp, InBoneName);
	Location = Transform.GetLocation();
	Rotation = Transform.Rotator();
}

FTransform FMotionWarpingTarget::GetTargetTrasform() const
{
	FTransform Transform(Rotation, Location);
	if (bFollowComponent && Component.IsValid())
	{
		Transform = GetTargetTransformFromComponent(Component.Get(), BoneName);
	}
	Transform.ConcatenateRotation(RotationOffset.Quaternion());
	Transform.AddToTranslation(LocationOffset);
	return Transform;
}

FTransform FMotionWarpingTarget::GetTargetTransformFromComponent(const USceneComponent* Comp, const FName& BoneName)
{
	if (!Comp)
	{
		return FTransform::Identity;
	}

	if (const USkeletalMeshComponent* SkelComp = Cast<USkeletalMeshComponent>(Comp))
	{
		if (BoneName != NAME_None)
		{
			return SkelComp->GetSocketTransform(BoneName);
		}
	}

	return Comp->GetComponentTransform();
}

URootMotionModifier_Warp::URootMotionModifier_Warp(const FObjectInitializer& ObjectInitializer)
	: Super(ObjectInitializer)
{
}

void URootMotionModifier_Warp::Update(const FMotionWarpingUpdateContext& Context)
{
	Super::Update(Context);
	if (UMotionWarpingComponent* OwnerComp = GetOwnerComponent())
	{
		if (const FMotionWarpingTarget* Target = OwnerComp->FindWarpTarget(WarpTargetName))
		{
			const FTransform NewTarget = Target->GetTargetTrasform();
			if (!NewTarget.Equals(CachedTargetTransform))
			{
				CachedTargetTransform = NewTarget;
				OnTargetTransformChanged();
			}
		}
	}
}

void URootMotionModifier_Warp::OnTargetTransformChanged()
{
}

#if !(UE_BUILD_SHIPPING || UE_BUILD_TEST)
void URootMotionModifier_Warp::PrintLog(const FString& Name, const FTransform& OriginalRootMotion, const FTransform& WarpedRootMotion) const
{
	UE_LOG(LogMotionWarping, Verbose, TEXT("%s Original=%s Warped=%s"), *Name, *OriginalRootMotion.ToHumanReadableString(), *WarpedRootMotion.ToHumanReadableString());
}
#endif

FQuat URootMotionModifier_Warp::GetTargetRotation() const
{
	if (RotationType == EMotionWarpRotationType::Facing)
	{
		if (const ACharacter* Character = GetCharacterOwner())
		{
			const FVector Direction = (CachedTargetTransform.GetLocation() - Character->GetActorLocation()).GetSafeNormal2D();
			return Direction.IsNearlyZero() ? CachedTargetTransform.GetRotation() : Direction.Rotation().Quaternion();
		}
	}
	return CachedTargetTransform.GetRotation();
}

FQuat URootMotionModifier_Warp::WarpRotation(const FTransform& RootMotionDelta, const FTransform& RootMotionTotal, float DeltaSeconds)
{
	if (!bWarpRotation || !GetCharacterOwner())
	{
		return RootMotionDelta.GetRotation();
	}

	const FQuat CurrentRotation = GetCharacterOwner()->GetActorQuat();
	const FQuat DesiredRotation = GetTargetRotation();
	const float WindowDuration = FMath::Max(EndTime - StartTime, KINDA_SMALL_NUMBER);
	const float RemainingTime = FMath::Max(WindowDuration - ElapsedTime, DeltaSeconds);

	float Alpha = FMath::Clamp(DeltaSeconds / RemainingTime, 0.f, 1.f);
	if (WarpRotationTimeMultiplier > KINDA_SMALL_NUMBER)
	{
		Alpha = FMath::Clamp(Alpha / WarpRotationTimeMultiplier, 0.f, 1.f);
	}

	FQuat NewRotation = FQuat::Slerp(CurrentRotation, DesiredRotation, Alpha).GetNormalized();
	if (RotationMethod == EMotionWarpRotationMethod::SlerpWithClampedRate || RotationMethod == EMotionWarpRotationMethod::ConstantRate)
	{
		const float MaxDegrees = WarpMaxRotationRate > 0.f ? WarpMaxRotationRate * DeltaSeconds : 360.f;
		const float AngleDegrees = FMath::RadiansToDegrees(CurrentRotation.AngularDistance(NewRotation));
		if (AngleDegrees > MaxDegrees && AngleDegrees > KINDA_SMALL_NUMBER)
		{
			NewRotation = FQuat::Slerp(CurrentRotation, NewRotation, MaxDegrees / AngleDegrees).GetNormalized();
		}
	}

	return CurrentRotation.Inverse() * NewRotation;
}

UDEPRECATED_RootMotionModifier_SimpleWarp::UDEPRECATED_RootMotionModifier_SimpleWarp(const FObjectInitializer& ObjectInitializer)
	: Super(ObjectInitializer)
{
}

FTransform UDEPRECATED_RootMotionModifier_SimpleWarp::ProcessRootMotion(const FTransform& InRootMotion, float DeltaSeconds)
{
	return InRootMotion;
}

URootMotionModifier_Scale* URootMotionModifier_Scale::AddRootMotionModifierScale(UMotionWarpingComponent* InMotionWarpingComp, const UAnimSequenceBase* InAnimation, float InStartTime, float InEndTime, FVector InScale)
{
	if (!InMotionWarpingComp)
	{
		return nullptr;
	}

	URootMotionModifier_Scale* Modifier = NewObject<URootMotionModifier_Scale>(InMotionWarpingComp);
	Modifier->Animation = InAnimation;
	Modifier->StartTime = InStartTime;
	Modifier->EndTime = InEndTime;
	Modifier->Scale = InScale;
	InMotionWarpingComp->AddModifier(Modifier);
	return Modifier;
}

URootMotionModifier_SkewWarp::URootMotionModifier_SkewWarp(const FObjectInitializer& ObjectInitializer)
	: Super(ObjectInitializer)
{
}

FTransform URootMotionModifier_SkewWarp::ProcessRootMotion(const FTransform& InRootMotion, float DeltaSeconds)
{
	FTransform FinalRootMotion = InRootMotion;
	const ACharacter* Character = GetCharacterOwner();
	if (!Character)
	{
		return FinalRootMotion;
	}

	if (bWarpTranslation)
	{
		// Extract the TOTAL root motion for this window (this is in Mesh/Skeleton local space)
		const FTransform TotalRootMotion = UMotionWarpingUtilities::ExtractRootMotionFromAnimation(GetAnimation(), StartTime, EndTime);
		FVector OriginalTotal = TotalRootMotion.GetTranslation();

		FTransform StartMeshTransform = StartTransform;
		if (Character->GetMesh())
		{
			// InRootMotion is already scaled by the mesh scale in UCharacterMovementComponent::TickCharacterPose,
			// so we must scale OriginalTotal to match, otherwise the ratio will overshoot/undershoot.
			OriginalTotal *= Character->GetMesh()->GetComponentScale();
			
			// StartTransform is the Actor's transform. We need the TargetLocalDelta in MESH space, 
			// because InRootMotion and OriginalTotal are in Mesh space.
			StartMeshTransform = Character->GetMesh()->GetRelativeTransform() * StartTransform;
		}

		// The total displacement we need to achieve (from start to target),
		// expressed in the START MESH's local space — same space as OriginalTotal
		const FVector TargetWorldDelta = CachedTargetTransform.GetLocation() - StartTransform.GetLocation();
		FVector TargetLocalDelta = StartMeshTransform.InverseTransformVectorNoScale(TargetWorldDelta);

		if (bIgnoreZAxis)
		{
			TargetLocalDelta.Z = OriginalTotal.Z;
		}

		FVector DeltaTranslation = InRootMotion.GetTranslation();
		FVector WarpedTranslation = DeltaTranslation;

		if (OriginalTotal.SizeSquared() > KINDA_SMALL_NUMBER)
		{
			// Project this frame's delta onto the total expected path to find our progress fraction.
			// This completely ignores perpendicular noise, preventing the violent oscillation seen with per-axis scaling.
			float Proportion = FVector::DotProduct(DeltaTranslation, OriginalTotal) / OriginalTotal.SizeSquared();
			
			// Total required correction to get from the animation's natural end to the target
			FVector TotalCorrection = TargetLocalDelta - OriginalTotal;
			
			// Apply this frame's proportionate share of the correction
			WarpedTranslation += TotalCorrection * Proportion;
		}
		else
		{
			// Fallback: Animation has almost no root motion translation. Use time-based interpolation.
			const float WindowDuration = FMath::Max(EndTime - StartTime, KINDA_SMALL_NUMBER);
			const float StepAlpha = FMath::Clamp(DeltaSeconds / WindowDuration, 0.f, 1.f);
			WarpedTranslation = TargetLocalDelta * StepAlpha;
		}

		if (bIgnoreZAxis)
		{
			WarpedTranslation.Z = DeltaTranslation.Z;
		}
		FinalRootMotion.SetTranslation(WarpedTranslation);
	}

	if (bWarpRotation)
	{
		const FTransform TotalRootMotion = UMotionWarpingUtilities::ExtractRootMotionFromAnimation(GetAnimation(), StartTime, EndTime);
		FinalRootMotion.SetRotation(WarpRotation(InRootMotion, TotalRootMotion, DeltaSeconds));
	}

	return FinalRootMotion;
}

FVector URootMotionModifier_SkewWarp::WarpTranslation(const FTransform& CurrentTransform, const FVector& DeltaTranslation, const FVector& TotalTranslation, const FVector& TargetLocation)
{
	// This function is now superseded by the inline logic in ProcessRootMotion above to safely use StepAlpha.
	return DeltaTranslation;
}

URootMotionModifier_SkewWarp* URootMotionModifier_SkewWarp::AddRootMotionModifierSkewWarp(UMotionWarpingComponent* InMotionWarpingComp, const UAnimSequenceBase* InAnimation, float InStartTime, float InEndTime, FName InWarpTargetName, EWarpPointAnimProvider InWarpPointAnimProvider, FTransform InWarpPointAnimTransform, FName InWarpPointAnimBoneName, bool bInWarpTranslation, bool bInIgnoreZAxis, bool bInWarpRotation, EMotionWarpRotationType InRotationType, EMotionWarpRotationMethod InRotationMethod, float InWarpRotationTimeMultiplier, float InWarpMaxRotationRate)
{
	if (!InMotionWarpingComp)
	{
		return nullptr;
	}

	URootMotionModifier_SkewWarp* Modifier = NewObject<URootMotionModifier_SkewWarp>(InMotionWarpingComp);
	Modifier->Animation = InAnimation;
	Modifier->StartTime = InStartTime;
	Modifier->EndTime = InEndTime;
	Modifier->WarpTargetName = InWarpTargetName;
	Modifier->WarpPointAnimProvider = InWarpPointAnimProvider;
	Modifier->WarpPointAnimTransform = InWarpPointAnimTransform;
	Modifier->WarpPointAnimBoneName = InWarpPointAnimBoneName;
	Modifier->bWarpTranslation = bInWarpTranslation;
	Modifier->bIgnoreZAxis = bInIgnoreZAxis;
	Modifier->bWarpRotation = bInWarpRotation;
	Modifier->RotationType = InRotationType;
	Modifier->RotationMethod = InRotationMethod;
	Modifier->WarpRotationTimeMultiplier = InWarpRotationTimeMultiplier;
	Modifier->WarpMaxRotationRate = InWarpMaxRotationRate;
	InMotionWarpingComp->AddModifier(Modifier);
	return Modifier;
}

URootMotionModifier_AdjustmentBlendWarp::URootMotionModifier_AdjustmentBlendWarp(const FObjectInitializer& ObjectInitializer)
	: Super(ObjectInitializer)
{
}

void URootMotionModifier_AdjustmentBlendWarp::OnTargetTransformChanged()
{
}

FTransform URootMotionModifier_AdjustmentBlendWarp::ProcessRootMotion(const FTransform& InRootMotion, float DeltaSeconds)
{
	return InRootMotion;
}

void URootMotionModifier_AdjustmentBlendWarp::GetIKBoneTransformAndAlpha(FName BoneName, FTransform& OutTransform, float& OutAlpha) const
{
	OutTransform = FTransform::Identity;
	OutAlpha = 0.0f;
}

URootMotionModifier_AdjustmentBlendWarp* URootMotionModifier_AdjustmentBlendWarp::AddRootMotionModifierAdjustmentBlendWarp(UMotionWarpingComponent* InMotionWarpingComp, const UAnimSequenceBase* InAnimation, float InStartTime, float InEndTime, FName InWarpTargetName, EWarpPointAnimProvider InWarpPointAnimProvider, FTransform InWarpPointAnimTransform, FName InWarpPointAnimBoneName, bool bInWarpTranslation, bool bInIgnoreZAxis, bool bInWarpRotation, bool bInWarpIKBones, const TArray<FName>& InIKBones)
{
	if (!InMotionWarpingComp)
	{
		return nullptr;
	}

	URootMotionModifier_AdjustmentBlendWarp* Modifier = NewObject<URootMotionModifier_AdjustmentBlendWarp>(InMotionWarpingComp);
	Modifier->Animation = InAnimation;
	Modifier->StartTime = InStartTime;
	Modifier->EndTime = InEndTime;
	Modifier->WarpTargetName = InWarpTargetName;
	Modifier->WarpPointAnimProvider = InWarpPointAnimProvider;
	Modifier->WarpPointAnimTransform = InWarpPointAnimTransform;
	Modifier->WarpPointAnimBoneName = InWarpPointAnimBoneName;
	Modifier->bWarpTranslation = bInWarpTranslation;
	Modifier->bIgnoreZAxis = bInIgnoreZAxis;
	Modifier->bWarpRotation = bInWarpRotation;
	Modifier->bWarpIKBones = bInWarpIKBones;
	Modifier->IKBones = InIKBones;
	InMotionWarpingComp->AddModifier(Modifier);
	return Modifier;
}

void URootMotionModifier_AdjustmentBlendWarp::GetAdjustmentBlendIKBoneTransformAndAlpha(ACharacter* Character, FName BoneName, FTransform& OutTransform, float& OutAlpha)
{
	OutTransform = FTransform::Identity;
	OutAlpha = 0.0f;
}

void URootMotionModifier_AdjustmentBlendWarp::PrecomputeWarpedTracks()
{
}

FTransform URootMotionModifier_AdjustmentBlendWarp::ExtractWarpedRootMotion() const
{
	return FTransform::Identity;
}

void URootMotionModifier_AdjustmentBlendWarp::ExtractBoneTransformAtTime(FTransform& OutTransform, const FName& BoneName, float Time) const
{
	OutTransform = FTransform::Identity;
}

void URootMotionModifier_AdjustmentBlendWarp::ExtractBoneTransformAtTime(FTransform& OutTransform, int32 TrackIndex, float Time) const
{
	OutTransform = FTransform::Identity;
}

void URootMotionModifier_AdjustmentBlendWarp::ExtractBoneTransformAtFrame(FTransform& OutTransform, int32 TrackIndex, int32 Frame) const
{
	OutTransform = FTransform::Identity;
}

#if !(UE_BUILD_SHIPPING || UE_BUILD_TEST)
void URootMotionModifier_AdjustmentBlendWarp::DrawDebugWarpedTracks(float DrawDuration) const
{
}
#endif

void URootMotionModifier_AdjustmentBlendWarp::ExtractMotionDeltaFromRange(const FBoneContainer& BoneContainer, const UAnimSequenceBase* Animation, float StartTime, float EndTime, float SampleRate, FMotionDeltaTrackContainer& OutMotionDeltaTracks)
{
	OutMotionDeltaTracks.Tracks.Reset();
}

void URootMotionModifier_AdjustmentBlendWarp::AdjustmentBlendWarp(const FBoneContainer& BoneContainer, const FCSPose<FCompactPose>& AdditivePose, const FMotionDeltaTrackContainer& MotionDeltaTracks, FAnimSequenceTrackContainer& Output)
{
}
