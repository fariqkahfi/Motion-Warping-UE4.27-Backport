// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MotionWarping/Public/RootMotionModifier_SkewWarp.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRootMotionModifier_SkewWarp() {}
// Cross Module References
	MOTIONWARPING_API UClass* Z_Construct_UClass_URootMotionModifier_SkewWarp_NoRegister();
	MOTIONWARPING_API UClass* Z_Construct_UClass_URootMotionModifier_SkewWarp();
	MOTIONWARPING_API UClass* Z_Construct_UClass_URootMotionModifier_Warp();
	UPackage* Z_Construct_UPackage__Script_MotionWarping();
	MOTIONWARPING_API UClass* Z_Construct_UClass_UMotionWarpingComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UAnimSequenceBase_NoRegister();
	MOTIONWARPING_API UEnum* Z_Construct_UEnum_MotionWarping_EWarpPointAnimProvider();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
	MOTIONWARPING_API UEnum* Z_Construct_UEnum_MotionWarping_EMotionWarpRotationType();
	MOTIONWARPING_API UEnum* Z_Construct_UEnum_MotionWarping_EMotionWarpRotationMethod();
// End Cross Module References
	DEFINE_FUNCTION(URootMotionModifier_SkewWarp::execAddRootMotionModifierSkewWarp)
	{
		P_GET_OBJECT(UMotionWarpingComponent,Z_Param_InMotionWarpingComp);
		P_GET_OBJECT(UAnimSequenceBase,Z_Param_InAnimation);
		P_GET_PROPERTY(FFloatProperty,Z_Param_InStartTime);
		P_GET_PROPERTY(FFloatProperty,Z_Param_InEndTime);
		P_GET_PROPERTY(FNameProperty,Z_Param_InWarpTargetName);
		P_GET_ENUM(EWarpPointAnimProvider,Z_Param_InWarpPointAnimProvider);
		P_GET_STRUCT(FTransform,Z_Param_InWarpPointAnimTransform);
		P_GET_PROPERTY(FNameProperty,Z_Param_InWarpPointAnimBoneName);
		P_GET_UBOOL(Z_Param_bInWarpTranslation);
		P_GET_UBOOL(Z_Param_bInIgnoreZAxis);
		P_GET_UBOOL(Z_Param_bInWarpRotation);
		P_GET_ENUM(EMotionWarpRotationType,Z_Param_InRotationType);
		P_GET_ENUM(EMotionWarpRotationMethod,Z_Param_InRotationMethod);
		P_GET_PROPERTY(FFloatProperty,Z_Param_InWarpRotationTimeMultiplier);
		P_GET_PROPERTY(FFloatProperty,Z_Param_InWarpMaxRotationRate);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(URootMotionModifier_SkewWarp**)Z_Param__Result=URootMotionModifier_SkewWarp::AddRootMotionModifierSkewWarp(Z_Param_InMotionWarpingComp,Z_Param_InAnimation,Z_Param_InStartTime,Z_Param_InEndTime,Z_Param_InWarpTargetName,EWarpPointAnimProvider(Z_Param_InWarpPointAnimProvider),Z_Param_InWarpPointAnimTransform,Z_Param_InWarpPointAnimBoneName,Z_Param_bInWarpTranslation,Z_Param_bInIgnoreZAxis,Z_Param_bInWarpRotation,EMotionWarpRotationType(Z_Param_InRotationType),EMotionWarpRotationMethod(Z_Param_InRotationMethod),Z_Param_InWarpRotationTimeMultiplier,Z_Param_InWarpMaxRotationRate);
		P_NATIVE_END;
	}
	void URootMotionModifier_SkewWarp::StaticRegisterNativesURootMotionModifier_SkewWarp()
	{
		UClass* Class = URootMotionModifier_SkewWarp::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AddRootMotionModifierSkewWarp", &URootMotionModifier_SkewWarp::execAddRootMotionModifierSkewWarp },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_URootMotionModifier_SkewWarp_AddRootMotionModifierSkewWarp_Statics
	{
		struct RootMotionModifier_SkewWarp_eventAddRootMotionModifierSkewWarp_Parms
		{
			UMotionWarpingComponent* InMotionWarpingComp;
			const UAnimSequenceBase* InAnimation;
			float InStartTime;
			float InEndTime;
			FName InWarpTargetName;
			EWarpPointAnimProvider InWarpPointAnimProvider;
			FTransform InWarpPointAnimTransform;
			FName InWarpPointAnimBoneName;
			bool bInWarpTranslation;
			bool bInIgnoreZAxis;
			bool bInWarpRotation;
			EMotionWarpRotationType InRotationType;
			EMotionWarpRotationMethod InRotationMethod;
			float InWarpRotationTimeMultiplier;
			float InWarpMaxRotationRate;
			URootMotionModifier_SkewWarp* ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InMotionWarpingComp_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InMotionWarpingComp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InAnimation_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InAnimation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InStartTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_InStartTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InEndTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_InEndTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InWarpTargetName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_InWarpTargetName;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_InWarpPointAnimProvider_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InWarpPointAnimProvider_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_InWarpPointAnimProvider;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InWarpPointAnimTransform_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_InWarpPointAnimTransform;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InWarpPointAnimBoneName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_InWarpPointAnimBoneName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bInWarpTranslation_MetaData[];
#endif
		static void NewProp_bInWarpTranslation_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bInWarpTranslation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bInIgnoreZAxis_MetaData[];
#endif
		static void NewProp_bInIgnoreZAxis_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bInIgnoreZAxis;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bInWarpRotation_MetaData[];
#endif
		static void NewProp_bInWarpRotation_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bInWarpRotation;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_InRotationType_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InRotationType_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_InRotationType;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_InRotationMethod_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InRotationMethod_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_InRotationMethod;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InWarpRotationTimeMultiplier_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_InWarpRotationTimeMultiplier;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InWarpMaxRotationRate_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_InWarpMaxRotationRate;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URootMotionModifier_SkewWarp_AddRootMotionModifierSkewWarp_Statics::NewProp_InMotionWarpingComp_MetaData[] = {
		{ "DisplayName", "Motion Warping Comp" },
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_URootMotionModifier_SkewWarp_AddRootMotionModifierSkewWarp_Statics::NewProp_InMotionWarpingComp = { "InMotionWarpingComp", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RootMotionModifier_SkewWarp_eventAddRootMotionModifierSkewWarp_Parms, InMotionWarpingComp), Z_Construct_UClass_UMotionWarpingComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_URootMotionModifier_SkewWarp_AddRootMotionModifierSkewWarp_Statics::NewProp_InMotionWarpingComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_URootMotionModifier_SkewWarp_AddRootMotionModifierSkewWarp_Statics::NewProp_InMotionWarpingComp_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URootMotionModifier_SkewWarp_AddRootMotionModifierSkewWarp_Statics::NewProp_InAnimation_MetaData[] = {
		{ "DisplayName", "Animation" },
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_URootMotionModifier_SkewWarp_AddRootMotionModifierSkewWarp_Statics::NewProp_InAnimation = { "InAnimation", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RootMotionModifier_SkewWarp_eventAddRootMotionModifierSkewWarp_Parms, InAnimation), Z_Construct_UClass_UAnimSequenceBase_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_URootMotionModifier_SkewWarp_AddRootMotionModifierSkewWarp_Statics::NewProp_InAnimation_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_URootMotionModifier_SkewWarp_AddRootMotionModifierSkewWarp_Statics::NewProp_InAnimation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URootMotionModifier_SkewWarp_AddRootMotionModifierSkewWarp_Statics::NewProp_InStartTime_MetaData[] = {
		{ "DisplayName", "Start Time" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_URootMotionModifier_SkewWarp_AddRootMotionModifierSkewWarp_Statics::NewProp_InStartTime = { "InStartTime", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RootMotionModifier_SkewWarp_eventAddRootMotionModifierSkewWarp_Parms, InStartTime), METADATA_PARAMS(Z_Construct_UFunction_URootMotionModifier_SkewWarp_AddRootMotionModifierSkewWarp_Statics::NewProp_InStartTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_URootMotionModifier_SkewWarp_AddRootMotionModifierSkewWarp_Statics::NewProp_InStartTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URootMotionModifier_SkewWarp_AddRootMotionModifierSkewWarp_Statics::NewProp_InEndTime_MetaData[] = {
		{ "DisplayName", "End Time" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_URootMotionModifier_SkewWarp_AddRootMotionModifierSkewWarp_Statics::NewProp_InEndTime = { "InEndTime", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RootMotionModifier_SkewWarp_eventAddRootMotionModifierSkewWarp_Parms, InEndTime), METADATA_PARAMS(Z_Construct_UFunction_URootMotionModifier_SkewWarp_AddRootMotionModifierSkewWarp_Statics::NewProp_InEndTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_URootMotionModifier_SkewWarp_AddRootMotionModifierSkewWarp_Statics::NewProp_InEndTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URootMotionModifier_SkewWarp_AddRootMotionModifierSkewWarp_Statics::NewProp_InWarpTargetName_MetaData[] = {
		{ "DisplayName", "Warp Target Name" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_URootMotionModifier_SkewWarp_AddRootMotionModifierSkewWarp_Statics::NewProp_InWarpTargetName = { "InWarpTargetName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RootMotionModifier_SkewWarp_eventAddRootMotionModifierSkewWarp_Parms, InWarpTargetName), METADATA_PARAMS(Z_Construct_UFunction_URootMotionModifier_SkewWarp_AddRootMotionModifierSkewWarp_Statics::NewProp_InWarpTargetName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_URootMotionModifier_SkewWarp_AddRootMotionModifierSkewWarp_Statics::NewProp_InWarpTargetName_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_URootMotionModifier_SkewWarp_AddRootMotionModifierSkewWarp_Statics::NewProp_InWarpPointAnimProvider_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URootMotionModifier_SkewWarp_AddRootMotionModifierSkewWarp_Statics::NewProp_InWarpPointAnimProvider_MetaData[] = {
		{ "DisplayName", "Warp Point Anim Provider" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_URootMotionModifier_SkewWarp_AddRootMotionModifierSkewWarp_Statics::NewProp_InWarpPointAnimProvider = { "InWarpPointAnimProvider", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RootMotionModifier_SkewWarp_eventAddRootMotionModifierSkewWarp_Parms, InWarpPointAnimProvider), Z_Construct_UEnum_MotionWarping_EWarpPointAnimProvider, METADATA_PARAMS(Z_Construct_UFunction_URootMotionModifier_SkewWarp_AddRootMotionModifierSkewWarp_Statics::NewProp_InWarpPointAnimProvider_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_URootMotionModifier_SkewWarp_AddRootMotionModifierSkewWarp_Statics::NewProp_InWarpPointAnimProvider_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URootMotionModifier_SkewWarp_AddRootMotionModifierSkewWarp_Statics::NewProp_InWarpPointAnimTransform_MetaData[] = {
		{ "DisplayName", "Warp Point Anim Transform" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URootMotionModifier_SkewWarp_AddRootMotionModifierSkewWarp_Statics::NewProp_InWarpPointAnimTransform = { "InWarpPointAnimTransform", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RootMotionModifier_SkewWarp_eventAddRootMotionModifierSkewWarp_Parms, InWarpPointAnimTransform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(Z_Construct_UFunction_URootMotionModifier_SkewWarp_AddRootMotionModifierSkewWarp_Statics::NewProp_InWarpPointAnimTransform_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_URootMotionModifier_SkewWarp_AddRootMotionModifierSkewWarp_Statics::NewProp_InWarpPointAnimTransform_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URootMotionModifier_SkewWarp_AddRootMotionModifierSkewWarp_Statics::NewProp_InWarpPointAnimBoneName_MetaData[] = {
		{ "DisplayName", "Warp Point Anim Bone Name" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_URootMotionModifier_SkewWarp_AddRootMotionModifierSkewWarp_Statics::NewProp_InWarpPointAnimBoneName = { "InWarpPointAnimBoneName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RootMotionModifier_SkewWarp_eventAddRootMotionModifierSkewWarp_Parms, InWarpPointAnimBoneName), METADATA_PARAMS(Z_Construct_UFunction_URootMotionModifier_SkewWarp_AddRootMotionModifierSkewWarp_Statics::NewProp_InWarpPointAnimBoneName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_URootMotionModifier_SkewWarp_AddRootMotionModifierSkewWarp_Statics::NewProp_InWarpPointAnimBoneName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URootMotionModifier_SkewWarp_AddRootMotionModifierSkewWarp_Statics::NewProp_bInWarpTranslation_MetaData[] = {
		{ "DisplayName", "Warp Translation" },
	};
#endif
	void Z_Construct_UFunction_URootMotionModifier_SkewWarp_AddRootMotionModifierSkewWarp_Statics::NewProp_bInWarpTranslation_SetBit(void* Obj)
	{
		((RootMotionModifier_SkewWarp_eventAddRootMotionModifierSkewWarp_Parms*)Obj)->bInWarpTranslation = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_URootMotionModifier_SkewWarp_AddRootMotionModifierSkewWarp_Statics::NewProp_bInWarpTranslation = { "bInWarpTranslation", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(RootMotionModifier_SkewWarp_eventAddRootMotionModifierSkewWarp_Parms), &Z_Construct_UFunction_URootMotionModifier_SkewWarp_AddRootMotionModifierSkewWarp_Statics::NewProp_bInWarpTranslation_SetBit, METADATA_PARAMS(Z_Construct_UFunction_URootMotionModifier_SkewWarp_AddRootMotionModifierSkewWarp_Statics::NewProp_bInWarpTranslation_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_URootMotionModifier_SkewWarp_AddRootMotionModifierSkewWarp_Statics::NewProp_bInWarpTranslation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URootMotionModifier_SkewWarp_AddRootMotionModifierSkewWarp_Statics::NewProp_bInIgnoreZAxis_MetaData[] = {
		{ "DisplayName", "Ignore Z Axis" },
	};
#endif
	void Z_Construct_UFunction_URootMotionModifier_SkewWarp_AddRootMotionModifierSkewWarp_Statics::NewProp_bInIgnoreZAxis_SetBit(void* Obj)
	{
		((RootMotionModifier_SkewWarp_eventAddRootMotionModifierSkewWarp_Parms*)Obj)->bInIgnoreZAxis = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_URootMotionModifier_SkewWarp_AddRootMotionModifierSkewWarp_Statics::NewProp_bInIgnoreZAxis = { "bInIgnoreZAxis", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(RootMotionModifier_SkewWarp_eventAddRootMotionModifierSkewWarp_Parms), &Z_Construct_UFunction_URootMotionModifier_SkewWarp_AddRootMotionModifierSkewWarp_Statics::NewProp_bInIgnoreZAxis_SetBit, METADATA_PARAMS(Z_Construct_UFunction_URootMotionModifier_SkewWarp_AddRootMotionModifierSkewWarp_Statics::NewProp_bInIgnoreZAxis_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_URootMotionModifier_SkewWarp_AddRootMotionModifierSkewWarp_Statics::NewProp_bInIgnoreZAxis_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URootMotionModifier_SkewWarp_AddRootMotionModifierSkewWarp_Statics::NewProp_bInWarpRotation_MetaData[] = {
		{ "DisplayName", "Warp Rotation" },
	};
#endif
	void Z_Construct_UFunction_URootMotionModifier_SkewWarp_AddRootMotionModifierSkewWarp_Statics::NewProp_bInWarpRotation_SetBit(void* Obj)
	{
		((RootMotionModifier_SkewWarp_eventAddRootMotionModifierSkewWarp_Parms*)Obj)->bInWarpRotation = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_URootMotionModifier_SkewWarp_AddRootMotionModifierSkewWarp_Statics::NewProp_bInWarpRotation = { "bInWarpRotation", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(RootMotionModifier_SkewWarp_eventAddRootMotionModifierSkewWarp_Parms), &Z_Construct_UFunction_URootMotionModifier_SkewWarp_AddRootMotionModifierSkewWarp_Statics::NewProp_bInWarpRotation_SetBit, METADATA_PARAMS(Z_Construct_UFunction_URootMotionModifier_SkewWarp_AddRootMotionModifierSkewWarp_Statics::NewProp_bInWarpRotation_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_URootMotionModifier_SkewWarp_AddRootMotionModifierSkewWarp_Statics::NewProp_bInWarpRotation_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_URootMotionModifier_SkewWarp_AddRootMotionModifierSkewWarp_Statics::NewProp_InRotationType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URootMotionModifier_SkewWarp_AddRootMotionModifierSkewWarp_Statics::NewProp_InRotationType_MetaData[] = {
		{ "DisplayName", "Rotation Type" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_URootMotionModifier_SkewWarp_AddRootMotionModifierSkewWarp_Statics::NewProp_InRotationType = { "InRotationType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RootMotionModifier_SkewWarp_eventAddRootMotionModifierSkewWarp_Parms, InRotationType), Z_Construct_UEnum_MotionWarping_EMotionWarpRotationType, METADATA_PARAMS(Z_Construct_UFunction_URootMotionModifier_SkewWarp_AddRootMotionModifierSkewWarp_Statics::NewProp_InRotationType_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_URootMotionModifier_SkewWarp_AddRootMotionModifierSkewWarp_Statics::NewProp_InRotationType_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_URootMotionModifier_SkewWarp_AddRootMotionModifierSkewWarp_Statics::NewProp_InRotationMethod_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URootMotionModifier_SkewWarp_AddRootMotionModifierSkewWarp_Statics::NewProp_InRotationMethod_MetaData[] = {
		{ "DisplayName", "Rotation Method" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_URootMotionModifier_SkewWarp_AddRootMotionModifierSkewWarp_Statics::NewProp_InRotationMethod = { "InRotationMethod", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RootMotionModifier_SkewWarp_eventAddRootMotionModifierSkewWarp_Parms, InRotationMethod), Z_Construct_UEnum_MotionWarping_EMotionWarpRotationMethod, METADATA_PARAMS(Z_Construct_UFunction_URootMotionModifier_SkewWarp_AddRootMotionModifierSkewWarp_Statics::NewProp_InRotationMethod_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_URootMotionModifier_SkewWarp_AddRootMotionModifierSkewWarp_Statics::NewProp_InRotationMethod_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URootMotionModifier_SkewWarp_AddRootMotionModifierSkewWarp_Statics::NewProp_InWarpRotationTimeMultiplier_MetaData[] = {
		{ "DisplayName", "Warp Rotation Time Multiplier" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_URootMotionModifier_SkewWarp_AddRootMotionModifierSkewWarp_Statics::NewProp_InWarpRotationTimeMultiplier = { "InWarpRotationTimeMultiplier", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RootMotionModifier_SkewWarp_eventAddRootMotionModifierSkewWarp_Parms, InWarpRotationTimeMultiplier), METADATA_PARAMS(Z_Construct_UFunction_URootMotionModifier_SkewWarp_AddRootMotionModifierSkewWarp_Statics::NewProp_InWarpRotationTimeMultiplier_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_URootMotionModifier_SkewWarp_AddRootMotionModifierSkewWarp_Statics::NewProp_InWarpRotationTimeMultiplier_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URootMotionModifier_SkewWarp_AddRootMotionModifierSkewWarp_Statics::NewProp_InWarpMaxRotationRate_MetaData[] = {
		{ "DisplayName", "Warp Max Rotation Rate" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_URootMotionModifier_SkewWarp_AddRootMotionModifierSkewWarp_Statics::NewProp_InWarpMaxRotationRate = { "InWarpMaxRotationRate", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RootMotionModifier_SkewWarp_eventAddRootMotionModifierSkewWarp_Parms, InWarpMaxRotationRate), METADATA_PARAMS(Z_Construct_UFunction_URootMotionModifier_SkewWarp_AddRootMotionModifierSkewWarp_Statics::NewProp_InWarpMaxRotationRate_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_URootMotionModifier_SkewWarp_AddRootMotionModifierSkewWarp_Statics::NewProp_InWarpMaxRotationRate_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_URootMotionModifier_SkewWarp_AddRootMotionModifierSkewWarp_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RootMotionModifier_SkewWarp_eventAddRootMotionModifierSkewWarp_Parms, ReturnValue), Z_Construct_UClass_URootMotionModifier_SkewWarp_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URootMotionModifier_SkewWarp_AddRootMotionModifierSkewWarp_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URootMotionModifier_SkewWarp_AddRootMotionModifierSkewWarp_Statics::NewProp_InMotionWarpingComp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URootMotionModifier_SkewWarp_AddRootMotionModifierSkewWarp_Statics::NewProp_InAnimation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URootMotionModifier_SkewWarp_AddRootMotionModifierSkewWarp_Statics::NewProp_InStartTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URootMotionModifier_SkewWarp_AddRootMotionModifierSkewWarp_Statics::NewProp_InEndTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URootMotionModifier_SkewWarp_AddRootMotionModifierSkewWarp_Statics::NewProp_InWarpTargetName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URootMotionModifier_SkewWarp_AddRootMotionModifierSkewWarp_Statics::NewProp_InWarpPointAnimProvider_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URootMotionModifier_SkewWarp_AddRootMotionModifierSkewWarp_Statics::NewProp_InWarpPointAnimProvider,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URootMotionModifier_SkewWarp_AddRootMotionModifierSkewWarp_Statics::NewProp_InWarpPointAnimTransform,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URootMotionModifier_SkewWarp_AddRootMotionModifierSkewWarp_Statics::NewProp_InWarpPointAnimBoneName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URootMotionModifier_SkewWarp_AddRootMotionModifierSkewWarp_Statics::NewProp_bInWarpTranslation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URootMotionModifier_SkewWarp_AddRootMotionModifierSkewWarp_Statics::NewProp_bInIgnoreZAxis,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URootMotionModifier_SkewWarp_AddRootMotionModifierSkewWarp_Statics::NewProp_bInWarpRotation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URootMotionModifier_SkewWarp_AddRootMotionModifierSkewWarp_Statics::NewProp_InRotationType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URootMotionModifier_SkewWarp_AddRootMotionModifierSkewWarp_Statics::NewProp_InRotationType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URootMotionModifier_SkewWarp_AddRootMotionModifierSkewWarp_Statics::NewProp_InRotationMethod_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URootMotionModifier_SkewWarp_AddRootMotionModifierSkewWarp_Statics::NewProp_InRotationMethod,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URootMotionModifier_SkewWarp_AddRootMotionModifierSkewWarp_Statics::NewProp_InWarpRotationTimeMultiplier,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URootMotionModifier_SkewWarp_AddRootMotionModifierSkewWarp_Statics::NewProp_InWarpMaxRotationRate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URootMotionModifier_SkewWarp_AddRootMotionModifierSkewWarp_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URootMotionModifier_SkewWarp_AddRootMotionModifierSkewWarp_Statics::Function_MetaDataParams[] = {
		{ "Category", "Motion Warping" },
		{ "CPP_Default_bInIgnoreZAxis", "true" },
		{ "CPP_Default_bInWarpRotation", "true" },
		{ "CPP_Default_bInWarpTranslation", "true" },
		{ "CPP_Default_InRotationMethod", "Slerp" },
		{ "CPP_Default_InRotationType", "Default" },
		{ "CPP_Default_InWarpMaxRotationRate", "0.000000" },
		{ "CPP_Default_InWarpRotationTimeMultiplier", "1.000000" },
		{ "ModuleRelativePath", "Public/RootMotionModifier_SkewWarp.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_URootMotionModifier_SkewWarp_AddRootMotionModifierSkewWarp_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URootMotionModifier_SkewWarp, nullptr, "AddRootMotionModifierSkewWarp", nullptr, nullptr, sizeof(RootMotionModifier_SkewWarp_eventAddRootMotionModifierSkewWarp_Parms), Z_Construct_UFunction_URootMotionModifier_SkewWarp_AddRootMotionModifierSkewWarp_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URootMotionModifier_SkewWarp_AddRootMotionModifierSkewWarp_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04822401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URootMotionModifier_SkewWarp_AddRootMotionModifierSkewWarp_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URootMotionModifier_SkewWarp_AddRootMotionModifierSkewWarp_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URootMotionModifier_SkewWarp_AddRootMotionModifierSkewWarp()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_URootMotionModifier_SkewWarp_AddRootMotionModifierSkewWarp_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_URootMotionModifier_SkewWarp_NoRegister()
	{
		return URootMotionModifier_SkewWarp::StaticClass();
	}
	struct Z_Construct_UClass_URootMotionModifier_SkewWarp_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_URootMotionModifier_SkewWarp_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_URootMotionModifier_Warp,
		(UObject* (*)())Z_Construct_UPackage__Script_MotionWarping,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_URootMotionModifier_SkewWarp_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_URootMotionModifier_SkewWarp_AddRootMotionModifierSkewWarp, "AddRootMotionModifierSkewWarp" }, // 412671259
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URootMotionModifier_SkewWarp_Statics::Class_MetaDataParams[] = {
		{ "DisplayName", "Skew Warp" },
		{ "IncludePath", "RootMotionModifier_SkewWarp.h" },
		{ "ModuleRelativePath", "Public/RootMotionModifier_SkewWarp.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_URootMotionModifier_SkewWarp_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<URootMotionModifier_SkewWarp>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_URootMotionModifier_SkewWarp_Statics::ClassParams = {
		&URootMotionModifier_SkewWarp::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x001010A0u,
		METADATA_PARAMS(Z_Construct_UClass_URootMotionModifier_SkewWarp_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_URootMotionModifier_SkewWarp_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_URootMotionModifier_SkewWarp()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_URootMotionModifier_SkewWarp_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(URootMotionModifier_SkewWarp, 2417938395);
	template<> MOTIONWARPING_API UClass* StaticClass<URootMotionModifier_SkewWarp>()
	{
		return URootMotionModifier_SkewWarp::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_URootMotionModifier_SkewWarp(Z_Construct_UClass_URootMotionModifier_SkewWarp, &URootMotionModifier_SkewWarp::StaticClass, TEXT("/Script/MotionWarping"), TEXT("URootMotionModifier_SkewWarp"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(URootMotionModifier_SkewWarp);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
