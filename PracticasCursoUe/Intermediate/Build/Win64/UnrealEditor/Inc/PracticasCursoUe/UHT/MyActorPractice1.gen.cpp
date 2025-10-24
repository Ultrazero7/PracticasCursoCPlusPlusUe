// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PracticasCursoUe/MyActorPractice1.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMyActorPractice1() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AActor();
PRACTICASCURSOUE_API UClass* Z_Construct_UClass_AMyActorPractice1();
PRACTICASCURSOUE_API UClass* Z_Construct_UClass_AMyActorPractice1_NoRegister();
UPackage* Z_Construct_UPackage__Script_PracticasCursoUe();
// End Cross Module References

// Begin Class AMyActorPractice1 Function DemostrateFundamentals
struct Z_Construct_UFunction_AMyActorPractice1_DemostrateFundamentals_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "MyActorTest" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Ejemplo de una funcion publica\n" },
#endif
		{ "ModuleRelativePath", "MyActorPractice1.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Ejemplo de una funcion publica" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMyActorPractice1_DemostrateFundamentals_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMyActorPractice1, nullptr, "DemostrateFundamentals", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMyActorPractice1_DemostrateFundamentals_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMyActorPractice1_DemostrateFundamentals_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_AMyActorPractice1_DemostrateFundamentals()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMyActorPractice1_DemostrateFundamentals_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AMyActorPractice1::execDemostrateFundamentals)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->DemostrateFundamentals();
	P_NATIVE_END;
}
// End Class AMyActorPractice1 Function DemostrateFundamentals

// Begin Class AMyActorPractice1
void AMyActorPractice1::StaticRegisterNativesAMyActorPractice1()
{
	UClass* Class = AMyActorPractice1::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "DemostrateFundamentals", &AMyActorPractice1::execDemostrateFundamentals },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AMyActorPractice1);
UClass* Z_Construct_UClass_AMyActorPractice1_NoRegister()
{
	return AMyActorPractice1::StaticClass();
}
struct Z_Construct_UClass_AMyActorPractice1_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "MyActorPractice1.h" },
		{ "ModuleRelativePath", "MyActorPractice1.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MyFloatVariable_MetaData[] = {
		{ "Category", "MyActorTest" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Ejemplo de variable de instancia publica\n" },
#endif
		{ "ModuleRelativePath", "MyActorPractice1.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Ejemplo de variable de instancia publica" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_edad_MetaData[] = {
		{ "Category", "MyActorTest" },
		{ "ModuleRelativePath", "MyActorPractice1.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_esAlumno_MetaData[] = {
		{ "Category", "MyActorTest" },
		{ "ModuleRelativePath", "MyActorPractice1.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_nombre_MetaData[] = {
		{ "Category", "MyActorTest" },
		{ "ModuleRelativePath", "MyActorPractice1.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MyFloatVariable;
	static const UECodeGen_Private::FIntPropertyParams NewProp_edad;
	static void NewProp_esAlumno_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_esAlumno;
	static const UECodeGen_Private::FStrPropertyParams NewProp_nombre;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_AMyActorPractice1_DemostrateFundamentals, "DemostrateFundamentals" }, // 3151543724
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMyActorPractice1>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMyActorPractice1_Statics::NewProp_MyFloatVariable = { "MyFloatVariable", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMyActorPractice1, MyFloatVariable), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MyFloatVariable_MetaData), NewProp_MyFloatVariable_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AMyActorPractice1_Statics::NewProp_edad = { "edad", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMyActorPractice1, edad), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_edad_MetaData), NewProp_edad_MetaData) };
void Z_Construct_UClass_AMyActorPractice1_Statics::NewProp_esAlumno_SetBit(void* Obj)
{
	((AMyActorPractice1*)Obj)->esAlumno = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AMyActorPractice1_Statics::NewProp_esAlumno = { "esAlumno", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AMyActorPractice1), &Z_Construct_UClass_AMyActorPractice1_Statics::NewProp_esAlumno_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_esAlumno_MetaData), NewProp_esAlumno_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_AMyActorPractice1_Statics::NewProp_nombre = { "nombre", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMyActorPractice1, nombre), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_nombre_MetaData), NewProp_nombre_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AMyActorPractice1_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyActorPractice1_Statics::NewProp_MyFloatVariable,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyActorPractice1_Statics::NewProp_edad,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyActorPractice1_Statics::NewProp_esAlumno,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyActorPractice1_Statics::NewProp_nombre,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMyActorPractice1_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AMyActorPractice1_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_PracticasCursoUe,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMyActorPractice1_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AMyActorPractice1_Statics::ClassParams = {
	&AMyActorPractice1::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_AMyActorPractice1_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_AMyActorPractice1_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMyActorPractice1_Statics::Class_MetaDataParams), Z_Construct_UClass_AMyActorPractice1_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AMyActorPractice1()
{
	if (!Z_Registration_Info_UClass_AMyActorPractice1.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AMyActorPractice1.OuterSingleton, Z_Construct_UClass_AMyActorPractice1_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AMyActorPractice1.OuterSingleton;
}
template<> PRACTICASCURSOUE_API UClass* StaticClass<AMyActorPractice1>()
{
	return AMyActorPractice1::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AMyActorPractice1);
AMyActorPractice1::~AMyActorPractice1() {}
// End Class AMyActorPractice1

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_Marco_Pr_cticasCursoC__Ue_PracticasCursoUe_Source_PracticasCursoUe_MyActorPractice1_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AMyActorPractice1, AMyActorPractice1::StaticClass, TEXT("AMyActorPractice1"), &Z_Registration_Info_UClass_AMyActorPractice1, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AMyActorPractice1), 1851441799U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Marco_Pr_cticasCursoC__Ue_PracticasCursoUe_Source_PracticasCursoUe_MyActorPractice1_h_4021757131(TEXT("/Script/PracticasCursoUe"),
	Z_CompiledInDeferFile_FID_Users_Marco_Pr_cticasCursoC__Ue_PracticasCursoUe_Source_PracticasCursoUe_MyActorPractice1_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Marco_Pr_cticasCursoC__Ue_PracticasCursoUe_Source_PracticasCursoUe_MyActorPractice1_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
