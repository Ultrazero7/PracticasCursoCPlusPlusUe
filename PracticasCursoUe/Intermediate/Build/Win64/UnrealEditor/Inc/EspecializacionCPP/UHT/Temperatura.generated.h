// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Temperatura.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ESPECIALIZACIONCPP_Temperatura_generated_h
#error "Temperatura.generated.h already included, missing '#pragma once' in Temperatura.h"
#endif
#define ESPECIALIZACIONCPP_Temperatura_generated_h

#define FID_Users_Marco_Documents_Unreal_Projects_EspecializacionCPP_Source_EspecializacionCPP_Temperatura_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execDiferenciaEntreTemperaturas); \
	DECLARE_FUNCTION(execConvertKelvinToCelcius); \
	DECLARE_FUNCTION(execGetAverageTemperature); \
	DECLARE_FUNCTION(execGetTemperatureFahrenheit);


#define FID_Users_Marco_Documents_Unreal_Projects_EspecializacionCPP_Source_EspecializacionCPP_Temperatura_h_12_CALLBACK_WRAPPERS
#define FID_Users_Marco_Documents_Unreal_Projects_EspecializacionCPP_Source_EspecializacionCPP_Temperatura_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesATemperatura(); \
	friend struct Z_Construct_UClass_ATemperatura_Statics; \
public: \
	DECLARE_CLASS(ATemperatura, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/EspecializacionCPP"), NO_API) \
	DECLARE_SERIALIZER(ATemperatura)


#define FID_Users_Marco_Documents_Unreal_Projects_EspecializacionCPP_Source_EspecializacionCPP_Temperatura_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ATemperatura(ATemperatura&&); \
	ATemperatura(const ATemperatura&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ATemperatura); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ATemperatura); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ATemperatura) \
	NO_API virtual ~ATemperatura();


#define FID_Users_Marco_Documents_Unreal_Projects_EspecializacionCPP_Source_EspecializacionCPP_Temperatura_h_9_PROLOG
#define FID_Users_Marco_Documents_Unreal_Projects_EspecializacionCPP_Source_EspecializacionCPP_Temperatura_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_Marco_Documents_Unreal_Projects_EspecializacionCPP_Source_EspecializacionCPP_Temperatura_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_Marco_Documents_Unreal_Projects_EspecializacionCPP_Source_EspecializacionCPP_Temperatura_h_12_CALLBACK_WRAPPERS \
	FID_Users_Marco_Documents_Unreal_Projects_EspecializacionCPP_Source_EspecializacionCPP_Temperatura_h_12_INCLASS_NO_PURE_DECLS \
	FID_Users_Marco_Documents_Unreal_Projects_EspecializacionCPP_Source_EspecializacionCPP_Temperatura_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ESPECIALIZACIONCPP_API UClass* StaticClass<class ATemperatura>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_Marco_Documents_Unreal_Projects_EspecializacionCPP_Source_EspecializacionCPP_Temperatura_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
