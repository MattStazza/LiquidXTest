// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "LiquidX_Test/LiquidX_TestGameMode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLiquidX_TestGameMode() {}
// Cross Module References
	LIQUIDX_TEST_API UClass* Z_Construct_UClass_ALiquidX_TestGameMode_NoRegister();
	LIQUIDX_TEST_API UClass* Z_Construct_UClass_ALiquidX_TestGameMode();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_LiquidX_Test();
// End Cross Module References
	void ALiquidX_TestGameMode::StaticRegisterNativesALiquidX_TestGameMode()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ALiquidX_TestGameMode);
	UClass* Z_Construct_UClass_ALiquidX_TestGameMode_NoRegister()
	{
		return ALiquidX_TestGameMode::StaticClass();
	}
	struct Z_Construct_UClass_ALiquidX_TestGameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ALiquidX_TestGameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_LiquidX_Test,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALiquidX_TestGameMode_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "LiquidX_TestGameMode.h" },
		{ "ModuleRelativePath", "LiquidX_TestGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ALiquidX_TestGameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ALiquidX_TestGameMode>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ALiquidX_TestGameMode_Statics::ClassParams = {
		&ALiquidX_TestGameMode::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x008802ACu,
		METADATA_PARAMS(Z_Construct_UClass_ALiquidX_TestGameMode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ALiquidX_TestGameMode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ALiquidX_TestGameMode()
	{
		if (!Z_Registration_Info_UClass_ALiquidX_TestGameMode.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ALiquidX_TestGameMode.OuterSingleton, Z_Construct_UClass_ALiquidX_TestGameMode_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ALiquidX_TestGameMode.OuterSingleton;
	}
	template<> LIQUIDX_TEST_API UClass* StaticClass<ALiquidX_TestGameMode>()
	{
		return ALiquidX_TestGameMode::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ALiquidX_TestGameMode);
	struct Z_CompiledInDeferFile_FID_LiquidX_Test_Source_LiquidX_Test_LiquidX_TestGameMode_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_LiquidX_Test_Source_LiquidX_Test_LiquidX_TestGameMode_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ALiquidX_TestGameMode, ALiquidX_TestGameMode::StaticClass, TEXT("ALiquidX_TestGameMode"), &Z_Registration_Info_UClass_ALiquidX_TestGameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ALiquidX_TestGameMode), 2834263382U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_LiquidX_Test_Source_LiquidX_Test_LiquidX_TestGameMode_h_1875904321(TEXT("/Script/LiquidX_Test"),
		Z_CompiledInDeferFile_FID_LiquidX_Test_Source_LiquidX_Test_LiquidX_TestGameMode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_LiquidX_Test_Source_LiquidX_Test_LiquidX_TestGameMode_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
