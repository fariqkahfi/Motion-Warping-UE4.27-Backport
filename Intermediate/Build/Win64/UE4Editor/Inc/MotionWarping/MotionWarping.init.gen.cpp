// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMotionWarping_init() {}
	MOTIONWARPING_API UFunction* Z_Construct_UDelegateFunction_MotionWarping_OnRootMotionModifierDelegate__DelegateSignature();
	MOTIONWARPING_API UFunction* Z_Construct_UDelegateFunction_MotionWarping_MotionWarpingPreUpdate__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_MotionWarping()
	{
		static UPackage* ReturnPackage = nullptr;
		if (!ReturnPackage)
		{
			static UObject* (*const SingletonFuncArray[])() = {
				(UObject* (*)())Z_Construct_UDelegateFunction_MotionWarping_OnRootMotionModifierDelegate__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_MotionWarping_MotionWarpingPreUpdate__DelegateSignature,
			};
			static const UE4CodeGen_Private::FPackageParams PackageParams = {
				"/Script/MotionWarping",
				SingletonFuncArray,
				UE_ARRAY_COUNT(SingletonFuncArray),
				PKG_CompiledIn | 0x00000000,
				0x0FDB2182,
				0x1FA2ECEC,
				METADATA_PARAMS(nullptr, 0)
			};
			UE4CodeGen_Private::ConstructUPackage(ReturnPackage, PackageParams);
		}
		return ReturnPackage;
	}
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
