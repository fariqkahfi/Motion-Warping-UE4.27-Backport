// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MotionWarping/Public/AnimNotifyState_MotionWarping.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAnimNotifyState_MotionWarping() {}
// Cross Module References
	MOTIONWARPING_API UClass* Z_Construct_UClass_UAnimNotifyState_MotionWarping_NoRegister();
	MOTIONWARPING_API UClass* Z_Construct_UClass_UAnimNotifyState_MotionWarping();
	ENGINE_API UClass* Z_Construct_UClass_UAnimNotifyState();
	UPackage* Z_Construct_UPackage__Script_MotionWarping();
	MOTIONWARPING_API UClass* Z_Construct_UClass_UMotionWarpingComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UAnimSequenceBase_NoRegister();
	MOTIONWARPING_API UClass* Z_Construct_UClass_URootMotionModifier_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UAnimNotifyState_MotionWarping::execOnRootMotionModifierDeactivate)
	{
		P_GET_OBJECT(UMotionWarpingComponent,Z_Param_MotionWarpingComp);
		P_GET_OBJECT(URootMotionModifier,Z_Param_Modifier);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRootMotionModifierDeactivate(Z_Param_MotionWarpingComp,Z_Param_Modifier);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAnimNotifyState_MotionWarping::execOnRootMotionModifierUpdate)
	{
		P_GET_OBJECT(UMotionWarpingComponent,Z_Param_MotionWarpingComp);
		P_GET_OBJECT(URootMotionModifier,Z_Param_Modifier);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRootMotionModifierUpdate(Z_Param_MotionWarpingComp,Z_Param_Modifier);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAnimNotifyState_MotionWarping::execOnRootMotionModifierActivate)
	{
		P_GET_OBJECT(UMotionWarpingComponent,Z_Param_MotionWarpingComp);
		P_GET_OBJECT(URootMotionModifier,Z_Param_Modifier);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRootMotionModifierActivate(Z_Param_MotionWarpingComp,Z_Param_Modifier);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAnimNotifyState_MotionWarping::execAddRootMotionModifier)
	{
		P_GET_OBJECT(UMotionWarpingComponent,Z_Param_MotionWarpingComp);
		P_GET_OBJECT(UAnimSequenceBase,Z_Param_Animation);
		P_GET_PROPERTY(FFloatProperty,Z_Param_StartTime);
		P_GET_PROPERTY(FFloatProperty,Z_Param_EndTime);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(URootMotionModifier**)Z_Param__Result=P_THIS->AddRootMotionModifier_Implementation(Z_Param_MotionWarpingComp,Z_Param_Animation,Z_Param_StartTime,Z_Param_EndTime);
		P_NATIVE_END;
	}
	static FName NAME_UAnimNotifyState_MotionWarping_AddRootMotionModifier = FName(TEXT("AddRootMotionModifier"));
	URootMotionModifier* UAnimNotifyState_MotionWarping::AddRootMotionModifier(UMotionWarpingComponent* MotionWarpingComp, const UAnimSequenceBase* Animation, float StartTime, float EndTime) const
	{
		AnimNotifyState_MotionWarping_eventAddRootMotionModifier_Parms Parms;
		Parms.MotionWarpingComp=MotionWarpingComp;
		Parms.Animation=Animation;
		Parms.StartTime=StartTime;
		Parms.EndTime=EndTime;
		const_cast<UAnimNotifyState_MotionWarping*>(this)->ProcessEvent(FindFunctionChecked(NAME_UAnimNotifyState_MotionWarping_AddRootMotionModifier),&Parms);
		return Parms.ReturnValue;
	}
	static FName NAME_UAnimNotifyState_MotionWarping_OnWarpBegin = FName(TEXT("OnWarpBegin"));
	void UAnimNotifyState_MotionWarping::OnWarpBegin(UMotionWarpingComponent* MotionWarpingComp, URootMotionModifier* Modifier) const
	{
		AnimNotifyState_MotionWarping_eventOnWarpBegin_Parms Parms;
		Parms.MotionWarpingComp=MotionWarpingComp;
		Parms.Modifier=Modifier;
		const_cast<UAnimNotifyState_MotionWarping*>(this)->ProcessEvent(FindFunctionChecked(NAME_UAnimNotifyState_MotionWarping_OnWarpBegin),&Parms);
	}
	static FName NAME_UAnimNotifyState_MotionWarping_OnWarpEnd = FName(TEXT("OnWarpEnd"));
	void UAnimNotifyState_MotionWarping::OnWarpEnd(UMotionWarpingComponent* MotionWarpingComp, URootMotionModifier* Modifier) const
	{
		AnimNotifyState_MotionWarping_eventOnWarpEnd_Parms Parms;
		Parms.MotionWarpingComp=MotionWarpingComp;
		Parms.Modifier=Modifier;
		const_cast<UAnimNotifyState_MotionWarping*>(this)->ProcessEvent(FindFunctionChecked(NAME_UAnimNotifyState_MotionWarping_OnWarpEnd),&Parms);
	}
	static FName NAME_UAnimNotifyState_MotionWarping_OnWarpUpdate = FName(TEXT("OnWarpUpdate"));
	void UAnimNotifyState_MotionWarping::OnWarpUpdate(UMotionWarpingComponent* MotionWarpingComp, URootMotionModifier* Modifier) const
	{
		AnimNotifyState_MotionWarping_eventOnWarpUpdate_Parms Parms;
		Parms.MotionWarpingComp=MotionWarpingComp;
		Parms.Modifier=Modifier;
		const_cast<UAnimNotifyState_MotionWarping*>(this)->ProcessEvent(FindFunctionChecked(NAME_UAnimNotifyState_MotionWarping_OnWarpUpdate),&Parms);
	}
	void UAnimNotifyState_MotionWarping::StaticRegisterNativesUAnimNotifyState_MotionWarping()
	{
		UClass* Class = UAnimNotifyState_MotionWarping::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AddRootMotionModifier", &UAnimNotifyState_MotionWarping::execAddRootMotionModifier },
			{ "OnRootMotionModifierActivate", &UAnimNotifyState_MotionWarping::execOnRootMotionModifierActivate },
			{ "OnRootMotionModifierDeactivate", &UAnimNotifyState_MotionWarping::execOnRootMotionModifierDeactivate },
			{ "OnRootMotionModifierUpdate", &UAnimNotifyState_MotionWarping::execOnRootMotionModifierUpdate },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UAnimNotifyState_MotionWarping_AddRootMotionModifier_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MotionWarpingComp_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MotionWarpingComp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Animation_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Animation;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_StartTime;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_EndTime;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAnimNotifyState_MotionWarping_AddRootMotionModifier_Statics::NewProp_MotionWarpingComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAnimNotifyState_MotionWarping_AddRootMotionModifier_Statics::NewProp_MotionWarpingComp = { "MotionWarpingComp", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AnimNotifyState_MotionWarping_eventAddRootMotionModifier_Parms, MotionWarpingComp), Z_Construct_UClass_UMotionWarpingComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UAnimNotifyState_MotionWarping_AddRootMotionModifier_Statics::NewProp_MotionWarpingComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimNotifyState_MotionWarping_AddRootMotionModifier_Statics::NewProp_MotionWarpingComp_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAnimNotifyState_MotionWarping_AddRootMotionModifier_Statics::NewProp_Animation_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAnimNotifyState_MotionWarping_AddRootMotionModifier_Statics::NewProp_Animation = { "Animation", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AnimNotifyState_MotionWarping_eventAddRootMotionModifier_Parms, Animation), Z_Construct_UClass_UAnimSequenceBase_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UAnimNotifyState_MotionWarping_AddRootMotionModifier_Statics::NewProp_Animation_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimNotifyState_MotionWarping_AddRootMotionModifier_Statics::NewProp_Animation_MetaData)) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAnimNotifyState_MotionWarping_AddRootMotionModifier_Statics::NewProp_StartTime = { "StartTime", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AnimNotifyState_MotionWarping_eventAddRootMotionModifier_Parms, StartTime), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAnimNotifyState_MotionWarping_AddRootMotionModifier_Statics::NewProp_EndTime = { "EndTime", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AnimNotifyState_MotionWarping_eventAddRootMotionModifier_Parms, EndTime), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAnimNotifyState_MotionWarping_AddRootMotionModifier_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AnimNotifyState_MotionWarping_eventAddRootMotionModifier_Parms, ReturnValue), Z_Construct_UClass_URootMotionModifier_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAnimNotifyState_MotionWarping_AddRootMotionModifier_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimNotifyState_MotionWarping_AddRootMotionModifier_Statics::NewProp_MotionWarpingComp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimNotifyState_MotionWarping_AddRootMotionModifier_Statics::NewProp_Animation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimNotifyState_MotionWarping_AddRootMotionModifier_Statics::NewProp_StartTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimNotifyState_MotionWarping_AddRootMotionModifier_Statics::NewProp_EndTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimNotifyState_MotionWarping_AddRootMotionModifier_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAnimNotifyState_MotionWarping_AddRootMotionModifier_Statics::Function_MetaDataParams[] = {
		{ "Category", "Motion Warping" },
		{ "Comment", "/** Creates a root motion modifier from the config class defined in the notify */" },
		{ "ModuleRelativePath", "Public/AnimNotifyState_MotionWarping.h" },
		{ "ToolTip", "Creates a root motion modifier from the config class defined in the notify" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAnimNotifyState_MotionWarping_AddRootMotionModifier_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAnimNotifyState_MotionWarping, nullptr, "AddRootMotionModifier", nullptr, nullptr, sizeof(AnimNotifyState_MotionWarping_eventAddRootMotionModifier_Parms), Z_Construct_UFunction_UAnimNotifyState_MotionWarping_AddRootMotionModifier_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimNotifyState_MotionWarping_AddRootMotionModifier_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x48020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAnimNotifyState_MotionWarping_AddRootMotionModifier_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimNotifyState_MotionWarping_AddRootMotionModifier_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAnimNotifyState_MotionWarping_AddRootMotionModifier()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAnimNotifyState_MotionWarping_AddRootMotionModifier_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAnimNotifyState_MotionWarping_OnRootMotionModifierActivate_Statics
	{
		struct AnimNotifyState_MotionWarping_eventOnRootMotionModifierActivate_Parms
		{
			UMotionWarpingComponent* MotionWarpingComp;
			URootMotionModifier* Modifier;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MotionWarpingComp_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MotionWarpingComp;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Modifier;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAnimNotifyState_MotionWarping_OnRootMotionModifierActivate_Statics::NewProp_MotionWarpingComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAnimNotifyState_MotionWarping_OnRootMotionModifierActivate_Statics::NewProp_MotionWarpingComp = { "MotionWarpingComp", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AnimNotifyState_MotionWarping_eventOnRootMotionModifierActivate_Parms, MotionWarpingComp), Z_Construct_UClass_UMotionWarpingComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UAnimNotifyState_MotionWarping_OnRootMotionModifierActivate_Statics::NewProp_MotionWarpingComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimNotifyState_MotionWarping_OnRootMotionModifierActivate_Statics::NewProp_MotionWarpingComp_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAnimNotifyState_MotionWarping_OnRootMotionModifierActivate_Statics::NewProp_Modifier = { "Modifier", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AnimNotifyState_MotionWarping_eventOnRootMotionModifierActivate_Parms, Modifier), Z_Construct_UClass_URootMotionModifier_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAnimNotifyState_MotionWarping_OnRootMotionModifierActivate_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimNotifyState_MotionWarping_OnRootMotionModifierActivate_Statics::NewProp_MotionWarpingComp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimNotifyState_MotionWarping_OnRootMotionModifierActivate_Statics::NewProp_Modifier,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAnimNotifyState_MotionWarping_OnRootMotionModifierActivate_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AnimNotifyState_MotionWarping.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAnimNotifyState_MotionWarping_OnRootMotionModifierActivate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAnimNotifyState_MotionWarping, nullptr, "OnRootMotionModifierActivate", nullptr, nullptr, sizeof(AnimNotifyState_MotionWarping_eventOnRootMotionModifierActivate_Parms), Z_Construct_UFunction_UAnimNotifyState_MotionWarping_OnRootMotionModifierActivate_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimNotifyState_MotionWarping_OnRootMotionModifierActivate_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x40020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAnimNotifyState_MotionWarping_OnRootMotionModifierActivate_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimNotifyState_MotionWarping_OnRootMotionModifierActivate_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAnimNotifyState_MotionWarping_OnRootMotionModifierActivate()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAnimNotifyState_MotionWarping_OnRootMotionModifierActivate_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAnimNotifyState_MotionWarping_OnRootMotionModifierDeactivate_Statics
	{
		struct AnimNotifyState_MotionWarping_eventOnRootMotionModifierDeactivate_Parms
		{
			UMotionWarpingComponent* MotionWarpingComp;
			URootMotionModifier* Modifier;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MotionWarpingComp_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MotionWarpingComp;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Modifier;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAnimNotifyState_MotionWarping_OnRootMotionModifierDeactivate_Statics::NewProp_MotionWarpingComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAnimNotifyState_MotionWarping_OnRootMotionModifierDeactivate_Statics::NewProp_MotionWarpingComp = { "MotionWarpingComp", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AnimNotifyState_MotionWarping_eventOnRootMotionModifierDeactivate_Parms, MotionWarpingComp), Z_Construct_UClass_UMotionWarpingComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UAnimNotifyState_MotionWarping_OnRootMotionModifierDeactivate_Statics::NewProp_MotionWarpingComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimNotifyState_MotionWarping_OnRootMotionModifierDeactivate_Statics::NewProp_MotionWarpingComp_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAnimNotifyState_MotionWarping_OnRootMotionModifierDeactivate_Statics::NewProp_Modifier = { "Modifier", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AnimNotifyState_MotionWarping_eventOnRootMotionModifierDeactivate_Parms, Modifier), Z_Construct_UClass_URootMotionModifier_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAnimNotifyState_MotionWarping_OnRootMotionModifierDeactivate_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimNotifyState_MotionWarping_OnRootMotionModifierDeactivate_Statics::NewProp_MotionWarpingComp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimNotifyState_MotionWarping_OnRootMotionModifierDeactivate_Statics::NewProp_Modifier,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAnimNotifyState_MotionWarping_OnRootMotionModifierDeactivate_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AnimNotifyState_MotionWarping.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAnimNotifyState_MotionWarping_OnRootMotionModifierDeactivate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAnimNotifyState_MotionWarping, nullptr, "OnRootMotionModifierDeactivate", nullptr, nullptr, sizeof(AnimNotifyState_MotionWarping_eventOnRootMotionModifierDeactivate_Parms), Z_Construct_UFunction_UAnimNotifyState_MotionWarping_OnRootMotionModifierDeactivate_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimNotifyState_MotionWarping_OnRootMotionModifierDeactivate_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x40020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAnimNotifyState_MotionWarping_OnRootMotionModifierDeactivate_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimNotifyState_MotionWarping_OnRootMotionModifierDeactivate_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAnimNotifyState_MotionWarping_OnRootMotionModifierDeactivate()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAnimNotifyState_MotionWarping_OnRootMotionModifierDeactivate_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAnimNotifyState_MotionWarping_OnRootMotionModifierUpdate_Statics
	{
		struct AnimNotifyState_MotionWarping_eventOnRootMotionModifierUpdate_Parms
		{
			UMotionWarpingComponent* MotionWarpingComp;
			URootMotionModifier* Modifier;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MotionWarpingComp_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MotionWarpingComp;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Modifier;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAnimNotifyState_MotionWarping_OnRootMotionModifierUpdate_Statics::NewProp_MotionWarpingComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAnimNotifyState_MotionWarping_OnRootMotionModifierUpdate_Statics::NewProp_MotionWarpingComp = { "MotionWarpingComp", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AnimNotifyState_MotionWarping_eventOnRootMotionModifierUpdate_Parms, MotionWarpingComp), Z_Construct_UClass_UMotionWarpingComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UAnimNotifyState_MotionWarping_OnRootMotionModifierUpdate_Statics::NewProp_MotionWarpingComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimNotifyState_MotionWarping_OnRootMotionModifierUpdate_Statics::NewProp_MotionWarpingComp_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAnimNotifyState_MotionWarping_OnRootMotionModifierUpdate_Statics::NewProp_Modifier = { "Modifier", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AnimNotifyState_MotionWarping_eventOnRootMotionModifierUpdate_Parms, Modifier), Z_Construct_UClass_URootMotionModifier_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAnimNotifyState_MotionWarping_OnRootMotionModifierUpdate_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimNotifyState_MotionWarping_OnRootMotionModifierUpdate_Statics::NewProp_MotionWarpingComp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimNotifyState_MotionWarping_OnRootMotionModifierUpdate_Statics::NewProp_Modifier,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAnimNotifyState_MotionWarping_OnRootMotionModifierUpdate_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AnimNotifyState_MotionWarping.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAnimNotifyState_MotionWarping_OnRootMotionModifierUpdate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAnimNotifyState_MotionWarping, nullptr, "OnRootMotionModifierUpdate", nullptr, nullptr, sizeof(AnimNotifyState_MotionWarping_eventOnRootMotionModifierUpdate_Parms), Z_Construct_UFunction_UAnimNotifyState_MotionWarping_OnRootMotionModifierUpdate_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimNotifyState_MotionWarping_OnRootMotionModifierUpdate_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x40020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAnimNotifyState_MotionWarping_OnRootMotionModifierUpdate_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimNotifyState_MotionWarping_OnRootMotionModifierUpdate_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAnimNotifyState_MotionWarping_OnRootMotionModifierUpdate()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAnimNotifyState_MotionWarping_OnRootMotionModifierUpdate_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAnimNotifyState_MotionWarping_OnWarpBegin_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MotionWarpingComp_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MotionWarpingComp;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Modifier;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAnimNotifyState_MotionWarping_OnWarpBegin_Statics::NewProp_MotionWarpingComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAnimNotifyState_MotionWarping_OnWarpBegin_Statics::NewProp_MotionWarpingComp = { "MotionWarpingComp", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AnimNotifyState_MotionWarping_eventOnWarpBegin_Parms, MotionWarpingComp), Z_Construct_UClass_UMotionWarpingComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UAnimNotifyState_MotionWarping_OnWarpBegin_Statics::NewProp_MotionWarpingComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimNotifyState_MotionWarping_OnWarpBegin_Statics::NewProp_MotionWarpingComp_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAnimNotifyState_MotionWarping_OnWarpBegin_Statics::NewProp_Modifier = { "Modifier", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AnimNotifyState_MotionWarping_eventOnWarpBegin_Parms, Modifier), Z_Construct_UClass_URootMotionModifier_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAnimNotifyState_MotionWarping_OnWarpBegin_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimNotifyState_MotionWarping_OnWarpBegin_Statics::NewProp_MotionWarpingComp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimNotifyState_MotionWarping_OnWarpBegin_Statics::NewProp_Modifier,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAnimNotifyState_MotionWarping_OnWarpBegin_Statics::Function_MetaDataParams[] = {
		{ "Category", "Motion Warping" },
		{ "ModuleRelativePath", "Public/AnimNotifyState_MotionWarping.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAnimNotifyState_MotionWarping_OnWarpBegin_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAnimNotifyState_MotionWarping, nullptr, "OnWarpBegin", nullptr, nullptr, sizeof(AnimNotifyState_MotionWarping_eventOnWarpBegin_Parms), Z_Construct_UFunction_UAnimNotifyState_MotionWarping_OnWarpBegin_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimNotifyState_MotionWarping_OnWarpBegin_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x48020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAnimNotifyState_MotionWarping_OnWarpBegin_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimNotifyState_MotionWarping_OnWarpBegin_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAnimNotifyState_MotionWarping_OnWarpBegin()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAnimNotifyState_MotionWarping_OnWarpBegin_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAnimNotifyState_MotionWarping_OnWarpEnd_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MotionWarpingComp_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MotionWarpingComp;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Modifier;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAnimNotifyState_MotionWarping_OnWarpEnd_Statics::NewProp_MotionWarpingComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAnimNotifyState_MotionWarping_OnWarpEnd_Statics::NewProp_MotionWarpingComp = { "MotionWarpingComp", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AnimNotifyState_MotionWarping_eventOnWarpEnd_Parms, MotionWarpingComp), Z_Construct_UClass_UMotionWarpingComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UAnimNotifyState_MotionWarping_OnWarpEnd_Statics::NewProp_MotionWarpingComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimNotifyState_MotionWarping_OnWarpEnd_Statics::NewProp_MotionWarpingComp_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAnimNotifyState_MotionWarping_OnWarpEnd_Statics::NewProp_Modifier = { "Modifier", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AnimNotifyState_MotionWarping_eventOnWarpEnd_Parms, Modifier), Z_Construct_UClass_URootMotionModifier_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAnimNotifyState_MotionWarping_OnWarpEnd_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimNotifyState_MotionWarping_OnWarpEnd_Statics::NewProp_MotionWarpingComp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimNotifyState_MotionWarping_OnWarpEnd_Statics::NewProp_Modifier,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAnimNotifyState_MotionWarping_OnWarpEnd_Statics::Function_MetaDataParams[] = {
		{ "Category", "Motion Warping" },
		{ "ModuleRelativePath", "Public/AnimNotifyState_MotionWarping.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAnimNotifyState_MotionWarping_OnWarpEnd_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAnimNotifyState_MotionWarping, nullptr, "OnWarpEnd", nullptr, nullptr, sizeof(AnimNotifyState_MotionWarping_eventOnWarpEnd_Parms), Z_Construct_UFunction_UAnimNotifyState_MotionWarping_OnWarpEnd_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimNotifyState_MotionWarping_OnWarpEnd_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x48020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAnimNotifyState_MotionWarping_OnWarpEnd_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimNotifyState_MotionWarping_OnWarpEnd_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAnimNotifyState_MotionWarping_OnWarpEnd()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAnimNotifyState_MotionWarping_OnWarpEnd_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAnimNotifyState_MotionWarping_OnWarpUpdate_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MotionWarpingComp_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MotionWarpingComp;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Modifier;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAnimNotifyState_MotionWarping_OnWarpUpdate_Statics::NewProp_MotionWarpingComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAnimNotifyState_MotionWarping_OnWarpUpdate_Statics::NewProp_MotionWarpingComp = { "MotionWarpingComp", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AnimNotifyState_MotionWarping_eventOnWarpUpdate_Parms, MotionWarpingComp), Z_Construct_UClass_UMotionWarpingComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UAnimNotifyState_MotionWarping_OnWarpUpdate_Statics::NewProp_MotionWarpingComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimNotifyState_MotionWarping_OnWarpUpdate_Statics::NewProp_MotionWarpingComp_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAnimNotifyState_MotionWarping_OnWarpUpdate_Statics::NewProp_Modifier = { "Modifier", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AnimNotifyState_MotionWarping_eventOnWarpUpdate_Parms, Modifier), Z_Construct_UClass_URootMotionModifier_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAnimNotifyState_MotionWarping_OnWarpUpdate_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimNotifyState_MotionWarping_OnWarpUpdate_Statics::NewProp_MotionWarpingComp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimNotifyState_MotionWarping_OnWarpUpdate_Statics::NewProp_Modifier,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAnimNotifyState_MotionWarping_OnWarpUpdate_Statics::Function_MetaDataParams[] = {
		{ "Category", "Motion Warping" },
		{ "ModuleRelativePath", "Public/AnimNotifyState_MotionWarping.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAnimNotifyState_MotionWarping_OnWarpUpdate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAnimNotifyState_MotionWarping, nullptr, "OnWarpUpdate", nullptr, nullptr, sizeof(AnimNotifyState_MotionWarping_eventOnWarpUpdate_Parms), Z_Construct_UFunction_UAnimNotifyState_MotionWarping_OnWarpUpdate_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimNotifyState_MotionWarping_OnWarpUpdate_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x48020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAnimNotifyState_MotionWarping_OnWarpUpdate_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimNotifyState_MotionWarping_OnWarpUpdate_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAnimNotifyState_MotionWarping_OnWarpUpdate()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAnimNotifyState_MotionWarping_OnWarpUpdate_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UAnimNotifyState_MotionWarping_NoRegister()
	{
		return UAnimNotifyState_MotionWarping::StaticClass();
	}
	struct Z_Construct_UClass_UAnimNotifyState_MotionWarping_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RootMotionModifier_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_RootMotionModifier;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAnimNotifyState_MotionWarping_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAnimNotifyState,
		(UObject* (*)())Z_Construct_UPackage__Script_MotionWarping,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UAnimNotifyState_MotionWarping_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UAnimNotifyState_MotionWarping_AddRootMotionModifier, "AddRootMotionModifier" }, // 991191565
		{ &Z_Construct_UFunction_UAnimNotifyState_MotionWarping_OnRootMotionModifierActivate, "OnRootMotionModifierActivate" }, // 2425097274
		{ &Z_Construct_UFunction_UAnimNotifyState_MotionWarping_OnRootMotionModifierDeactivate, "OnRootMotionModifierDeactivate" }, // 3597830882
		{ &Z_Construct_UFunction_UAnimNotifyState_MotionWarping_OnRootMotionModifierUpdate, "OnRootMotionModifierUpdate" }, // 3795534624
		{ &Z_Construct_UFunction_UAnimNotifyState_MotionWarping_OnWarpBegin, "OnWarpBegin" }, // 878053867
		{ &Z_Construct_UFunction_UAnimNotifyState_MotionWarping_OnWarpEnd, "OnWarpEnd" }, // 396055848
		{ &Z_Construct_UFunction_UAnimNotifyState_MotionWarping_OnWarpUpdate, "OnWarpUpdate" }, // 2302500099
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimNotifyState_MotionWarping_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/** AnimNotifyState used to define a motion warping window in the animation */" },
		{ "DisplayName", "Motion Warping" },
		{ "HideCategories", "Object" },
		{ "IncludePath", "AnimNotifyState_MotionWarping.h" },
		{ "ModuleRelativePath", "Public/AnimNotifyState_MotionWarping.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "AnimNotifyState used to define a motion warping window in the animation" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimNotifyState_MotionWarping_Statics::NewProp_RootMotionModifier_MetaData[] = {
		{ "Category", "Config" },
		{ "Comment", "//@TODO: Prevent notify callbacks and add comments explaining why we don't use those here.\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/AnimNotifyState_MotionWarping.h" },
		{ "ToolTip", "@TODO: Prevent notify callbacks and add comments explaining why we don't use those here." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAnimNotifyState_MotionWarping_Statics::NewProp_RootMotionModifier = { "RootMotionModifier", nullptr, (EPropertyFlags)0x001200000008001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAnimNotifyState_MotionWarping, RootMotionModifier), Z_Construct_UClass_URootMotionModifier_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UAnimNotifyState_MotionWarping_Statics::NewProp_RootMotionModifier_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimNotifyState_MotionWarping_Statics::NewProp_RootMotionModifier_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAnimNotifyState_MotionWarping_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimNotifyState_MotionWarping_Statics::NewProp_RootMotionModifier,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAnimNotifyState_MotionWarping_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAnimNotifyState_MotionWarping>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UAnimNotifyState_MotionWarping_Statics::ClassParams = {
		&UAnimNotifyState_MotionWarping::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UAnimNotifyState_MotionWarping_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UAnimNotifyState_MotionWarping_Statics::PropPointers),
		0,
		0x009130A0u,
		METADATA_PARAMS(Z_Construct_UClass_UAnimNotifyState_MotionWarping_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimNotifyState_MotionWarping_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAnimNotifyState_MotionWarping()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UAnimNotifyState_MotionWarping_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UAnimNotifyState_MotionWarping, 115452483);
	template<> MOTIONWARPING_API UClass* StaticClass<UAnimNotifyState_MotionWarping>()
	{
		return UAnimNotifyState_MotionWarping::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UAnimNotifyState_MotionWarping(Z_Construct_UClass_UAnimNotifyState_MotionWarping, &UAnimNotifyState_MotionWarping::StaticClass, TEXT("/Script/MotionWarping"), TEXT("UAnimNotifyState_MotionWarping"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAnimNotifyState_MotionWarping);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
