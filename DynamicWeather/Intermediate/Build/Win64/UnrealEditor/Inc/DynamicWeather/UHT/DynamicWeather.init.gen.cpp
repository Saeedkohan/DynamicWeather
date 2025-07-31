// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDynamicWeather_init() {}
	DYNAMICWEATHER_API UFunction* Z_Construct_UDelegateFunction_DynamicWeather_OnEnemyDied__DelegateSignature();
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_DynamicWeather;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_DynamicWeather()
	{
		if (!Z_Registration_Info_UPackage__Script_DynamicWeather.OuterSingleton)
		{
			static UObject* (*const SingletonFuncArray[])() = {
				(UObject* (*)())Z_Construct_UDelegateFunction_DynamicWeather_OnEnemyDied__DelegateSignature,
			};
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/DynamicWeather",
				SingletonFuncArray,
				UE_ARRAY_COUNT(SingletonFuncArray),
				PKG_CompiledIn | 0x00000000,
				0xDFE5FB5B,
				0x88DC65E2,
				METADATA_PARAMS(0, nullptr)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_DynamicWeather.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_DynamicWeather.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_DynamicWeather(Z_Construct_UPackage__Script_DynamicWeather, TEXT("/Script/DynamicWeather"), Z_Registration_Info_UPackage__Script_DynamicWeather, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0xDFE5FB5B, 0x88DC65E2));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
