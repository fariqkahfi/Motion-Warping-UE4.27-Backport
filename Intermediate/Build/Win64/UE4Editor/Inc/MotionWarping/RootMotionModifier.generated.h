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
struct FVector;
class URootMotionModifier_Scale;
#ifdef MOTIONWARPING_RootMotionModifier_generated_h
#error "RootMotionModifier.generated.h already included, missing '#pragma once' in RootMotionModifier.h"
#endif
#define MOTIONWARPING_RootMotionModifier_generated_h

#define HostProject_Plugins_MotionWarping_Source_MotionWarping_Public_RootMotionModifier_h_157_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FMotionWarpingTarget_Statics; \
	static class UScriptStruct* StaticStruct();


template<> MOTIONWARPING_API UScriptStruct* StaticStruct<struct FMotionWarpingTarget>();

#define HostProject_Plugins_MotionWarping_Source_MotionWarping_Public_RootMotionModifier_h_21_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FMotionWarpingUpdateContext_Statics; \
	MOTIONWARPING_API static class UScriptStruct* StaticStruct();


template<> MOTIONWARPING_API UScriptStruct* StaticStruct<struct FMotionWarpingUpdateContext>();

#define HostProject_Plugins_MotionWarping_Source_MotionWarping_Public_RootMotionModifier_h_59_DELEGATE \
struct _Script_MotionWarping_eventOnRootMotionModifierDelegate_Parms \
{ \
	UMotionWarpingComponent* MotionWarpingComp; \
	URootMotionModifier* RootMotionModifier; \
}; \
static inline void FOnRootMotionModifierDelegate_DelegateWrapper(const FScriptDelegate& OnRootMotionModifierDelegate, UMotionWarpingComponent* MotionWarpingComp, URootMotionModifier* RootMotionModifier) \
{ \
	_Script_MotionWarping_eventOnRootMotionModifierDelegate_Parms Parms; \
	Parms.MotionWarpingComp=MotionWarpingComp; \
	Parms.RootMotionModifier=RootMotionModifier; \
	OnRootMotionModifierDelegate.ProcessDelegate<UObject>(&Parms); \
}


#define HostProject_Plugins_MotionWarping_Source_MotionWarping_Public_RootMotionModifier_h_67_SPARSE_DATA
#define HostProject_Plugins_MotionWarping_Source_MotionWarping_Public_RootMotionModifier_h_67_RPC_WRAPPERS
#define HostProject_Plugins_MotionWarping_Source_MotionWarping_Public_RootMotionModifier_h_67_RPC_WRAPPERS_NO_PURE_DECLS
#define HostProject_Plugins_MotionWarping_Source_MotionWarping_Public_RootMotionModifier_h_67_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesURootMotionModifier(); \
	friend struct Z_Construct_UClass_URootMotionModifier_Statics; \
