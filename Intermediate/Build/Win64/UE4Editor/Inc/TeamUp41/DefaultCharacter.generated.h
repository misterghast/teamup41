// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef TEAMUP41_DefaultCharacter_generated_h
#error "DefaultCharacter.generated.h already included, missing '#pragma once' in DefaultCharacter.h"
#endif
#define TEAMUP41_DefaultCharacter_generated_h

#define TeamUp41_Source_TeamUp41_DefaultCharacter_h_13_SPARSE_DATA
#define TeamUp41_Source_TeamUp41_DefaultCharacter_h_13_RPC_WRAPPERS
#define TeamUp41_Source_TeamUp41_DefaultCharacter_h_13_RPC_WRAPPERS_NO_PURE_DECLS
#define TeamUp41_Source_TeamUp41_DefaultCharacter_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesADefaultCharacter(); \
	friend struct Z_Construct_UClass_ADefaultCharacter_Statics; \
public: \
	DECLARE_CLASS(ADefaultCharacter, APawn, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/TeamUp41"), NO_API) \
	DECLARE_SERIALIZER(ADefaultCharacter)


#define TeamUp41_Source_TeamUp41_DefaultCharacter_h_13_INCLASS \
private: \
	static void StaticRegisterNativesADefaultCharacter(); \
	friend struct Z_Construct_UClass_ADefaultCharacter_Statics; \
public: \
	DECLARE_CLASS(ADefaultCharacter, APawn, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/TeamUp41"), NO_API) \
	DECLARE_SERIALIZER(ADefaultCharacter)


#define TeamUp41_Source_TeamUp41_DefaultCharacter_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ADefaultCharacter(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ADefaultCharacter) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ADefaultCharacter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ADefaultCharacter); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ADefaultCharacter(ADefaultCharacter&&); \
	NO_API ADefaultCharacter(const ADefaultCharacter&); \
public:


#define TeamUp41_Source_TeamUp41_DefaultCharacter_h_13_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ADefaultCharacter(ADefaultCharacter&&); \
	NO_API ADefaultCharacter(const ADefaultCharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ADefaultCharacter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ADefaultCharacter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ADefaultCharacter)


#define TeamUp41_Source_TeamUp41_DefaultCharacter_h_13_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__CameraComp() { return STRUCT_OFFSET(ADefaultCharacter, CameraComp); } \
	FORCEINLINE static uint32 __PPO__StaticMeshComp() { return STRUCT_OFFSET(ADefaultCharacter, StaticMeshComp); }


#define TeamUp41_Source_TeamUp41_DefaultCharacter_h_10_PROLOG
#define TeamUp41_Source_TeamUp41_DefaultCharacter_h_13_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TeamUp41_Source_TeamUp41_DefaultCharacter_h_13_PRIVATE_PROPERTY_OFFSET \
	TeamUp41_Source_TeamUp41_DefaultCharacter_h_13_SPARSE_DATA \
	TeamUp41_Source_TeamUp41_DefaultCharacter_h_13_RPC_WRAPPERS \
	TeamUp41_Source_TeamUp41_DefaultCharacter_h_13_INCLASS \
	TeamUp41_Source_TeamUp41_DefaultCharacter_h_13_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define TeamUp41_Source_TeamUp41_DefaultCharacter_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TeamUp41_Source_TeamUp41_DefaultCharacter_h_13_PRIVATE_PROPERTY_OFFSET \
	TeamUp41_Source_TeamUp41_DefaultCharacter_h_13_SPARSE_DATA \
	TeamUp41_Source_TeamUp41_DefaultCharacter_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	TeamUp41_Source_TeamUp41_DefaultCharacter_h_13_INCLASS_NO_PURE_DECLS \
	TeamUp41_Source_TeamUp41_DefaultCharacter_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> TEAMUP41_API UClass* StaticClass<class ADefaultCharacter>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID TeamUp41_Source_TeamUp41_DefaultCharacter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
