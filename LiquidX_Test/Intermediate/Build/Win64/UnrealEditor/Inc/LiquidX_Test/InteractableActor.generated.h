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
#ifdef LIQUIDX_TEST_InteractableActor_generated_h
#error "InteractableActor.generated.h already included, missing '#pragma once' in InteractableActor.h"
#endif
#define LIQUIDX_TEST_InteractableActor_generated_h

#define FID_LiquidX_Test_Source_LiquidX_Test_InteractableActor_h_16_SPARSE_DATA
#define FID_LiquidX_Test_Source_LiquidX_Test_InteractableActor_h_16_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execThrowObject); \
	DECLARE_FUNCTION(execOnOverlapBegin);


#define FID_LiquidX_Test_Source_LiquidX_Test_InteractableActor_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execThrowObject); \
	DECLARE_FUNCTION(execOnOverlapBegin);


#define FID_LiquidX_Test_Source_LiquidX_Test_InteractableActor_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAInteractableActor(); \
	friend struct Z_Construct_UClass_AInteractableActor_Statics; \
public: \
	DECLARE_CLASS(AInteractableActor, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/LiquidX_Test"), NO_API) \
	DECLARE_SERIALIZER(AInteractableActor)


#define FID_LiquidX_Test_Source_LiquidX_Test_InteractableActor_h_16_INCLASS \
private: \
	static void StaticRegisterNativesAInteractableActor(); \
	friend struct Z_Construct_UClass_AInteractableActor_Statics; \
public: \
	DECLARE_CLASS(AInteractableActor, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/LiquidX_Test"), NO_API) \
	DECLARE_SERIALIZER(AInteractableActor)


#define FID_LiquidX_Test_Source_LiquidX_Test_InteractableActor_h_16_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AInteractableActor(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AInteractableActor) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AInteractableActor); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AInteractableActor); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AInteractableActor(AInteractableActor&&); \
	NO_API AInteractableActor(const AInteractableActor&); \
public:


#define FID_LiquidX_Test_Source_LiquidX_Test_InteractableActor_h_16_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AInteractableActor(AInteractableActor&&); \
	NO_API AInteractableActor(const AInteractableActor&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AInteractableActor); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AInteractableActor); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AInteractableActor)


#define FID_LiquidX_Test_Source_LiquidX_Test_InteractableActor_h_13_PROLOG
#define FID_LiquidX_Test_Source_LiquidX_Test_InteractableActor_h_16_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_LiquidX_Test_Source_LiquidX_Test_InteractableActor_h_16_SPARSE_DATA \
	FID_LiquidX_Test_Source_LiquidX_Test_InteractableActor_h_16_RPC_WRAPPERS \
	FID_LiquidX_Test_Source_LiquidX_Test_InteractableActor_h_16_INCLASS \
	FID_LiquidX_Test_Source_LiquidX_Test_InteractableActor_h_16_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_LiquidX_Test_Source_LiquidX_Test_InteractableActor_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_LiquidX_Test_Source_LiquidX_Test_InteractableActor_h_16_SPARSE_DATA \
	FID_LiquidX_Test_Source_LiquidX_Test_InteractableActor_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_LiquidX_Test_Source_LiquidX_Test_InteractableActor_h_16_INCLASS_NO_PURE_DECLS \
	FID_LiquidX_Test_Source_LiquidX_Test_InteractableActor_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> LIQUIDX_TEST_API UClass* StaticClass<class AInteractableActor>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_LiquidX_Test_Source_LiquidX_Test_InteractableActor_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
