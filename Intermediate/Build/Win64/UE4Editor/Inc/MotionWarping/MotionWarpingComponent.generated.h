// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UMotionWarpingComponent;
class UAnimSequenceBase;
struct FMotionWarpingWindowData;
struct FTransform;
struct FVector;
struct FRotator;
class USceneComponent;
struct FMotionWarpingTarget;
#ifdef MOTIONWARPING_MotionWarpingComponent_generated_h
#error "MotionWarpingComponent.generated.h already included, missing '#pragma once' in MotionWarpingComponent.h"
#endif
#define MOTIONWARPING_MotionWarpingComponent_generated_h

#define HostProject_Plugins_MotionWarping_Source_MotionWarping_Public_MotionWarpingComponent_h_34_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FMotionWarpingWindowData_Statics; \
	MOTIONWARPING_API static class UScriptStruct* StaticStruct();


template<> MOTIONWARPING_API UScriptStruct* StaticStruct<struct FMotionWarpingWindowData>();

#define HostProject_Plugins_MotionWarping_Source_MotionWarping_Public_MotionWarpingComponent_h_81_DELEGATE \
struct _Script_MotionWarping_eventMotionWarpingPreUpdate_Parms \
{ \
	UMotionWarpingComponent* MotionWarpingComp; \
}; \
static inline void FMotionWarpingPreUpdate_DelegateWrapper(const FMulticastScriptDelegate& MotionWarpingPreUpdate, UMotionWarpingComponent* MotionWarpingComp) \
{ \
	_Script_MotionWarping_eventMotionWarpingPreUpdate_Parms Parms; \
	Parms.MotionWarpingComp=MotionWarpingComp; \
	MotionWarpingPreUpdate.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define HostProject_Plugins_MotionWarping_Source_MotionWarping_Public_MotionWarpingComponent_h_49_SPARSE_DATA
#define HostProject_Plugins_MotionWarping_Source_MotionWarping_Public_MotionWarpingComponent_h_49_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetMotionWarpingWindowsForWarpTargetFromAnimation); \
	DECLARE_FUNCTION(execGetMotionWarpingWindowsFromAnimation); \
	DECLARE_FUNCTION(execExtractRootMotionFromAnimation);


#define HostProject_Plugins_MotionWarping_Source_MotionWarping_Public_MotionWarpingComponent_h_49_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetMotionWarpingWindowsForWarpTargetFromAnimation); \
	DECLARE_FUNCTION(execGetMotionWarpingWindowsFromAnimation); \
	DECLARE_FUNCTION(execExtractRootMotionFromAnimation);


#define HostProject_Plugins_MotionWarping_Source_MotionWarping_Public_MotionWarpingComponent_h_49_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMotionWarpingUtilities(); \
	friend struct Z_Construct_UClass_UMotionWarpingUtilities_Statics; \
public: \
	DECLARE_CLASS(UMotionWarpingUtilities, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MotionWarping"), NO_API) \
	DECLARE_SERIALIZER(UMotionWarpingUtilities)


#define HostProject_Plugins_MotionWarping_Source_MotionWarping_Public_MotionWarpingComponent_h_49_INCLASS \
private: \
	static void StaticRegisterNativesUMotionWarpingUtilities(); \
	friend struct Z_Construct_UClass_UMotionWarpingUtilities_Statics; \
public: \
	DECLARE_CLASS(UMotionWarpingUtilities, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MotionWarping"), NO_API) \
	DECLARE_SERIALIZER(UMotionWarpingUtilities)


#define HostProject_Plugins_MotionWarping_Source_MotionWarping_Public_MotionWarpingComponent_h_49_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMotionWarpingUtilities(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMotionWarpingUtilities) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMotionWarpingUtilities); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMotionWarpingUtilities); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UMotionWarpingUtilities(UMotionWarpingUtilities&&); \
	NO_API UMotionWarpingUtilities(const UMotionWarpingUtilities&); \
public:


#define HostProject_Plugins_MotionWarping_Source_MotionWarping_Public_MotionWarpingComponent_h_49_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMotionWarpingUtilities(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UMotionWarpingUtilities(UMotionWarpingUtilities&&); \
	NO_API UMotionWarpingUtilities(const UMotionWarpingUtilities&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMotionWarpingUtilities); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMotionWarpingUtilities); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMotionWarpingUtilities)


#define HostProject_Plugins_MotionWarping_Source_MotionWarping_Public_MotionWarpingComponent_h_49_PRIVATE_PROPERTY_OFFSET
#define HostProject_Plugins_MotionWarping_Source_MotionWarping_Public_MotionWarpingComponent_h_46_PROLOG
#define HostProject_Plugins_MotionWarping_Source_MotionWarping_Public_MotionWarpingComponent_h_49_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HostProject_Plugins_MotionWarping_Source_MotionWarping_Public_MotionWarpingComponent_h_49_PRIVATE_PROPERTY_OFFSET \
	HostProject_Plugins_MotionWarping_Source_MotionWarping_Public_MotionWarpingComponent_h_49_SPARSE_DATA \
	HostProject_Plugins_MotionWarping_Source_MotionWarping_Public_MotionWarpingComponent_h_49_RPC_WRAPPERS \
	HostProject_Plugins_MotionWarping_Source_MotionWarping_Public_MotionWarpingComponent_h_49_INCLASS \
	HostProject_Plugins_MotionWarping_Source_MotionWarping_Public_MotionWarpingComponent_h_49_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define HostProject_Plugins_MotionWarping_Source_MotionWarping_Public_MotionWarpingComponent_h_49_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HostProject_Plugins_MotionWarping_Source_MotionWarping_Public_MotionWarpingComponent_h_49_PRIVATE_PROPERTY_OFFSET \
	HostProject_Plugins_MotionWarping_Source_MotionWarping_Public_MotionWarpingComponent_h_49_SPARSE_DATA \
	HostProject_Plugins_MotionWarping_Source_MotionWarping_Public_MotionWarpingComponent_h_49_RPC_WRAPPERS_NO_PURE_DECLS \
	HostProject_Plugins_MotionWarping_Source_MotionWarping_Public_MotionWarpingComponent_h_49_INCLASS_NO_PURE_DECLS \
	HostProject_Plugins_MotionWarping_Source_MotionWarping_Public_MotionWarpingComponent_h_49_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MOTIONWARPING_API UClass* StaticClass<class UMotionWarpingUtilities>();

#define HostProject_Plugins_MotionWarping_Source_MotionWarping_Public_MotionWarpingComponent_h_86_SPARSE_DATA
#define HostProject_Plugins_MotionWarping_Source_MotionWarping_Public_MotionWarpingComponent_h_86_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execProcessRootMotionForTesting); \
	DECLARE_FUNCTION(execRemoveAllWarpTargets); \
	DECLARE_FUNCTION(execRemoveWarpTarget); \
	DECLARE_FUNCTION(execAddOrUpdateWarpTargetFromLocationAndRotation); \
	DECLARE_FUNCTION(execAddOrUpdateWarpTargetFromLocation); \
	DECLARE_FUNCTION(execAddOrUpdateWarpTargetFromComponent); \
	DECLARE_FUNCTION(execAddOrUpdateWarpTargetFromTransform); \
	DECLARE_FUNCTION(execAddOrUpdateWarpTarget); \
	DECLARE_FUNCTION(execDisableAllRootMotionModifiers);


#define HostProject_Plugins_MotionWarping_Source_MotionWarping_Public_MotionWarpingComponent_h_86_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execProcessRootMotionForTesting); \
	DECLARE_FUNCTION(execRemoveAllWarpTargets); \
	DECLARE_FUNCTION(execRemoveWarpTarget); \
	DECLARE_FUNCTION(execAddOrUpdateWarpTargetFromLocationAndRotation); \
	DECLARE_FUNCTION(execAddOrUpdateWarpTargetFromLocation); \
	DECLARE_FUNCTION(execAddOrUpdateWarpTargetFromComponent); \
	DECLARE_FUNCTION(execAddOrUpdateWarpTargetFromTransform); \
	DECLARE_FUNCTION(execAddOrUpdateWarpTarget); \
	DECLARE_FUNCTION(execDisableAllRootMotionModifiers);


#define HostProject_Plugins_MotionWarping_Source_MotionWarping_Public_MotionWarpingComponent_h_86_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMotionWarpingComponent(); \
	friend struct Z_Construct_UClass_UMotionWarpingComponent_Statics; \
public: \
	DECLARE_CLASS(UMotionWarpingComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/MotionWarping"), NO_API) \
	DECLARE_SERIALIZER(UMotionWarpingComponent) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		WarpTargets=NETFIELD_REP_START, \
		NETFIELD_REP_END=WarpTargets	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define HostProject_Plugins_MotionWarping_Source_MotionWarping_Public_MotionWarpingComponent_h_86_INCLASS \
private: \
	static void StaticRegisterNativesUMotionWarpingComponent(); \
	friend struct Z_Construct_UClass_UMotionWarpingComponent_Statics; \
public: \
	DECLARE_CLASS(UMotionWarpingComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/MotionWarping"), NO_API) \
	DECLARE_SERIALIZER(UMotionWarpingComponent) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		WarpTargets=NETFIELD_REP_START, \
		NETFIELD_REP_END=WarpTargets	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define HostProject_Plugins_MotionWarping_Source_MotionWarping_Public_MotionWarpingComponent_h_86_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMotionWarpingComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMotionWarpingComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMotionWarpingComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMotionWarpingComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UMotionWarpingComponent(UMotionWarpingComponent&&); \
	NO_API UMotionWarpingComponent(const UMotionWarpingComponent&); \
