// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UMotionWarpingComponent;
class URootMotionModifier;
class UAnimSequenceBase;
#ifdef MOTIONWARPING_AnimNotifyState_MotionWarping_generated_h
#error "AnimNotifyState_MotionWarping.generated.h already included, missing '#pragma once' in AnimNotifyState_MotionWarping.h"
#endif
#define MOTIONWARPING_AnimNotifyState_MotionWarping_generated_h

#define HostProject_Plugins_MotionWarping_Source_MotionWarping_Public_AnimNotifyState_MotionWarping_h_16_SPARSE_DATA
#define HostProject_Plugins_MotionWarping_Source_MotionWarping_Public_AnimNotifyState_MotionWarping_h_16_RPC_WRAPPERS \
	virtual URootMotionModifier* AddRootMotionModifier_Implementation(UMotionWarpingComponent* MotionWarpingComp, const UAnimSequenceBase* Animation, float StartTime, float EndTime) const; \
 \
	DECLARE_FUNCTION(execOnRootMotionModifierDeactivate); \
	DECLARE_FUNCTION(execOnRootMotionModifierUpdate); \
	DECLARE_FUNCTION(execOnRootMotionModifierActivate); \
	DECLARE_FUNCTION(execAddRootMotionModifier);


#define HostProject_Plugins_MotionWarping_Source_MotionWarping_Public_AnimNotifyState_MotionWarping_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual URootMotionModifier* AddRootMotionModifier_Implementation(UMotionWarpingComponent* MotionWarpingComp, const UAnimSequenceBase* Animation, float StartTime, float EndTime) const; \
 \
	DECLARE_FUNCTION(execOnRootMotionModifierDeactivate); \
	DECLARE_FUNCTION(execOnRootMotionModifierUpdate); \
	DECLARE_FUNCTION(execOnRootMotionModifierActivate); \
	DECLARE_FUNCTION(execAddRootMotionModifier);


#define HostProject_Plugins_MotionWarping_Source_MotionWarping_Public_AnimNotifyState_MotionWarping_h_16_EVENT_PARMS \
	struct AnimNotifyState_MotionWarping_eventAddRootMotionModifier_Parms \
	{ \
		UMotionWarpingComponent* MotionWarpingComp; \
		const UAnimSequenceBase* Animation; \
		float StartTime; \
		float EndTime; \
		URootMotionModifier* ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		AnimNotifyState_MotionWarping_eventAddRootMotionModifier_Parms() \
			: ReturnValue(NULL) \
		{ \
		} \
	}; \
	struct AnimNotifyState_MotionWarping_eventOnWarpBegin_Parms \
	{ \
		UMotionWarpingComponent* MotionWarpingComp; \
		URootMotionModifier* Modifier; \
	}; \
	struct AnimNotifyState_MotionWarping_eventOnWarpEnd_Parms \
	{ \
		UMotionWarpingComponent* MotionWarpingComp; \
		URootMotionModifier* Modifier; \
	}; \
	struct AnimNotifyState_MotionWarping_eventOnWarpUpdate_Parms \
	{ \
		UMotionWarpingComponent* MotionWarpingComp; \
		URootMotionModifier* Modifier; \
	};


#define HostProject_Plugins_MotionWarping_Source_MotionWarping_Public_AnimNotifyState_MotionWarping_h_16_CALLBACK_WRAPPERS
#define HostProject_Plugins_MotionWarping_Source_MotionWarping_Public_AnimNotifyState_MotionWarping_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAnimNotifyState_MotionWarping(); \
	friend struct Z_Construct_UClass_UAnimNotifyState_MotionWarping_Statics; \
