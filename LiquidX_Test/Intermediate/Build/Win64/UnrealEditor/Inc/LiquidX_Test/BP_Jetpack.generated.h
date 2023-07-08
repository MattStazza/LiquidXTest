// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UPrimitiveComponent;
class AActor;
struct FHitResult;
#ifdef LIQUIDX_TEST_BP_Jetpack_generated_h
#error "BP_Jetpack.generated.h already included, missing '#pragma once' in BP_Jetpack.h"
#endif
#define LIQUIDX_TEST_BP_Jetpack_generated_h

#define FID_LiquidX_Test_Source_LiquidX_Test_BP_Jetpack_h_20_SPARSE_DATA
#define FID_LiquidX_Test_Source_LiquidX_Test_BP_Jetpack_h_20_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnOverlapBegin); \
	DECLARE_FUNCTION(execActivateJetpack); \
	DECLARE_FUNCTION(execToggleJetpack); \
	DECLARE_FUNCTION(execGetJetpackAttached);


#define FID_LiquidX_Test_Source_LiquidX_Test_BP_Jetpack_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnOverlapBegin); \
	DECLARE_FUNCTION(execActivateJetpack); \
	DECLARE_FUNCTION(execToggleJetpack); \
	DECLARE_FUNCTION(execGetJetpackAttached);


#define FID_LiquidX_Test_Source_LiquidX_Test_BP_Jetpack_h_20_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesABP_Jetpack(); \
	friend struct Z_Construct_UClass_ABP_Jetpack_Statics; \
public: \
	DECLARE_CLASS(ABP_Jetpack, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/LiquidX_Test"), NO_API) \
	DECLARE_SERIALIZER(ABP_Jetpack)


#define FID_LiquidX_Test_Source_LiquidX_Test_BP_Jetpack_h_20_INCLASS \
private: \
	static void StaticRegisterNativesABP_Jetpack(); \
	friend struct Z_Construct_UClass_ABP_Jetpack_Statics; \
public: \
	DECLARE_CLASS(ABP_Jetpack, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/LiquidX_Test"), NO_API) \
	DECLARE_SERIALIZER(ABP_Jetpack)


#define FID_LiquidX_Test_Source_LiquidX_Test_BP_Jetpack_h_20_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ABP_Jetpack(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ABP_Jetpack) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABP_Jetpack); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABP_Jetpack); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ABP_Jetpack(ABP_Jetpack&&); \
	NO_API ABP_Jetpack(const ABP_Jetpack&); \
public:


#define FID_LiquidX_Test_Source_LiquidX_Test_BP_Jetpack_h_20_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ABP_Jetpack(ABP_Jetpack&&); \
	NO_API ABP_Jetpack(const ABP_Jetpack&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABP_Jetpack); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABP_Jetpack); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ABP_Jetpack)


#define FID_LiquidX_Test_Source_LiquidX_Test_BP_Jetpack_h_17_PROLOG
#define FID_LiquidX_Test_Source_LiquidX_Test_BP_Jetpack_h_20_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_LiquidX_Test_Source_LiquidX_Test_BP_Jetpack_h_20_SPARSE_DATA \
	FID_LiquidX_Test_Source_LiquidX_Test_BP_Jetpack_h_20_RPC_WRAPPERS \
	FID_LiquidX_Test_Source_LiquidX_Test_BP_Jetpack_h_20_INCLASS \
	FID_LiquidX_Test_Source_LiquidX_Test_BP_Jetpack_h_20_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_LiquidX_Test_Source_LiquidX_Test_BP_Jetpack_h_20_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_LiquidX_Test_Source_LiquidX_Test_BP_Jetpack_h_20_SPARSE_DATA \
	FID_LiquidX_Test_Source_LiquidX_Test_BP_Jetpack_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_LiquidX_Test_Source_LiquidX_Test_BP_Jetpack_h_20_INCLASS_NO_PURE_DECLS \
	FID_LiquidX_Test_Source_LiquidX_Test_BP_Jetpack_h_20_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> LIQUIDX_TEST_API UClass* StaticClass<class ABP_Jetpack>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_LiquidX_Test_Source_LiquidX_Test_BP_Jetpack_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