public:


#define HostProject_Plugins_MotionWarping_Source_MotionWarping_Public_MotionWarpingComponent_h_86_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UMotionWarpingComponent(UMotionWarpingComponent&&); \
	NO_API UMotionWarpingComponent(const UMotionWarpingComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMotionWarpingComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMotionWarpingComponent); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMotionWarpingComponent)


#define HostProject_Plugins_MotionWarping_Source_MotionWarping_Public_MotionWarpingComponent_h_86_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__CharacterOwner() { return STRUCT_OFFSET(UMotionWarpingComponent, CharacterOwner); } \
	FORCEINLINE static uint32 __PPO__Modifiers() { return STRUCT_OFFSET(UMotionWarpingComponent, Modifiers); } \
	FORCEINLINE static uint32 __PPO__WarpTargets() { return STRUCT_OFFSET(UMotionWarpingComponent, WarpTargets); } \
	FORCEINLINE static uint32 __PPO__ActiveMontage() { return STRUCT_OFFSET(UMotionWarpingComponent, ActiveMontage); }


#define HostProject_Plugins_MotionWarping_Source_MotionWarping_Public_MotionWarpingComponent_h_83_PROLOG
#define HostProject_Plugins_MotionWarping_Source_MotionWarping_Public_MotionWarpingComponent_h_86_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HostProject_Plugins_MotionWarping_Source_MotionWarping_Public_MotionWarpingComponent_h_86_PRIVATE_PROPERTY_OFFSET \
	HostProject_Plugins_MotionWarping_Source_MotionWarping_Public_MotionWarpingComponent_h_86_SPARSE_DATA \
	HostProject_Plugins_MotionWarping_Source_MotionWarping_Public_MotionWarpingComponent_h_86_RPC_WRAPPERS \
	HostProject_Plugins_MotionWarping_Source_MotionWarping_Public_MotionWarpingComponent_h_86_INCLASS \
	HostProject_Plugins_MotionWarping_Source_MotionWarping_Public_MotionWarpingComponent_h_86_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define HostProject_Plugins_MotionWarping_Source_MotionWarping_Public_MotionWarpingComponent_h_86_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HostProject_Plugins_MotionWarping_Source_MotionWarping_Public_MotionWarpingComponent_h_86_PRIVATE_PROPERTY_OFFSET \
	HostProject_Plugins_MotionWarping_Source_MotionWarping_Public_MotionWarpingComponent_h_86_SPARSE_DATA \
	HostProject_Plugins_MotionWarping_Source_MotionWarping_Public_MotionWarpingComponent_h_86_RPC_WRAPPERS_NO_PURE_DECLS \
	HostProject_Plugins_MotionWarping_Source_MotionWarping_Public_MotionWarpingComponent_h_86_INCLASS_NO_PURE_DECLS \
	HostProject_Plugins_MotionWarping_Source_MotionWarping_Public_MotionWarpingComponent_h_86_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MOTIONWARPING_API UClass* StaticClass<class UMotionWarpingComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID HostProject_Plugins_MotionWarping_Source_MotionWarping_Public_MotionWarpingComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