public: \
	DECLARE_CLASS(UAnimNotifyState_MotionWarping, UAnimNotifyState, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MotionWarping"), NO_API) \
	DECLARE_SERIALIZER(UAnimNotifyState_MotionWarping)


#define HostProject_Plugins_MotionWarping_Source_MotionWarping_Public_AnimNotifyState_MotionWarping_h_16_INCLASS \
private: \
	static void StaticRegisterNativesUAnimNotifyState_MotionWarping(); \
	friend struct Z_Construct_UClass_UAnimNotifyState_MotionWarping_Statics; \
public: \
	DECLARE_CLASS(UAnimNotifyState_MotionWarping, UAnimNotifyState, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MotionWarping"), NO_API) \
	DECLARE_SERIALIZER(UAnimNotifyState_MotionWarping)


#define HostProject_Plugins_MotionWarping_Source_MotionWarping_Public_AnimNotifyState_MotionWarping_h_16_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAnimNotifyState_MotionWarping(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAnimNotifyState_MotionWarping) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAnimNotifyState_MotionWarping); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAnimNotifyState_MotionWarping); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAnimNotifyState_MotionWarping(UAnimNotifyState_MotionWarping&&); \
	NO_API UAnimNotifyState_MotionWarping(const UAnimNotifyState_MotionWarping&); \
public:


#define HostProject_Plugins_MotionWarping_Source_MotionWarping_Public_AnimNotifyState_MotionWarping_h_16_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAnimNotifyState_MotionWarping(UAnimNotifyState_MotionWarping&&); \
	NO_API UAnimNotifyState_MotionWarping(const UAnimNotifyState_MotionWarping&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAnimNotifyState_MotionWarping); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAnimNotifyState_MotionWarping); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAnimNotifyState_MotionWarping)


#define HostProject_Plugins_MotionWarping_Source_MotionWarping_Public_AnimNotifyState_MotionWarping_h_16_PRIVATE_PROPERTY_OFFSET
#define HostProject_Plugins_MotionWarping_Source_MotionWarping_Public_AnimNotifyState_MotionWarping_h_13_PROLOG \
	HostProject_Plugins_MotionWarping_Source_MotionWarping_Public_AnimNotifyState_MotionWarping_h_16_EVENT_PARMS


#define HostProject_Plugins_MotionWarping_Source_MotionWarping_Public_AnimNotifyState_MotionWarping_h_16_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HostProject_Plugins_MotionWarping_Source_MotionWarping_Public_AnimNotifyState_MotionWarping_h_16_PRIVATE_PROPERTY_OFFSET \
	HostProject_Plugins_MotionWarping_Source_MotionWarping_Public_AnimNotifyState_MotionWarping_h_16_SPARSE_DATA \
	HostProject_Plugins_MotionWarping_Source_MotionWarping_Public_AnimNotifyState_MotionWarping_h_16_RPC_WRAPPERS \
	HostProject_Plugins_MotionWarping_Source_MotionWarping_Public_AnimNotifyState_MotionWarping_h_16_CALLBACK_WRAPPERS \
	HostProject_Plugins_MotionWarping_Source_MotionWarping_Public_AnimNotifyState_MotionWarping_h_16_INCLASS \
	HostProject_Plugins_MotionWarping_Source_MotionWarping_Public_AnimNotifyState_MotionWarping_h_16_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define HostProject_Plugins_MotionWarping_Source_MotionWarping_Public_AnimNotifyState_MotionWarping_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HostProject_Plugins_MotionWarping_Source_MotionWarping_Public_AnimNotifyState_MotionWarping_h_16_PRIVATE_PROPERTY_OFFSET \
	HostProject_Plugins_MotionWarping_Source_MotionWarping_Public_AnimNotifyState_MotionWarping_h_16_SPARSE_DATA \
	HostProject_Plugins_MotionWarping_Source_MotionWarping_Public_AnimNotifyState_MotionWarping_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	HostProject_Plugins_MotionWarping_Source_MotionWarping_Public_AnimNotifyState_MotionWarping_h_16_CALLBACK_WRAPPERS \
	HostProject_Plugins_MotionWarping_Source_MotionWarping_Public_AnimNotifyState_MotionWarping_h_16_INCLASS_NO_PURE_DECLS \
	HostProject_Plugins_MotionWarping_Source_MotionWarping_Public_AnimNotifyState_MotionWarping_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MOTIONWARPING_API UClass* StaticClass<class UAnimNotifyState_MotionWarping>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID HostProject_Plugins_MotionWarping_Source_MotionWarping_Public_AnimNotifyState_MotionWarping_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
