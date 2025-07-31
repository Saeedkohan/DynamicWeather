// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "DynamicWeatherGameMode.h"

#ifdef DYNAMICWEATHER_DynamicWeatherGameMode_generated_h
#error "DynamicWeatherGameMode.generated.h already included, missing '#pragma once' in DynamicWeatherGameMode.h"
#endif
#define DYNAMICWEATHER_DynamicWeatherGameMode_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class ADynamicWeatherGameMode **************************************************
DYNAMICWEATHER_API UClass* Z_Construct_UClass_ADynamicWeatherGameMode_NoRegister();

#define FID_DynamicWeather_Source_DynamicWeather_DynamicWeatherGameMode_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesADynamicWeatherGameMode(); \
	friend struct Z_Construct_UClass_ADynamicWeatherGameMode_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend DYNAMICWEATHER_API UClass* Z_Construct_UClass_ADynamicWeatherGameMode_NoRegister(); \
public: \
	DECLARE_CLASS2(ADynamicWeatherGameMode, AGameModeBase, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/DynamicWeather"), Z_Construct_UClass_ADynamicWeatherGameMode_NoRegister) \
	DECLARE_SERIALIZER(ADynamicWeatherGameMode)


#define FID_DynamicWeather_Source_DynamicWeather_DynamicWeatherGameMode_h_15_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	ADynamicWeatherGameMode(ADynamicWeatherGameMode&&) = delete; \
	ADynamicWeatherGameMode(const ADynamicWeatherGameMode&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ADynamicWeatherGameMode); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ADynamicWeatherGameMode); \
	DEFINE_ABSTRACT_DEFAULT_CONSTRUCTOR_CALL(ADynamicWeatherGameMode) \
	NO_API virtual ~ADynamicWeatherGameMode();


#define FID_DynamicWeather_Source_DynamicWeather_DynamicWeatherGameMode_h_12_PROLOG
#define FID_DynamicWeather_Source_DynamicWeather_DynamicWeatherGameMode_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_DynamicWeather_Source_DynamicWeather_DynamicWeatherGameMode_h_15_INCLASS_NO_PURE_DECLS \
	FID_DynamicWeather_Source_DynamicWeather_DynamicWeatherGameMode_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class ADynamicWeatherGameMode;

// ********** End Class ADynamicWeatherGameMode ****************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_DynamicWeather_Source_DynamicWeather_DynamicWeatherGameMode_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
