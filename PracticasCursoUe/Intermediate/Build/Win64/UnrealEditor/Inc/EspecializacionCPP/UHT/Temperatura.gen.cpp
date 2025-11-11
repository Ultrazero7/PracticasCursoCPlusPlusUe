// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "EspecializacionCPP/Temperatura.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTemperatura() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AActor();
ESPECIALIZACIONCPP_API UClass* Z_Construct_UClass_ATemperatura();
ESPECIALIZACIONCPP_API UClass* Z_Construct_UClass_ATemperatura_NoRegister();
UPackage* Z_Construct_UPackage__Script_EspecializacionCPP();
// End Cross Module References

// Begin Class ATemperatura Function ConvertKelvinToCelcius
struct Z_Construct_UFunction_ATemperatura_ConvertKelvinToCelcius_Statics
{
	struct Temperatura_eventConvertKelvinToCelcius_Parms
	{
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Temperature" },
		{ "ModuleRelativePath", "Temperatura.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ATemperatura_ConvertKelvinToCelcius_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Temperatura_eventConvertKelvinToCelcius_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ATemperatura_ConvertKelvinToCelcius_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATemperatura_ConvertKelvinToCelcius_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ATemperatura_ConvertKelvinToCelcius_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ATemperatura_ConvertKelvinToCelcius_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATemperatura, nullptr, "ConvertKelvinToCelcius", nullptr, nullptr, Z_Construct_UFunction_ATemperatura_ConvertKelvinToCelcius_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ATemperatura_ConvertKelvinToCelcius_Statics::PropPointers), sizeof(Z_Construct_UFunction_ATemperatura_ConvertKelvinToCelcius_Statics::Temperatura_eventConvertKelvinToCelcius_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ATemperatura_ConvertKelvinToCelcius_Statics::Function_MetaDataParams), Z_Construct_UFunction_ATemperatura_ConvertKelvinToCelcius_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ATemperatura_ConvertKelvinToCelcius_Statics::Temperatura_eventConvertKelvinToCelcius_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ATemperatura_ConvertKelvinToCelcius()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ATemperatura_ConvertKelvinToCelcius_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ATemperatura::execConvertKelvinToCelcius)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->ConvertKelvinToCelcius();
	P_NATIVE_END;
}
// End Class ATemperatura Function ConvertKelvinToCelcius

// Begin Class ATemperatura Function DiferenciaEntreTemperaturas
struct Z_Construct_UFunction_ATemperatura_DiferenciaEntreTemperaturas_Statics
{
	struct Temperatura_eventDiferenciaEntreTemperaturas_Parms
	{
		float Temp1;
		float Temp2;
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Temperature" },
		{ "ModuleRelativePath", "Temperatura.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Temp1;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Temp2;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ATemperatura_DiferenciaEntreTemperaturas_Statics::NewProp_Temp1 = { "Temp1", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Temperatura_eventDiferenciaEntreTemperaturas_Parms, Temp1), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ATemperatura_DiferenciaEntreTemperaturas_Statics::NewProp_Temp2 = { "Temp2", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Temperatura_eventDiferenciaEntreTemperaturas_Parms, Temp2), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ATemperatura_DiferenciaEntreTemperaturas_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Temperatura_eventDiferenciaEntreTemperaturas_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ATemperatura_DiferenciaEntreTemperaturas_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATemperatura_DiferenciaEntreTemperaturas_Statics::NewProp_Temp1,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATemperatura_DiferenciaEntreTemperaturas_Statics::NewProp_Temp2,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATemperatura_DiferenciaEntreTemperaturas_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ATemperatura_DiferenciaEntreTemperaturas_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ATemperatura_DiferenciaEntreTemperaturas_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATemperatura, nullptr, "DiferenciaEntreTemperaturas", nullptr, nullptr, Z_Construct_UFunction_ATemperatura_DiferenciaEntreTemperaturas_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ATemperatura_DiferenciaEntreTemperaturas_Statics::PropPointers), sizeof(Z_Construct_UFunction_ATemperatura_DiferenciaEntreTemperaturas_Statics::Temperatura_eventDiferenciaEntreTemperaturas_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ATemperatura_DiferenciaEntreTemperaturas_Statics::Function_MetaDataParams), Z_Construct_UFunction_ATemperatura_DiferenciaEntreTemperaturas_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ATemperatura_DiferenciaEntreTemperaturas_Statics::Temperatura_eventDiferenciaEntreTemperaturas_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ATemperatura_DiferenciaEntreTemperaturas()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ATemperatura_DiferenciaEntreTemperaturas_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ATemperatura::execDiferenciaEntreTemperaturas)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_Temp1);
	P_GET_PROPERTY(FFloatProperty,Z_Param_Temp2);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->DiferenciaEntreTemperaturas(Z_Param_Temp1,Z_Param_Temp2);
	P_NATIVE_END;
}
// End Class ATemperatura Function DiferenciaEntreTemperaturas

// Begin Class ATemperatura Function GetAverageTemperature
struct Z_Construct_UFunction_ATemperatura_GetAverageTemperature_Statics
{
	struct Temperatura_eventGetAverageTemperature_Parms
	{
		float Temp1;
		float Temp2;
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Temperature" },
		{ "ModuleRelativePath", "Temperatura.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Temp1;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Temp2;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ATemperatura_GetAverageTemperature_Statics::NewProp_Temp1 = { "Temp1", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Temperatura_eventGetAverageTemperature_Parms, Temp1), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ATemperatura_GetAverageTemperature_Statics::NewProp_Temp2 = { "Temp2", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Temperatura_eventGetAverageTemperature_Parms, Temp2), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ATemperatura_GetAverageTemperature_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Temperatura_eventGetAverageTemperature_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ATemperatura_GetAverageTemperature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATemperatura_GetAverageTemperature_Statics::NewProp_Temp1,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATemperatura_GetAverageTemperature_Statics::NewProp_Temp2,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATemperatura_GetAverageTemperature_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ATemperatura_GetAverageTemperature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ATemperatura_GetAverageTemperature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATemperatura, nullptr, "GetAverageTemperature", nullptr, nullptr, Z_Construct_UFunction_ATemperatura_GetAverageTemperature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ATemperatura_GetAverageTemperature_Statics::PropPointers), sizeof(Z_Construct_UFunction_ATemperatura_GetAverageTemperature_Statics::Temperatura_eventGetAverageTemperature_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14082401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ATemperatura_GetAverageTemperature_Statics::Function_MetaDataParams), Z_Construct_UFunction_ATemperatura_GetAverageTemperature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ATemperatura_GetAverageTemperature_Statics::Temperatura_eventGetAverageTemperature_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ATemperatura_GetAverageTemperature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ATemperatura_GetAverageTemperature_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ATemperatura::execGetAverageTemperature)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_Temp1);
	P_GET_PROPERTY(FFloatProperty,Z_Param_Temp2);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=ATemperatura::GetAverageTemperature(Z_Param_Temp1,Z_Param_Temp2);
	P_NATIVE_END;
}
// End Class ATemperatura Function GetAverageTemperature

// Begin Class ATemperatura Function GetTemperatureFahrenheit
struct Z_Construct_UFunction_ATemperatura_GetTemperatureFahrenheit_Statics
{
	struct Temperatura_eventGetTemperatureFahrenheit_Parms
	{
		float TemperatureCelcius;
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Temperature" },
		{ "ModuleRelativePath", "Temperatura.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_TemperatureCelcius;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ATemperatura_GetTemperatureFahrenheit_Statics::NewProp_TemperatureCelcius = { "TemperatureCelcius", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Temperatura_eventGetTemperatureFahrenheit_Parms, TemperatureCelcius), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ATemperatura_GetTemperatureFahrenheit_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Temperatura_eventGetTemperatureFahrenheit_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ATemperatura_GetTemperatureFahrenheit_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATemperatura_GetTemperatureFahrenheit_Statics::NewProp_TemperatureCelcius,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATemperatura_GetTemperatureFahrenheit_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ATemperatura_GetTemperatureFahrenheit_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ATemperatura_GetTemperatureFahrenheit_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATemperatura, nullptr, "GetTemperatureFahrenheit", nullptr, nullptr, Z_Construct_UFunction_ATemperatura_GetTemperatureFahrenheit_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ATemperatura_GetTemperatureFahrenheit_Statics::PropPointers), sizeof(Z_Construct_UFunction_ATemperatura_GetTemperatureFahrenheit_Statics::Temperatura_eventGetTemperatureFahrenheit_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14082401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ATemperatura_GetTemperatureFahrenheit_Statics::Function_MetaDataParams), Z_Construct_UFunction_ATemperatura_GetTemperatureFahrenheit_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ATemperatura_GetTemperatureFahrenheit_Statics::Temperatura_eventGetTemperatureFahrenheit_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ATemperatura_GetTemperatureFahrenheit()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ATemperatura_GetTemperatureFahrenheit_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ATemperatura::execGetTemperatureFahrenheit)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_TemperatureCelcius);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=ATemperatura::GetTemperatureFahrenheit(Z_Param_TemperatureCelcius);
	P_NATIVE_END;
}
// End Class ATemperatura Function GetTemperatureFahrenheit

// Begin Class ATemperatura Function OnCheckTemperature
struct Temperatura_eventOnCheckTemperature_Parms
{
	float CurrentTemperature;
};
static const FName NAME_ATemperatura_OnCheckTemperature = FName(TEXT("OnCheckTemperature"));
void ATemperatura::OnCheckTemperature(float CurrentTemperature)
{
	Temperatura_eventOnCheckTemperature_Parms Parms;
	Parms.CurrentTemperature=CurrentTemperature;
	UFunction* Func = FindFunctionChecked(NAME_ATemperatura_OnCheckTemperature);
	ProcessEvent(Func,&Parms);
}
struct Z_Construct_UFunction_ATemperatura_OnCheckTemperature_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Temperature" },
		{ "ModuleRelativePath", "Temperatura.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_CurrentTemperature;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ATemperatura_OnCheckTemperature_Statics::NewProp_CurrentTemperature = { "CurrentTemperature", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Temperatura_eventOnCheckTemperature_Parms, CurrentTemperature), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ATemperatura_OnCheckTemperature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATemperatura_OnCheckTemperature_Statics::NewProp_CurrentTemperature,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ATemperatura_OnCheckTemperature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ATemperatura_OnCheckTemperature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATemperatura, nullptr, "OnCheckTemperature", nullptr, nullptr, Z_Construct_UFunction_ATemperatura_OnCheckTemperature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ATemperatura_OnCheckTemperature_Statics::PropPointers), sizeof(Temperatura_eventOnCheckTemperature_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ATemperatura_OnCheckTemperature_Statics::Function_MetaDataParams), Z_Construct_UFunction_ATemperatura_OnCheckTemperature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Temperatura_eventOnCheckTemperature_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ATemperatura_OnCheckTemperature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ATemperatura_OnCheckTemperature_Statics::FuncParams);
	}
	return ReturnFunction;
}
// End Class ATemperatura Function OnCheckTemperature

// Begin Class ATemperatura
void ATemperatura::StaticRegisterNativesATemperatura()
{
	UClass* Class = ATemperatura::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "ConvertKelvinToCelcius", &ATemperatura::execConvertKelvinToCelcius },
		{ "DiferenciaEntreTemperaturas", &ATemperatura::execDiferenciaEntreTemperaturas },
		{ "GetAverageTemperature", &ATemperatura::execGetAverageTemperature },
		{ "GetTemperatureFahrenheit", &ATemperatura::execGetTemperatureFahrenheit },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ATemperatura);
UClass* Z_Construct_UClass_ATemperatura_NoRegister()
{
	return ATemperatura::StaticClass();
}
struct Z_Construct_UClass_ATemperatura_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Temperatura.h" },
		{ "ModuleRelativePath", "Temperatura.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TemperatureCelcius_MetaData[] = {
		{ "Category", "Temperature" },
		{ "ModuleRelativePath", "Temperatura.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_temp1_MetaData[] = {
		{ "Category", "Temperature" },
		{ "ModuleRelativePath", "Temperatura.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_temp2_MetaData[] = {
		{ "Category", "Temperature" },
		{ "ModuleRelativePath", "Temperatura.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Kelvin_MetaData[] = {
		{ "Category", "Temperature" },
		{ "ModuleRelativePath", "Temperatura.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_TemperatureCelcius;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_temp1;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_temp2;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Kelvin;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_ATemperatura_ConvertKelvinToCelcius, "ConvertKelvinToCelcius" }, // 501049403
		{ &Z_Construct_UFunction_ATemperatura_DiferenciaEntreTemperaturas, "DiferenciaEntreTemperaturas" }, // 2202274106
		{ &Z_Construct_UFunction_ATemperatura_GetAverageTemperature, "GetAverageTemperature" }, // 3049765628
		{ &Z_Construct_UFunction_ATemperatura_GetTemperatureFahrenheit, "GetTemperatureFahrenheit" }, // 3754419154
		{ &Z_Construct_UFunction_ATemperatura_OnCheckTemperature, "OnCheckTemperature" }, // 739171828
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ATemperatura>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ATemperatura_Statics::NewProp_TemperatureCelcius = { "TemperatureCelcius", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATemperatura, TemperatureCelcius), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TemperatureCelcius_MetaData), NewProp_TemperatureCelcius_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ATemperatura_Statics::NewProp_temp1 = { "temp1", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATemperatura, temp1), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_temp1_MetaData), NewProp_temp1_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ATemperatura_Statics::NewProp_temp2 = { "temp2", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATemperatura, temp2), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_temp2_MetaData), NewProp_temp2_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ATemperatura_Statics::NewProp_Kelvin = { "Kelvin", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATemperatura, Kelvin), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Kelvin_MetaData), NewProp_Kelvin_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ATemperatura_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATemperatura_Statics::NewProp_TemperatureCelcius,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATemperatura_Statics::NewProp_temp1,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATemperatura_Statics::NewProp_temp2,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATemperatura_Statics::NewProp_Kelvin,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ATemperatura_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ATemperatura_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_EspecializacionCPP,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ATemperatura_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ATemperatura_Statics::ClassParams = {
	&ATemperatura::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_ATemperatura_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_ATemperatura_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ATemperatura_Statics::Class_MetaDataParams), Z_Construct_UClass_ATemperatura_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ATemperatura()
{
	if (!Z_Registration_Info_UClass_ATemperatura.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ATemperatura.OuterSingleton, Z_Construct_UClass_ATemperatura_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ATemperatura.OuterSingleton;
}
template<> ESPECIALIZACIONCPP_API UClass* StaticClass<ATemperatura>()
{
	return ATemperatura::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ATemperatura);
ATemperatura::~ATemperatura() {}
// End Class ATemperatura

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_Marco_Documents_Unreal_Projects_EspecializacionCPP_Source_EspecializacionCPP_Temperatura_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ATemperatura, ATemperatura::StaticClass, TEXT("ATemperatura"), &Z_Registration_Info_UClass_ATemperatura, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ATemperatura), 1581113377U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Marco_Documents_Unreal_Projects_EspecializacionCPP_Source_EspecializacionCPP_Temperatura_h_2400376961(TEXT("/Script/EspecializacionCPP"),
	Z_CompiledInDeferFile_FID_Users_Marco_Documents_Unreal_Projects_EspecializacionCPP_Source_EspecializacionCPP_Temperatura_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Marco_Documents_Unreal_Projects_EspecializacionCPP_Source_EspecializacionCPP_Temperatura_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
