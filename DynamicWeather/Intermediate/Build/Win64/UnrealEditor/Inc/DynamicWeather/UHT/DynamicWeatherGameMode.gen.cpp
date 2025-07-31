// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DynamicWeather/DynamicWeatherGameMode.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeDynamicWeatherGameMode() {}

// ********** Begin Cross Module References ********************************************************
DYNAMICWEATHER_API UClass* Z_Construct_UClass_ADynamicWeatherGameMode();
DYNAMICWEATHER_API UClass* Z_Construct_UClass_ADynamicWeatherGameMode_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
UPackage* Z_Construct_UPackage__Script_DynamicWeather();
// ********** End Cross Module References **********************************************************

// ********** Begin Class ADynamicWeatherGameMode **************************************************
void ADynamicWeatherGameMode::StaticRegisterNativesADynamicWeatherGameMode()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_ADynamicWeatherGameMode;
UClass* ADynamicWeatherGameMode::GetPrivateStaticClass()
{
	using TClass = ADynamicWeatherGameMode;
	if (!Z_Registration_Info_UClass_ADynamicWeatherGameMode.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("DynamicWeatherGameMode"),
			Z_Registration_Info_UClass_ADynamicWeatherGameMode.InnerSingleton,
			StaticRegisterNativesADynamicWeatherGameMode,
			sizeof(TClass),
			alignof(TClass),
			TClass::StaticClassFlags,
			TClass::StaticClassCastFlags(),
			TClass::StaticConfigName(),
			(UClass::ClassConstructorType)InternalConstructor<TClass>,
			(UClass::ClassVTableHelperCtorCallerType)InternalVTableHelperCtorCaller<TClass>,
			UOBJECT_CPPCLASS_STATICFUNCTIONS_FORCLASS(TClass),
			&TClass::Super::StaticClass,
			&TClass::WithinClass::StaticClass
		);
	}
	return Z_Registration_Info_UClass_ADynamicWeatherGameMode.InnerSingleton;
}
UClass* Z_Construct_UClass_ADynamicWeatherGameMode_NoRegister()
{
	return ADynamicWeatherGameMode::GetPrivateStaticClass();
}
struct Z_Construct_UClass_ADynamicWeatherGameMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n *  Simple GameMode for a third person game\n */" },
#endif
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "DynamicWeatherGameMode.h" },
		{ "ModuleRelativePath", "DynamicWeatherGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Simple GameMode for a third person game" },
#endif
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ADynamicWeatherGameMode>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_ADynamicWeatherGameMode_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AGameModeBase,
	(UObject* (*)())Z_Construct_UPackage__Script_DynamicWeather,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ADynamicWeatherGameMode_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ADynamicWeatherGameMode_Statics::ClassParams = {
	&ADynamicWeatherGameMode::StaticClass,
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
	0x008003ADu,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ADynamicWeatherGameMode_Statics::Class_MetaDataParams), Z_Construct_UClass_ADynamicWeatherGameMode_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ADynamicWeatherGameMode()
{
	if (!Z_Registration_Info_UClass_ADynamicWeatherGameMode.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ADynamicWeatherGameMode.OuterSingleton, Z_Construct_UClass_ADynamicWeatherGameMode_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ADynamicWeatherGameMode.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ADynamicWeatherGameMode);
ADynamicWeatherGameMode::~ADynamicWeatherGameMode() {}
// ********** End Class ADynamicWeatherGameMode ****************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_DynamicWeather_Source_DynamicWeather_DynamicWeatherGameMode_h__Script_DynamicWeather_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ADynamicWeatherGameMode, ADynamicWeatherGameMode::StaticClass, TEXT("ADynamicWeatherGameMode"), &Z_Registration_Info_UClass_ADynamicWeatherGameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ADynamicWeatherGameMode), 3391541776U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_DynamicWeather_Source_DynamicWeather_DynamicWeatherGameMode_h__Script_DynamicWeather_2171879143(TEXT("/Script/DynamicWeather"),
	Z_CompiledInDeferFile_FID_DynamicWeather_Source_DynamicWeather_DynamicWeatherGameMode_h__Script_DynamicWeather_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_DynamicWeather_Source_DynamicWeather_DynamicWeatherGameMode_h__Script_DynamicWeather_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
