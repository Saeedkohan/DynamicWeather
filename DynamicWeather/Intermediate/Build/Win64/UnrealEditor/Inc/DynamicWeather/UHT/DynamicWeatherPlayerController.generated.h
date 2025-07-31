// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "DynamicWeatherPlayerController.h"

#ifdef DYNAMICWEATHER_DynamicWeatherPlayerController_generated_h
#error "DynamicWeatherPlayerController.generated.h already included, missing '#pragma once' in DynamicWeatherPlayerController.h"
#endif
#define DYNAMICWEATHER_DynamicWeatherPlayerController_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class ADynamicWeatherPlayerController ******************************************
DYNAMICWEATHER_API UClass* Z_Construct_UClass_ADynamicWeatherPlayerController_NoRegister();

#define FID_DynamicWeather_Source_DynamicWeather_DynamicWeatherPlayerController_h_18_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesADynamicWeatherPlayerController(); \
	friend struct Z_Construct_UClass_ADynamicWeatherPlayerController_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend DYNAMICWEATHER_API UClass* Z_Construct_UClass_ADynamicWeatherPlayerController_NoRegister(); \
public: \
	DECLARE_CLASS2(ADynamicWeatherPlayerController, APlayerController, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Config), CASTCLASS_None, TEXT("/Script/DynamicWeather"), Z_Construct_UClass_ADynamicWeatherPlayerController_NoRegister) \
	DECLARE_SERIALIZER(ADynamicWeatherPlayerController)


#define FID_DynamicWeather_Source_DynamicWeather_DynamicWeatherPlayerController_h_18_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ADynamicWeatherPlayerController(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	ADynamicWeatherPlayerController(ADynamicWeatherPlayerController&&) = delete; \
	ADynamicWeatherPlayerController(const ADynamicWeatherPlayerController&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ADynamicWeatherPlayerController); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ADynamicWeatherPlayerController); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ADynamicWeatherPlayerController) \
	NO_API virtual ~ADynamicWeatherPlayerController();


#define FID_DynamicWeather_Source_DynamicWeather_DynamicWeatherPlayerController_h_15_PROLOG
#define FID_DynamicWeather_Source_DynamicWeather_DynamicWeatherPlayerController_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_DynamicWeather_Source_DynamicWeather_DynamicWeatherPlayerController_h_18_INCLASS_NO_PURE_DECLS \
	FID_DynamicWeather_Source_DynamicWeather_DynamicWeatherPlayerController_h_18_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class ADynamicWeatherPlayerController;

// ********** End Class ADynamicWeatherPlayerController ********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_DynamicWeather_Source_DynamicWeather_DynamicWeatherPlayerController_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
