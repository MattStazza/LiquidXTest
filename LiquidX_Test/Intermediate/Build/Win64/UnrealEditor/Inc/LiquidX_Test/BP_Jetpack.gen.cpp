// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "LiquidX_Test/BP_Jetpack.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBP_Jetpack() {}
// Cross Module References
	LIQUIDX_TEST_API UClass* Z_Construct_UClass_ABP_Jetpack_NoRegister();
	LIQUIDX_TEST_API UClass* Z_Construct_UClass_ABP_Jetpack();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_LiquidX_Test();
	ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHitResult();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USphereComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UCharacterMovementComponent_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(ABP_Jetpack::execOnOverlapBegin)
	{
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OverlappedComp);
		P_GET_OBJECT(AActor,Z_Param_OtherActor);
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp);
		P_GET_PROPERTY(FIntProperty,Z_Param_OtherBodyIndex);
		P_GET_UBOOL(Z_Param_bFromSweep);
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_SweepResult);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnOverlapBegin(Z_Param_OverlappedComp,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_OtherBodyIndex,Z_Param_bFromSweep,Z_Param_Out_SweepResult);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ABP_Jetpack::execActivateJetpack)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ActivateJetpack();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ABP_Jetpack::execToggleJetpack)
	{
		P_GET_UBOOL(Z_Param_active);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ToggleJetpack(Z_Param_active);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ABP_Jetpack::execGetJetpackAttached)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetJetpackAttached();
		P_NATIVE_END;
	}
	void ABP_Jetpack::StaticRegisterNativesABP_Jetpack()
	{
		UClass* Class = ABP_Jetpack::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ActivateJetpack", &ABP_Jetpack::execActivateJetpack },
			{ "GetJetpackAttached", &ABP_Jetpack::execGetJetpackAttached },
			{ "OnOverlapBegin", &ABP_Jetpack::execOnOverlapBegin },
			{ "ToggleJetpack", &ABP_Jetpack::execToggleJetpack },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ABP_Jetpack_ActivateJetpack_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABP_Jetpack_ActivateJetpack_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "BP_Jetpack.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ABP_Jetpack_ActivateJetpack_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABP_Jetpack, nullptr, "ActivateJetpack", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ABP_Jetpack_ActivateJetpack_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ABP_Jetpack_ActivateJetpack_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ABP_Jetpack_ActivateJetpack()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ABP_Jetpack_ActivateJetpack_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ABP_Jetpack_GetJetpackAttached_Statics
	{
		struct BP_Jetpack_eventGetJetpackAttached_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_ABP_Jetpack_GetJetpackAttached_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((BP_Jetpack_eventGetJetpackAttached_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ABP_Jetpack_GetJetpackAttached_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(BP_Jetpack_eventGetJetpackAttached_Parms), &Z_Construct_UFunction_ABP_Jetpack_GetJetpackAttached_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ABP_Jetpack_GetJetpackAttached_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABP_Jetpack_GetJetpackAttached_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABP_Jetpack_GetJetpackAttached_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "BP_Jetpack.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ABP_Jetpack_GetJetpackAttached_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABP_Jetpack, nullptr, "GetJetpackAttached", nullptr, nullptr, sizeof(Z_Construct_UFunction_ABP_Jetpack_GetJetpackAttached_Statics::BP_Jetpack_eventGetJetpackAttached_Parms), Z_Construct_UFunction_ABP_Jetpack_GetJetpackAttached_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ABP_Jetpack_GetJetpackAttached_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ABP_Jetpack_GetJetpackAttached_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ABP_Jetpack_GetJetpackAttached_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ABP_Jetpack_GetJetpackAttached()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ABP_Jetpack_GetJetpackAttached_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ABP_Jetpack_OnOverlapBegin_Statics
	{
		struct BP_Jetpack_eventOnOverlapBegin_Parms
		{
			UPrimitiveComponent* OverlappedComp;
			AActor* OtherActor;
			UPrimitiveComponent* OtherComp;
			int32 OtherBodyIndex;
			bool bFromSweep;
			FHitResult SweepResult;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OverlappedComp_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OverlappedComp;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherActor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OtherComp_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherComp;
		static const UECodeGen_Private::FIntPropertyParams NewProp_OtherBodyIndex;
		static void NewProp_bFromSweep_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bFromSweep;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SweepResult_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SweepResult;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABP_Jetpack_OnOverlapBegin_Statics::NewProp_OverlappedComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ABP_Jetpack_OnOverlapBegin_Statics::NewProp_OverlappedComp = { "OverlappedComp", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BP_Jetpack_eventOnOverlapBegin_Parms, OverlappedComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ABP_Jetpack_OnOverlapBegin_Statics::NewProp_OverlappedComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ABP_Jetpack_OnOverlapBegin_Statics::NewProp_OverlappedComp_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ABP_Jetpack_OnOverlapBegin_Statics::NewProp_OtherActor = { "OtherActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BP_Jetpack_eventOnOverlapBegin_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABP_Jetpack_OnOverlapBegin_Statics::NewProp_OtherComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ABP_Jetpack_OnOverlapBegin_Statics::NewProp_OtherComp = { "OtherComp", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BP_Jetpack_eventOnOverlapBegin_Parms, OtherComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ABP_Jetpack_OnOverlapBegin_Statics::NewProp_OtherComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ABP_Jetpack_OnOverlapBegin_Statics::NewProp_OtherComp_MetaData)) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ABP_Jetpack_OnOverlapBegin_Statics::NewProp_OtherBodyIndex = { "OtherBodyIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BP_Jetpack_eventOnOverlapBegin_Parms, OtherBodyIndex), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_ABP_Jetpack_OnOverlapBegin_Statics::NewProp_bFromSweep_SetBit(void* Obj)
	{
		((BP_Jetpack_eventOnOverlapBegin_Parms*)Obj)->bFromSweep = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ABP_Jetpack_OnOverlapBegin_Statics::NewProp_bFromSweep = { "bFromSweep", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(BP_Jetpack_eventOnOverlapBegin_Parms), &Z_Construct_UFunction_ABP_Jetpack_OnOverlapBegin_Statics::NewProp_bFromSweep_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABP_Jetpack_OnOverlapBegin_Statics::NewProp_SweepResult_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ABP_Jetpack_OnOverlapBegin_Statics::NewProp_SweepResult = { "SweepResult", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BP_Jetpack_eventOnOverlapBegin_Parms, SweepResult), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(Z_Construct_UFunction_ABP_Jetpack_OnOverlapBegin_Statics::NewProp_SweepResult_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ABP_Jetpack_OnOverlapBegin_Statics::NewProp_SweepResult_MetaData)) }; // 1416937132
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ABP_Jetpack_OnOverlapBegin_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABP_Jetpack_OnOverlapBegin_Statics::NewProp_OverlappedComp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABP_Jetpack_OnOverlapBegin_Statics::NewProp_OtherActor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABP_Jetpack_OnOverlapBegin_Statics::NewProp_OtherComp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABP_Jetpack_OnOverlapBegin_Statics::NewProp_OtherBodyIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABP_Jetpack_OnOverlapBegin_Statics::NewProp_bFromSweep,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABP_Jetpack_OnOverlapBegin_Statics::NewProp_SweepResult,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABP_Jetpack_OnOverlapBegin_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "BP_Jetpack.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ABP_Jetpack_OnOverlapBegin_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABP_Jetpack, nullptr, "OnOverlapBegin", nullptr, nullptr, sizeof(Z_Construct_UFunction_ABP_Jetpack_OnOverlapBegin_Statics::BP_Jetpack_eventOnOverlapBegin_Parms), Z_Construct_UFunction_ABP_Jetpack_OnOverlapBegin_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ABP_Jetpack_OnOverlapBegin_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ABP_Jetpack_OnOverlapBegin_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ABP_Jetpack_OnOverlapBegin_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ABP_Jetpack_OnOverlapBegin()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ABP_Jetpack_OnOverlapBegin_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ABP_Jetpack_ToggleJetpack_Statics
	{
		struct BP_Jetpack_eventToggleJetpack_Parms
		{
			bool active;
		};
		static void NewProp_active_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_active;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_ABP_Jetpack_ToggleJetpack_Statics::NewProp_active_SetBit(void* Obj)
	{
		((BP_Jetpack_eventToggleJetpack_Parms*)Obj)->active = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ABP_Jetpack_ToggleJetpack_Statics::NewProp_active = { "active", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(BP_Jetpack_eventToggleJetpack_Parms), &Z_Construct_UFunction_ABP_Jetpack_ToggleJetpack_Statics::NewProp_active_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ABP_Jetpack_ToggleJetpack_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABP_Jetpack_ToggleJetpack_Statics::NewProp_active,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABP_Jetpack_ToggleJetpack_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "BP_Jetpack.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ABP_Jetpack_ToggleJetpack_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABP_Jetpack, nullptr, "ToggleJetpack", nullptr, nullptr, sizeof(Z_Construct_UFunction_ABP_Jetpack_ToggleJetpack_Statics::BP_Jetpack_eventToggleJetpack_Parms), Z_Construct_UFunction_ABP_Jetpack_ToggleJetpack_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ABP_Jetpack_ToggleJetpack_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ABP_Jetpack_ToggleJetpack_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ABP_Jetpack_ToggleJetpack_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ABP_Jetpack_ToggleJetpack()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ABP_Jetpack_ToggleJetpack_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ABP_Jetpack);
	UClass* Z_Construct_UClass_ABP_Jetpack_NoRegister()
	{
		return ABP_Jetpack::StaticClass();
	}
	struct Z_Construct_UClass_ABP_Jetpack_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_JetpackMesh_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_JetpackMesh;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SphereCollider_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_SphereCollider;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_JetpackAttached_MetaData[];
#endif
		static void NewProp_JetpackAttached_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_JetpackAttached;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_usingJetpack_MetaData[];
#endif
		static void NewProp_usingJetpack_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_usingJetpack;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_JetpackSpeed_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_JetpackSpeed;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MyCharacterMovement_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_MyCharacterMovement;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ABP_Jetpack_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_LiquidX_Test,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ABP_Jetpack_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ABP_Jetpack_ActivateJetpack, "ActivateJetpack" }, // 1260657945
		{ &Z_Construct_UFunction_ABP_Jetpack_GetJetpackAttached, "GetJetpackAttached" }, // 943415563
		{ &Z_Construct_UFunction_ABP_Jetpack_OnOverlapBegin, "OnOverlapBegin" }, // 2738243523
		{ &Z_Construct_UFunction_ABP_Jetpack_ToggleJetpack, "ToggleJetpack" }, // 3095272474
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABP_Jetpack_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "BP_Jetpack.h" },
		{ "ModuleRelativePath", "BP_Jetpack.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABP_Jetpack_Statics::NewProp_JetpackMesh_MetaData[] = {
		{ "Category", "BP_Jetpack" },
		{ "Comment", "// Mesh\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "BP_Jetpack.h" },
		{ "ToolTip", "Mesh" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABP_Jetpack_Statics::NewProp_JetpackMesh = { "JetpackMesh", nullptr, (EPropertyFlags)0x0020080000080009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABP_Jetpack, JetpackMesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ABP_Jetpack_Statics::NewProp_JetpackMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABP_Jetpack_Statics::NewProp_JetpackMesh_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABP_Jetpack_Statics::NewProp_SphereCollider_MetaData[] = {
		{ "Category", "Interactable" },
		{ "Comment", "// Sphere Collider\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "BP_Jetpack.h" },
		{ "ToolTip", "Sphere Collider" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABP_Jetpack_Statics::NewProp_SphereCollider = { "SphereCollider", nullptr, (EPropertyFlags)0x00200800000a000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABP_Jetpack, SphereCollider), Z_Construct_UClass_USphereComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ABP_Jetpack_Statics::NewProp_SphereCollider_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABP_Jetpack_Statics::NewProp_SphereCollider_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABP_Jetpack_Statics::NewProp_JetpackAttached_MetaData[] = {
		{ "Category", "Jump Settings" },
		{ "Comment", "// Jetpack Settings\n" },
		{ "ModuleRelativePath", "BP_Jetpack.h" },
		{ "ToolTip", "Jetpack Settings" },
	};
#endif
	void Z_Construct_UClass_ABP_Jetpack_Statics::NewProp_JetpackAttached_SetBit(void* Obj)
	{
		((ABP_Jetpack*)Obj)->JetpackAttached = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ABP_Jetpack_Statics::NewProp_JetpackAttached = { "JetpackAttached", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ABP_Jetpack), &Z_Construct_UClass_ABP_Jetpack_Statics::NewProp_JetpackAttached_SetBit, METADATA_PARAMS(Z_Construct_UClass_ABP_Jetpack_Statics::NewProp_JetpackAttached_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABP_Jetpack_Statics::NewProp_JetpackAttached_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABP_Jetpack_Statics::NewProp_usingJetpack_MetaData[] = {
		{ "Category", "Jump Settings" },
		{ "ModuleRelativePath", "BP_Jetpack.h" },
	};
#endif
	void Z_Construct_UClass_ABP_Jetpack_Statics::NewProp_usingJetpack_SetBit(void* Obj)
	{
		((ABP_Jetpack*)Obj)->usingJetpack = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ABP_Jetpack_Statics::NewProp_usingJetpack = { "usingJetpack", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ABP_Jetpack), &Z_Construct_UClass_ABP_Jetpack_Statics::NewProp_usingJetpack_SetBit, METADATA_PARAMS(Z_Construct_UClass_ABP_Jetpack_Statics::NewProp_usingJetpack_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABP_Jetpack_Statics::NewProp_usingJetpack_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABP_Jetpack_Statics::NewProp_JetpackSpeed_MetaData[] = {
		{ "Category", "Jump Settings" },
		{ "ModuleRelativePath", "BP_Jetpack.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ABP_Jetpack_Statics::NewProp_JetpackSpeed = { "JetpackSpeed", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABP_Jetpack, JetpackSpeed), METADATA_PARAMS(Z_Construct_UClass_ABP_Jetpack_Statics::NewProp_JetpackSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABP_Jetpack_Statics::NewProp_JetpackSpeed_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABP_Jetpack_Statics::NewProp_MyCharacterMovement_MetaData[] = {
		{ "Category", "Jump Settings" },
		{ "Comment", "// Character Movement Reference\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "BP_Jetpack.h" },
		{ "ToolTip", "Character Movement Reference" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABP_Jetpack_Statics::NewProp_MyCharacterMovement = { "MyCharacterMovement", nullptr, (EPropertyFlags)0x0010000000080009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABP_Jetpack, MyCharacterMovement), Z_Construct_UClass_UCharacterMovementComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ABP_Jetpack_Statics::NewProp_MyCharacterMovement_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABP_Jetpack_Statics::NewProp_MyCharacterMovement_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ABP_Jetpack_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABP_Jetpack_Statics::NewProp_JetpackMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABP_Jetpack_Statics::NewProp_SphereCollider,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABP_Jetpack_Statics::NewProp_JetpackAttached,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABP_Jetpack_Statics::NewProp_usingJetpack,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABP_Jetpack_Statics::NewProp_JetpackSpeed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABP_Jetpack_Statics::NewProp_MyCharacterMovement,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ABP_Jetpack_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABP_Jetpack>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ABP_Jetpack_Statics::ClassParams = {
		&ABP_Jetpack::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ABP_Jetpack_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ABP_Jetpack_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ABP_Jetpack_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ABP_Jetpack_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ABP_Jetpack()
	{
		if (!Z_Registration_Info_UClass_ABP_Jetpack.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ABP_Jetpack.OuterSingleton, Z_Construct_UClass_ABP_Jetpack_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ABP_Jetpack.OuterSingleton;
	}
	template<> LIQUIDX_TEST_API UClass* StaticClass<ABP_Jetpack>()
	{
		return ABP_Jetpack::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ABP_Jetpack);
	struct Z_CompiledInDeferFile_FID_LiquidX_Test_Source_LiquidX_Test_BP_Jetpack_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_LiquidX_Test_Source_LiquidX_Test_BP_Jetpack_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ABP_Jetpack, ABP_Jetpack::StaticClass, TEXT("ABP_Jetpack"), &Z_Registration_Info_UClass_ABP_Jetpack, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ABP_Jetpack), 891291982U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_LiquidX_Test_Source_LiquidX_Test_BP_Jetpack_h_2814179432(TEXT("/Script/LiquidX_Test"),
		Z_CompiledInDeferFile_FID_LiquidX_Test_Source_LiquidX_Test_BP_Jetpack_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_LiquidX_Test_Source_LiquidX_Test_BP_Jetpack_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