public: \
	DECLARE_CLASS(URootMotionModifier, UObject, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/MotionWarping"), NO_API) \
	DECLARE_SERIALIZER(URootMotionModifier)


#define HostProject_Plugins_MotionWarping_Source_MotionWarping_Public_RootMotionModifier_h_67_INCLASS \
private: \
	static void StaticRegisterNativesURootMotionModifier(); \
	friend struct Z_Construct_UClass_URootMotionModifier_Statics; \
public: \
	DECLARE_CLASS(URootMotionModifier, UObject, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/MotionWarping"), NO_API) \
	DECLARE_SERIALIZER(URootMotionModifier)


#define HostProject_Plugins_MotionWarping_Source_MotionWarping_Public_RootMotionModifier_h_67_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API URootMotionModifier(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(URootMotionModifier) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, URootMotionModifier); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(URootMotionModifier); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API URootMotionModifier(URootMotionModifier&&); \
	NO_API URootMotionModifier(const URootMotionModifier&); \
public:


#define HostProject_Plugins_MotionWarping_Source_MotionWarping_Public_RootMotionModifier_h_67_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API URootMotionModifier(URootMotionModifier&&); \
	NO_API URootMotionModifier(const URootMotionModifier&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, URootMotionModifier); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(URootMotionModifier); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(URootMotionModifier)


#define HostProject_Plugins_MotionWarping_Source_MotionWarping_Public_RootMotionModifier_h_67_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__State() { return STRUCT_OFFSET(URootMotionModifier, State); }


#define HostProject_Plugins_MotionWarping_Source_MotionWarping_Public_RootMotionModifier_h_64_PROLOG
#define HostProject_Plugins_MotionWarping_Source_MotionWarping_Public_RootMotionModifier_h_67_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HostProject_Plugins_MotionWarping_Source_MotionWarping_Public_RootMotionModifier_h_67_PRIVATE_PROPERTY_OFFSET \
	HostProject_Plugins_MotionWarping_Source_MotionWarping_Public_RootMotionModifier_h_67_SPARSE_DATA \
	HostProject_Plugins_MotionWarping_Source_MotionWarping_Public_RootMotionModifier_h_67_RPC_WRAPPERS \
	HostProject_Plugins_MotionWarping_Source_MotionWarping_Public_RootMotionModifier_h_67_INCLASS \
	HostProject_Plugins_MotionWarping_Source_MotionWarping_Public_RootMotionModifier_h_67_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define HostProject_Plugins_MotionWarping_Source_MotionWarping_Public_RootMotionModifier_h_67_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HostProject_Plugins_MotionWarping_Source_MotionWarping_Public_RootMotionModifier_h_67_PRIVATE_PROPERTY_OFFSET \
	HostProject_Plugins_MotionWarping_Source_MotionWarping_Public_RootMotionModifier_h_67_SPARSE_DATA \
	HostProject_Plugins_MotionWarping_Source_MotionWarping_Public_RootMotionModifier_h_67_RPC_WRAPPERS_NO_PURE_DECLS \
	HostProject_Plugins_MotionWarping_Source_MotionWarping_Public_RootMotionModifier_h_67_INCLASS_NO_PURE_DECLS \
	HostProject_Plugins_MotionWarping_Source_MotionWarping_Public_RootMotionModifier_h_67_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MOTIONWARPING_API UClass* StaticClass<class URootMotionModifier>();

#define HostProject_Plugins_MotionWarping_Source_MotionWarping_Public_RootMotionModifier_h_259_SPARSE_DATA
#define HostProject_Plugins_MotionWarping_Source_MotionWarping_Public_RootMotionModifier_h_259_RPC_WRAPPERS
#define HostProject_Plugins_MotionWarping_Source_MotionWarping_Public_RootMotionModifier_h_259_RPC_WRAPPERS_NO_PURE_DECLS
#define HostProject_Plugins_MotionWarping_Source_MotionWarping_Public_RootMotionModifier_h_259_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesURootMotionModifier_Warp(); \
	friend struct Z_Construct_UClass_URootMotionModifier_Warp_Statics; \
public: \
	DECLARE_CLASS(URootMotionModifier_Warp, URootMotionModifier, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/MotionWarping"), NO_API) \
	DECLARE_SERIALIZER(URootMotionModifier_Warp)


#define HostProject_Plugins_MotionWarping_Source_MotionWarping_Public_RootMotionModifier_h_259_INCLASS \
private: \
	static void StaticRegisterNativesURootMotionModifier_Warp(); \
	friend struct Z_Construct_UClass_URootMotionModifier_Warp_Statics; \
public: \
	DECLARE_CLASS(URootMotionModifier_Warp, URootMotionModifier, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/MotionWarping"), NO_API) \
	DECLARE_SERIALIZER(URootMotionModifier_Warp)


#define HostProject_Plugins_MotionWarping_Source_MotionWarping_Public_RootMotionModifier_h_259_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API URootMotionModifier_Warp(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(URootMotionModifier_Warp) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, URootMotionModifier_Warp); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(URootMotionModifier_Warp); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API URootMotionModifier_Warp(URootMotionModifier_Warp&&); \
	NO_API URootMotionModifier_Warp(const URootMotionModifier_Warp&); \
public:


#define HostProject_Plugins_MotionWarping_Source_MotionWarping_Public_RootMotionModifier_h_259_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API URootMotionModifier_Warp(URootMotionModifier_Warp&&); \
	NO_API URootMotionModifier_Warp(const URootMotionModifier_Warp&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, URootMotionModifier_Warp); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(URootMotionModifier_Warp); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(URootMotionModifier_Warp)


#define HostProject_Plugins_MotionWarping_Source_MotionWarping_Public_RootMotionModifier_h_259_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__CachedTargetTransform() { return STRUCT_OFFSET(URootMotionModifier_Warp, CachedTargetTransform); }


#define HostProject_Plugins_MotionWarping_Source_MotionWarping_Public_RootMotionModifier_h_256_PROLOG
#define HostProject_Plugins_MotionWarping_Source_MotionWarping_Public_RootMotionModifier_h_259_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HostProject_Plugins_MotionWarping_Source_MotionWarping_Public_RootMotionModifier_h_259_PRIVATE_PROPERTY_OFFSET \
	HostProject_Plugins_MotionWarping_Source_MotionWarping_Public_RootMotionModifier_h_259_SPARSE_DATA \
	HostProject_Plugins_MotionWarping_Source_MotionWarping_Public_RootMotionModifier_h_259_RPC_WRAPPERS \
	HostProject_Plugins_MotionWarping_Source_MotionWarping_Public_RootMotionModifier_h_259_INCLASS \
	HostProject_Plugins_MotionWarping_Source_MotionWarping_Public_RootMotionModifier_h_259_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define HostProject_Plugins_MotionWarping_Source_MotionWarping_Public_RootMotionModifier_h_259_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HostProject_Plugins_MotionWarping_Source_MotionWarping_Public_RootMotionModifier_h_259_PRIVATE_PROPERTY_OFFSET \
	HostProject_Plugins_MotionWarping_Source_MotionWarping_Public_RootMotionModifier_h_259_SPARSE_DATA \
	HostProject_Plugins_MotionWarping_Source_MotionWarping_Public_RootMotionModifier_h_259_RPC_WRAPPERS_NO_PURE_DECLS \
	HostProject_Plugins_MotionWarping_Source_MotionWarping_Public_RootMotionModifier_h_259_INCLASS_NO_PURE_DECLS \
	HostProject_Plugins_MotionWarping_Source_MotionWarping_Public_RootMotionModifier_h_259_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MOTIONWARPING_API UClass* StaticClass<class URootMotionModifier_Warp>();

#define HostProject_Plugins_MotionWarping_Source_MotionWarping_Public_RootMotionModifier_h_352_SPARSE_DATA
#define HostProject_Plugins_MotionWarping_Source_MotionWarping_Public_RootMotionModifier_h_352_RPC_WRAPPERS
#define HostProject_Plugins_MotionWarping_Source_MotionWarping_Public_RootMotionModifier_h_352_RPC_WRAPPERS_NO_PURE_DECLS
#define HostProject_Plugins_MotionWarping_Source_MotionWarping_Public_RootMotionModifier_h_352_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUDEPRECATED_RootMotionModifier_SimpleWarp(); \
	friend struct Z_Construct_UClass_UDEPRECATED_RootMotionModifier_SimpleWarp_Statics; \
public: \
	DECLARE_CLASS(UDEPRECATED_RootMotionModifier_SimpleWarp, URootMotionModifier_Warp, COMPILED_IN_FLAGS(0 | CLASS_Deprecated), CASTCLASS_None, TEXT("/Script/MotionWarping"), NO_API) \
	DECLARE_SERIALIZER(UDEPRECATED_RootMotionModifier_SimpleWarp)


#define HostProject_Plugins_MotionWarping_Source_MotionWarping_Public_RootMotionModifier_h_352_INCLASS \
private: \
	static void StaticRegisterNativesUDEPRECATED_RootMotionModifier_SimpleWarp(); \
	friend struct Z_Construct_UClass_UDEPRECATED_RootMotionModifier_SimpleWarp_Statics; \
public: \
	DECLARE_CLASS(UDEPRECATED_RootMotionModifier_SimpleWarp, URootMotionModifier_Warp, COMPILED_IN_FLAGS(0 | CLASS_Deprecated), CASTCLASS_None, TEXT("/Script/MotionWarping"), NO_API) \
	DECLARE_SERIALIZER(UDEPRECATED_RootMotionModifier_SimpleWarp)


#define HostProject_Plugins_MotionWarping_Source_MotionWarping_Public_RootMotionModifier_h_352_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UDEPRECATED_RootMotionModifier_SimpleWarp(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDEPRECATED_RootMotionModifier_SimpleWarp) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDEPRECATED_RootMotionModifier_SimpleWarp); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDEPRECATED_RootMotionModifier_SimpleWarp); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UDEPRECATED_RootMotionModifier_SimpleWarp(UDEPRECATED_RootMotionModifier_SimpleWarp&&); \
	NO_API UDEPRECATED_RootMotionModifier_SimpleWarp(const UDEPRECATED_RootMotionModifier_SimpleWarp&); \
public:


#define HostProject_Plugins_MotionWarping_Source_MotionWarping_Public_RootMotionModifier_h_352_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UDEPRECATED_RootMotionModifier_SimpleWarp(UDEPRECATED_RootMotionModifier_SimpleWarp&&); \
	NO_API UDEPRECATED_RootMotionModifier_SimpleWarp(const UDEPRECATED_RootMotionModifier_SimpleWarp&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDEPRECATED_RootMotionModifier_SimpleWarp); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDEPRECATED_RootMotionModifier_SimpleWarp); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDEPRECATED_RootMotionModifier_SimpleWarp)


#define HostProject_Plugins_MotionWarping_Source_MotionWarping_Public_RootMotionModifier_h_352_PRIVATE_PROPERTY_OFFSET
#define HostProject_Plugins_MotionWarping_Source_MotionWarping_Public_RootMotionModifier_h_349_PROLOG
#define HostProject_Plugins_MotionWarping_Source_MotionWarping_Public_RootMotionModifier_h_352_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HostProject_Plugins_MotionWarping_Source_MotionWarping_Public_RootMotionModifier_h_352_PRIVATE_PROPERTY_OFFSET \
	HostProject_Plugins_MotionWarping_Source_MotionWarping_Public_RootMotionModifier_h_352_SPARSE_DATA \
	HostProject_Plugins_MotionWarping_Source_MotionWarping_Public_RootMotionModifier_h_352_RPC_WRAPPERS \
	HostProject_Plugins_MotionWarping_Source_MotionWarping_Public_RootMotionModifier_h_352_INCLASS \
	HostProject_Plugins_MotionWarping_Source_MotionWarping_Public_RootMotionModifier_h_352_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define HostProject_Plugins_MotionWarping_Source_MotionWarping_Public_RootMotionModifier_h_352_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HostProject_Plugins_MotionWarping_Source_MotionWarping_Public_RootMotionModifier_h_352_PRIVATE_PROPERTY_OFFSET \
	HostProject_Plugins_MotionWarping_Source_MotionWarping_Public_RootMotionModifier_h_352_SPARSE_DATA \
	HostProject_Plugins_MotionWarping_Source_MotionWarping_Public_RootMotionModifier_h_352_RPC_WRAPPERS_NO_PURE_DECLS \
	HostProject_Plugins_MotionWarping_Source_MotionWarping_Public_RootMotionModifier_h_352_INCLASS_NO_PURE_DECLS \
	HostProject_Plugins_MotionWarping_Source_MotionWarping_Public_RootMotionModifier_h_352_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MOTIONWARPING_API UClass* StaticClass<class UDEPRECATED_RootMotionModifier_SimpleWarp>();

#define HostProject_Plugins_MotionWarping_Source_MotionWarping_Public_RootMotionModifier_h_366_SPARSE_DATA
#define HostProject_Plugins_MotionWarping_Source_MotionWarping_Public_RootMotionModifier_h_366_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execAddRootMotionModifierScale);


#define HostProject_Plugins_MotionWarping_Source_MotionWarping_Public_RootMotionModifier_h_366_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execAddRootMotionModifierScale);


#define HostProject_Plugins_MotionWarping_Source_MotionWarping_Public_RootMotionModifier_h_366_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesURootMotionModifier_Scale(); \
	friend struct Z_Construct_UClass_URootMotionModifier_Scale_Statics; \
public: \
	DECLARE_CLASS(URootMotionModifier_Scale, URootMotionModifier, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MotionWarping"), NO_API) \
	DECLARE_SERIALIZER(URootMotionModifier_Scale)


#define HostProject_Plugins_MotionWarping_Source_MotionWarping_Public_RootMotionModifier_h_366_INCLASS \
private: \
	static void StaticRegisterNativesURootMotionModifier_Scale(); \
	friend struct Z_Construct_UClass_URootMotionModifier_Scale_Statics; \
public: \
	DECLARE_CLASS(URootMotionModifier_Scale, URootMotionModifier, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MotionWarping"), NO_API) \
	DECLARE_SERIALIZER(URootMotionModifier_Scale)


#define HostProject_Plugins_MotionWarping_Source_MotionWarping_Public_RootMotionModifier_h_366_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API URootMotionModifier_Scale(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(URootMotionModifier_Scale) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, URootMotionModifier_Scale); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(URootMotionModifier_Scale); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API URootMotionModifier_Scale(URootMotionModifier_Scale&&); \
	NO_API URootMotionModifier_Scale(const URootMotionModifier_Scale&); \
public:


#define HostProject_Plugins_MotionWarping_Source_MotionWarping_Public_RootMotionModifier_h_366_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API URootMotionModifier_Scale(URootMotionModifier_Scale&&); \
	NO_API URootMotionModifier_Scale(const URootMotionModifier_Scale&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, URootMotionModifier_Scale); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(URootMotionModifier_Scale); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(URootMotionModifier_Scale)


#define HostProject_Plugins_MotionWarping_Source_MotionWarping_Public_RootMotionModifier_h_366_PRIVATE_PROPERTY_OFFSET
#define HostProject_Plugins_MotionWarping_Source_MotionWarping_Public_RootMotionModifier_h_363_PROLOG
#define HostProject_Plugins_MotionWarping_Source_MotionWarping_Public_RootMotionModifier_h_366_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HostProject_Plugins_MotionWarping_Source_MotionWarping_Public_RootMotionModifier_h_366_PRIVATE_PROPERTY_OFFSET \
	HostProject_Plugins_MotionWarping_Source_MotionWarping_Public_RootMotionModifier_h_366_SPARSE_DATA \
	HostProject_Plugins_MotionWarping_Source_MotionWarping_Public_RootMotionModifier_h_366_RPC_WRAPPERS \
	HostProject_Plugins_MotionWarping_Source_MotionWarping_Public_RootMotionModifier_h_366_INCLASS \
	HostProject_Plugins_MotionWarping_Source_MotionWarping_Public_RootMotionModifier_h_366_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define HostProject_Plugins_MotionWarping_Source_MotionWarping_Public_RootMotionModifier_h_366_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HostProject_Plugins_MotionWarping_Source_MotionWarping_Public_RootMotionModifier_h_366_PRIVATE_PROPERTY_OFFSET \
	HostProject_Plugins_MotionWarping_Source_MotionWarping_Public_RootMotionModifier_h_366_SPARSE_DATA \
	HostProject_Plugins_MotionWarping_Source_MotionWarping_Public_RootMotionModifier_h_366_RPC_WRAPPERS_NO_PURE_DECLS \
	HostProject_Plugins_MotionWarping_Source_MotionWarping_Public_RootMotionModifier_h_366_INCLASS_NO_PURE_DECLS \
	HostProject_Plugins_MotionWarping_Source_MotionWarping_Public_RootMotionModifier_h_366_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MOTIONWARPING_API UClass* StaticClass<class URootMotionModifier_Scale>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID HostProject_Plugins_MotionWarping_Source_MotionWarping_Public_RootMotionModifier_h


#define FOREACH_ENUM_EWARPPOINTANIMPROVIDER(op) \
	op(EWarpPointAnimProvider::None) \
	op(EWarpPointAnimProvider::Static) \
	op(EWarpPointAnimProvider::Bone) 

enum class EWarpPointAnimProvider : uint8;
template<> MOTIONWARPING_API UEnum* StaticEnum<EWarpPointAnimProvider>();

#define FOREACH_ENUM_EMOTIONWARPROTATIONMETHOD(op) \
	op(EMotionWarpRotationMethod::Slerp) \
	op(EMotionWarpRotationMethod::SlerpWithClampedRate) \
	op(EMotionWarpRotationMethod::ConstantRate) 

enum class EMotionWarpRotationMethod : uint8;
template<> MOTIONWARPING_API UEnum* StaticEnum<EMotionWarpRotationMethod>();

#define FOREACH_ENUM_EMOTIONWARPROTATIONTYPE(op) \
	op(EMotionWarpRotationType::Default) \
	op(EMotionWarpRotationType::Facing) 

enum class EMotionWarpRotationType : uint8;
template<> MOTIONWARPING_API UEnum* StaticEnum<EMotionWarpRotationType>();

#define FOREACH_ENUM_EROOTMOTIONMODIFIERSTATE(op) \
	op(ERootMotionModifierState::Waiting) \
	op(ERootMotionModifierState::Active) \
	op(ERootMotionModifierState::MarkedForRemoval) \
	op(ERootMotionModifierState::Disabled) 

enum class ERootMotionModifierState : uint8;
template<> MOTIONWARPING_API UEnum* StaticEnum<ERootMotionModifierState>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
