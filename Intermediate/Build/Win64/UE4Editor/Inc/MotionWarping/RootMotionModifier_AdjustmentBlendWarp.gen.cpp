// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MotionWarping/Public/RootMotionModifier_AdjustmentBlendWarp.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRootMotionModifier_AdjustmentBlendWarp() {}
// Cross Module References
	MOTIONWARPING_API UScriptStruct* Z_Construct_UScriptStruct_FMotionDeltaTrackContainer();
	UPackage* Z_Construct_UPackage__Script_MotionWarping();
	MOTIONWARPING_API UScriptStruct* Z_Construct_UScriptStruct_FMotionDeltaTrack();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
	MOTIONWARPING_API UClass* Z_Construct_UClass_URootMotionModifier_AdjustmentBlendWarp_NoRegister();
	MOTIONWARPING_API UClass* Z_Construct_UClass_URootMotionModifier_AdjustmentBlendWarp();
	MOTIONWARPING_API UClass* Z_Construct_UClass_URootMotionModifier_Warp();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FAnimSequenceTrackContainer();
// End Cross Module References
class UScriptStruct* FMotionDeltaTrackContainer::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern MOTIONWARPING_API uint32 Get_Z_Construct_UScriptStruct_FMotionDeltaTrackContainer_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FMotionDeltaTrackContainer, Z_Construct_UPackage__Script_MotionWarping(), TEXT("MotionDeltaTrackContainer"), sizeof(FMotionDeltaTrackContainer), Get_Z_Construct_UScriptStruct_FMotionDeltaTrackContainer_Hash());
	}
	return Singleton;
}
template<> MOTIONWARPING_API UScriptStruct* StaticStruct<FMotionDeltaTrackContainer>()
{
	return FMotionDeltaTrackContainer::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FMotionDeltaTrackContainer(FMotionDeltaTrackContainer::StaticStruct, TEXT("/Script/MotionWarping"), TEXT("MotionDeltaTrackContainer"), false, nullptr, nullptr);
static struct FScriptStruct_MotionWarping_StaticRegisterNativesFMotionDeltaTrackContainer
{
	FScriptStruct_MotionWarping_StaticRegisterNativesFMotionDeltaTrackContainer()
	{
		UScriptStruct::DeferCppStructOps<FMotionDeltaTrackContainer>(FName(TEXT("MotionDeltaTrackContainer")));
	}
} ScriptStruct_MotionWarping_StaticRegisterNativesFMotionDeltaTrackContainer;
	struct Z_Construct_UScriptStruct_FMotionDeltaTrackContainer_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Tracks_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Tracks_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Tracks;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMotionDeltaTrackContainer_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/RootMotionModifier_AdjustmentBlendWarp.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FMotionDeltaTrackContainer_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMotionDeltaTrackContainer>();
	}
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMotionDeltaTrackContainer_Statics::NewProp_Tracks_Inner = { "Tracks", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FMotionDeltaTrack, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMotionDeltaTrackContainer_Statics::NewProp_Tracks_MetaData[] = {
		{ "ModuleRelativePath", "Public/RootMotionModifier_AdjustmentBlendWarp.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FMotionDeltaTrackContainer_Statics::NewProp_Tracks = { "Tracks", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMotionDeltaTrackContainer, Tracks), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FMotionDeltaTrackContainer_Statics::NewProp_Tracks_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMotionDeltaTrackContainer_Statics::NewProp_Tracks_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMotionDeltaTrackContainer_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMotionDeltaTrackContainer_Statics::NewProp_Tracks_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMotionDeltaTrackContainer_Statics::NewProp_Tracks,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMotionDeltaTrackContainer_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_MotionWarping,
		nullptr,
		&NewStructOps,
		"MotionDeltaTrackContainer",
		sizeof(FMotionDeltaTrackContainer),
		alignof(FMotionDeltaTrackContainer),
		Z_Construct_UScriptStruct_FMotionDeltaTrackContainer_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMotionDeltaTrackContainer_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMotionDeltaTrackContainer_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMotionDeltaTrackContainer_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMotionDeltaTrackContainer()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FMotionDeltaTrackContainer_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_MotionWarping();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("MotionDeltaTrackContainer"), sizeof(FMotionDeltaTrackContainer), Get_Z_Construct_UScriptStruct_FMotionDeltaTrackContainer_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FMotionDeltaTrackContainer_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FMotionDeltaTrackContainer_Hash() { return 528737225U; }
class UScriptStruct* FMotionDeltaTrack::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern MOTIONWARPING_API uint32 Get_Z_Construct_UScriptStruct_FMotionDeltaTrack_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FMotionDeltaTrack, Z_Construct_UPackage__Script_MotionWarping(), TEXT("MotionDeltaTrack"), sizeof(FMotionDeltaTrack), Get_Z_Construct_UScriptStruct_FMotionDeltaTrack_Hash());
	}
	return Singleton;
}
template<> MOTIONWARPING_API UScriptStruct* StaticStruct<FMotionDeltaTrack>()
{
	return FMotionDeltaTrack::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FMotionDeltaTrack(FMotionDeltaTrack::StaticStruct, TEXT("/Script/MotionWarping"), TEXT("MotionDeltaTrack"), false, nullptr, nullptr);
static struct FScriptStruct_MotionWarping_StaticRegisterNativesFMotionDeltaTrack
{
	FScriptStruct_MotionWarping_StaticRegisterNativesFMotionDeltaTrack()
	{
		UScriptStruct::DeferCppStructOps<FMotionDeltaTrack>(FName(TEXT("MotionDeltaTrack")));
	}
} ScriptStruct_MotionWarping_StaticRegisterNativesFMotionDeltaTrack;
	struct Z_Construct_UScriptStruct_FMotionDeltaTrack_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_BoneTransformTrack_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BoneTransformTrack_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_BoneTransformTrack;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_DeltaTranslationTrack_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DeltaTranslationTrack_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_DeltaTranslationTrack;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_DeltaRotationTrack_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DeltaRotationTrack_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_DeltaRotationTrack;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TotalTranslation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_TotalTranslation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TotalRotation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_TotalRotation;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMotionDeltaTrack_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/RootMotionModifier_AdjustmentBlendWarp.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FMotionDeltaTrack_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMotionDeltaTrack>();
	}
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMotionDeltaTrack_Statics::NewProp_BoneTransformTrack_Inner = { "BoneTransformTrack", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMotionDeltaTrack_Statics::NewProp_BoneTransformTrack_MetaData[] = {
		{ "ModuleRelativePath", "Public/RootMotionModifier_AdjustmentBlendWarp.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FMotionDeltaTrack_Statics::NewProp_BoneTransformTrack = { "BoneTransformTrack", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMotionDeltaTrack, BoneTransformTrack), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FMotionDeltaTrack_Statics::NewProp_BoneTransformTrack_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMotionDeltaTrack_Statics::NewProp_BoneTransformTrack_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMotionDeltaTrack_Statics::NewProp_DeltaTranslationTrack_Inner = { "DeltaTranslationTrack", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMotionDeltaTrack_Statics::NewProp_DeltaTranslationTrack_MetaData[] = {
		{ "ModuleRelativePath", "Public/RootMotionModifier_AdjustmentBlendWarp.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FMotionDeltaTrack_Statics::NewProp_DeltaTranslationTrack = { "DeltaTranslationTrack", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMotionDeltaTrack, DeltaTranslationTrack), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FMotionDeltaTrack_Statics::NewProp_DeltaTranslationTrack_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMotionDeltaTrack_Statics::NewProp_DeltaTranslationTrack_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMotionDeltaTrack_Statics::NewProp_DeltaRotationTrack_Inner = { "DeltaRotationTrack", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMotionDeltaTrack_Statics::NewProp_DeltaRotationTrack_MetaData[] = {
		{ "ModuleRelativePath", "Public/RootMotionModifier_AdjustmentBlendWarp.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FMotionDeltaTrack_Statics::NewProp_DeltaRotationTrack = { "DeltaRotationTrack", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMotionDeltaTrack, DeltaRotationTrack), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FMotionDeltaTrack_Statics::NewProp_DeltaRotationTrack_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMotionDeltaTrack_Statics::NewProp_DeltaRotationTrack_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMotionDeltaTrack_Statics::NewProp_TotalTranslation_MetaData[] = {
		{ "ModuleRelativePath", "Public/RootMotionModifier_AdjustmentBlendWarp.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMotionDeltaTrack_Statics::NewProp_TotalTranslation = { "TotalTranslation", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMotionDeltaTrack, TotalTranslation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FMotionDeltaTrack_Statics::NewProp_TotalTranslation_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMotionDeltaTrack_Statics::NewProp_TotalTranslation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMotionDeltaTrack_Statics::NewProp_TotalRotation_MetaData[] = {
		{ "ModuleRelativePath", "Public/RootMotionModifier_AdjustmentBlendWarp.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMotionDeltaTrack_Statics::NewProp_TotalRotation = { "TotalRotation", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMotionDeltaTrack, TotalRotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(Z_Construct_UScriptStruct_FMotionDeltaTrack_Statics::NewProp_TotalRotation_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMotionDeltaTrack_Statics::NewProp_TotalRotation_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMotionDeltaTrack_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMotionDeltaTrack_Statics::NewProp_BoneTransformTrack_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMotionDeltaTrack_Statics::NewProp_BoneTransformTrack,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMotionDeltaTrack_Statics::NewProp_DeltaTranslationTrack_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMotionDeltaTrack_Statics::NewProp_DeltaTranslationTrack,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMotionDeltaTrack_Statics::NewProp_DeltaRotationTrack_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMotionDeltaTrack_Statics::NewProp_DeltaRotationTrack,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMotionDeltaTrack_Statics::NewProp_TotalTranslation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMotionDeltaTrack_Statics::NewProp_TotalRotation,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMotionDeltaTrack_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_MotionWarping,
		nullptr,
		&NewStructOps,
		"MotionDeltaTrack",
		sizeof(FMotionDeltaTrack),
		alignof(FMotionDeltaTrack),
		Z_Construct_UScriptStruct_FMotionDeltaTrack_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMotionDeltaTrack_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMotionDeltaTrack_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMotionDeltaTrack_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMotionDeltaTrack()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FMotionDeltaTrack_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_MotionWarping();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("MotionDeltaTrack"), sizeof(FMotionDeltaTrack), Get_Z_Construct_UScriptStruct_FMotionDeltaTrack_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FMotionDeltaTrack_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FMotionDeltaTrack_Hash() { return 913722954U; }
	void URootMotionModifier_AdjustmentBlendWarp::StaticRegisterNativesURootMotionModifier_AdjustmentBlendWarp()
	{
	}
	UClass* Z_Construct_UClass_URootMotionModifier_AdjustmentBlendWarp_NoRegister()
	{
		return URootMotionModifier_AdjustmentBlendWarp::StaticClass();
	}
	struct Z_Construct_UClass_URootMotionModifier_AdjustmentBlendWarp_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bWarpIKBones_MetaData[];
#endif
		static void NewProp_bWarpIKBones_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bWarpIKBones;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_IKBones_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IKBones_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_IKBones;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CachedMeshTransform_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_CachedMeshTransform;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CachedMeshRelativeTransform_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_CachedMeshRelativeTransform;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CachedRootMotion_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_CachedRootMotion;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Result_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Result;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_URootMotionModifier_AdjustmentBlendWarp_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_URootMotionModifier_Warp,
		(UObject* (*)())Z_Construct_UPackage__Script_MotionWarping,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URootMotionModifier_AdjustmentBlendWarp_Statics::Class_MetaDataParams[] = {
		{ "Comment", "// EXPERIMENTAL: Marked with 'hidedropdown' to prevent it from showing up in the UI since it is not ready for production.\n" },
		{ "DisplayName", "Adjustment Blend Warp" },
		{ "IncludePath", "RootMotionModifier_AdjustmentBlendWarp.h" },
		{ "ModuleRelativePath", "Public/RootMotionModifier_AdjustmentBlendWarp.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "EXPERIMENTAL: Marked with 'hidedropdown' to prevent it from showing up in the UI since it is not ready for production." },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URootMotionModifier_AdjustmentBlendWarp_Statics::NewProp_bWarpIKBones_MetaData[] = {
		{ "Category", "Config" },
		{ "ModuleRelativePath", "Public/RootMotionModifier_AdjustmentBlendWarp.h" },
	};
#endif
	void Z_Construct_UClass_URootMotionModifier_AdjustmentBlendWarp_Statics::NewProp_bWarpIKBones_SetBit(void* Obj)
	{
		((URootMotionModifier_AdjustmentBlendWarp*)Obj)->bWarpIKBones = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_URootMotionModifier_AdjustmentBlendWarp_Statics::NewProp_bWarpIKBones = { "bWarpIKBones", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(URootMotionModifier_AdjustmentBlendWarp), &Z_Construct_UClass_URootMotionModifier_AdjustmentBlendWarp_Statics::NewProp_bWarpIKBones_SetBit, METADATA_PARAMS(Z_Construct_UClass_URootMotionModifier_AdjustmentBlendWarp_Statics::NewProp_bWarpIKBones_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URootMotionModifier_AdjustmentBlendWarp_Statics::NewProp_bWarpIKBones_MetaData)) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_URootMotionModifier_AdjustmentBlendWarp_Statics::NewProp_IKBones_Inner = { "IKBones", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URootMotionModifier_AdjustmentBlendWarp_Statics::NewProp_IKBones_MetaData[] = {
		{ "Category", "Config" },
		{ "ModuleRelativePath", "Public/RootMotionModifier_AdjustmentBlendWarp.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_URootMotionModifier_AdjustmentBlendWarp_Statics::NewProp_IKBones = { "IKBones", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(URootMotionModifier_AdjustmentBlendWarp, IKBones), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_URootMotionModifier_AdjustmentBlendWarp_Statics::NewProp_IKBones_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URootMotionModifier_AdjustmentBlendWarp_Statics::NewProp_IKBones_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URootMotionModifier_AdjustmentBlendWarp_Statics::NewProp_CachedMeshTransform_MetaData[] = {
		{ "ModuleRelativePath", "Public/RootMotionModifier_AdjustmentBlendWarp.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_URootMotionModifier_AdjustmentBlendWarp_Statics::NewProp_CachedMeshTransform = { "CachedMeshTransform", nullptr, (EPropertyFlags)0x0020080000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(URootMotionModifier_AdjustmentBlendWarp, CachedMeshTransform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(Z_Construct_UClass_URootMotionModifier_AdjustmentBlendWarp_Statics::NewProp_CachedMeshTransform_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URootMotionModifier_AdjustmentBlendWarp_Statics::NewProp_CachedMeshTransform_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URootMotionModifier_AdjustmentBlendWarp_Statics::NewProp_CachedMeshRelativeTransform_MetaData[] = {
		{ "ModuleRelativePath", "Public/RootMotionModifier_AdjustmentBlendWarp.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_URootMotionModifier_AdjustmentBlendWarp_Statics::NewProp_CachedMeshRelativeTransform = { "CachedMeshRelativeTransform", nullptr, (EPropertyFlags)0x0020080000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(URootMotionModifier_AdjustmentBlendWarp, CachedMeshRelativeTransform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(Z_Construct_UClass_URootMotionModifier_AdjustmentBlendWarp_Statics::NewProp_CachedMeshRelativeTransform_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URootMotionModifier_AdjustmentBlendWarp_Statics::NewProp_CachedMeshRelativeTransform_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URootMotionModifier_AdjustmentBlendWarp_Statics::NewProp_CachedRootMotion_MetaData[] = {
		{ "ModuleRelativePath", "Public/RootMotionModifier_AdjustmentBlendWarp.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_URootMotionModifier_AdjustmentBlendWarp_Statics::NewProp_CachedRootMotion = { "CachedRootMotion", nullptr, (EPropertyFlags)0x0020080000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(URootMotionModifier_AdjustmentBlendWarp, CachedRootMotion), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(Z_Construct_UClass_URootMotionModifier_AdjustmentBlendWarp_Statics::NewProp_CachedRootMotion_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URootMotionModifier_AdjustmentBlendWarp_Statics::NewProp_CachedRootMotion_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URootMotionModifier_AdjustmentBlendWarp_Statics::NewProp_Result_MetaData[] = {
		{ "ModuleRelativePath", "Public/RootMotionModifier_AdjustmentBlendWarp.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_URootMotionModifier_AdjustmentBlendWarp_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0020080000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(URootMotionModifier_AdjustmentBlendWarp, Result), Z_Construct_UScriptStruct_FAnimSequenceTrackContainer, METADATA_PARAMS(Z_Construct_UClass_URootMotionModifier_AdjustmentBlendWarp_Statics::NewProp_Result_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URootMotionModifier_AdjustmentBlendWarp_Statics::NewProp_Result_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_URootMotionModifier_AdjustmentBlendWarp_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URootMotionModifier_AdjustmentBlendWarp_Statics::NewProp_bWarpIKBones,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URootMotionModifier_AdjustmentBlendWarp_Statics::NewProp_IKBones_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URootMotionModifier_AdjustmentBlendWarp_Statics::NewProp_IKBones,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URootMotionModifier_AdjustmentBlendWarp_Statics::NewProp_CachedMeshTransform,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URootMotionModifier_AdjustmentBlendWarp_Statics::NewProp_CachedMeshRelativeTransform,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URootMotionModifier_AdjustmentBlendWarp_Statics::NewProp_CachedRootMotion,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URootMotionModifier_AdjustmentBlendWarp_Statics::NewProp_Result,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_URootMotionModifier_AdjustmentBlendWarp_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<URootMotionModifier_AdjustmentBlendWarp>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_URootMotionModifier_AdjustmentBlendWarp_Statics::ClassParams = {
		&URootMotionModifier_AdjustmentBlendWarp::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_URootMotionModifier_AdjustmentBlendWarp_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_URootMotionModifier_AdjustmentBlendWarp_Statics::PropPointers),
		0,
		0x041010A0u,
		METADATA_PARAMS(Z_Construct_UClass_URootMotionModifier_AdjustmentBlendWarp_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_URootMotionModifier_AdjustmentBlendWarp_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_URootMotionModifier_AdjustmentBlendWarp()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_URootMotionModifier_AdjustmentBlendWarp_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(URootMotionModifier_AdjustmentBlendWarp, 786918587);
	template<> MOTIONWARPING_API UClass* StaticClass<URootMotionModifier_AdjustmentBlendWarp>()
	{
		return URootMotionModifier_AdjustmentBlendWarp::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_URootMotionModifier_AdjustmentBlendWarp(Z_Construct_UClass_URootMotionModifier_AdjustmentBlendWarp, &URootMotionModifier_AdjustmentBlendWarp::StaticClass, TEXT("/Script/MotionWarping"), TEXT("URootMotionModifier_AdjustmentBlendWarp"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(URootMotionModifier_AdjustmentBlendWarp);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
