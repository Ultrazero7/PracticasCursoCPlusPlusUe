// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "EspecializacionCPP/Aeronaves.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAeronaves() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
ESPECIALIZACIONCPP_API UClass* Z_Construct_UClass_AAeronaves();
ESPECIALIZACIONCPP_API UClass* Z_Construct_UClass_AAeronaves_NoRegister();
ESPECIALIZACIONCPP_API UClass* Z_Construct_UClass_AVehicle();
ESPECIALIZACIONCPP_API UEnum* Z_Construct_UEnum_EspecializacionCPP_ETipoAeronave();
UPackage* Z_Construct_UPackage__Script_EspecializacionCPP();
// End Cross Module References

// Begin Enum ETipoAeronave
static FEnumRegistrationInfo Z_Registration_Info_UEnum_ETipoAeronave;
static UEnum* ETipoAeronave_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_ETipoAeronave.OuterSingleton)
	{
		Z_Registration_Info_UEnum_ETipoAeronave.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_EspecializacionCPP_ETipoAeronave, (UObject*)Z_Construct_UPackage__Script_EspecializacionCPP(), TEXT("ETipoAeronave"));
	}
	return Z_Registration_Info_UEnum_ETipoAeronave.OuterSingleton;
}
template<> ESPECIALIZACIONCPP_API UEnum* StaticEnum<ETipoAeronave>()
{
	return ETipoAeronave_StaticEnum();
}
struct Z_Construct_UEnum_EspecializacionCPP_ETipoAeronave_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Agricolas.DisplayName", "Agricolas" },
		{ "Agricolas.Name", "ETipoAeronave::Agricolas" },
		{ "Bombarderos.DisplayName", "Bombardero" },
		{ "Bombarderos.Name", "ETipoAeronave::Bombarderos" },
		{ "Cazas.DisplayName", "Cazas" },
		{ "Cazas.Name", "ETipoAeronave::Cazas" },
		{ "Comerciales.DisplayName", "Comerciales" },
		{ "Comerciales.Name", "ETipoAeronave::Comerciales" },
		{ "DeEntrenamiento.DisplayName", "DeEntrenamiento" },
		{ "DeEntrenamiento.Name", "ETipoAeronave::DeEntrenamiento" },
		{ "DeReconocimiento.DisplayName", "DeReconocimiento" },
		{ "DeReconocimiento.Name", "ETipoAeronave::DeReconocimiento" },
		{ "Helicoptero.DisplayName", "Helicoptero" },
		{ "Helicoptero.Name", "ETipoAeronave::Helicoptero" },
		{ "ModuleRelativePath", "Aeronaves.h" },
		{ "Transportes.DisplayName", "Transportes" },
		{ "Transportes.Name", "ETipoAeronave::Transportes" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "ETipoAeronave::Helicoptero", (int64)ETipoAeronave::Helicoptero },
		{ "ETipoAeronave::Cazas", (int64)ETipoAeronave::Cazas },
		{ "ETipoAeronave::Bombarderos", (int64)ETipoAeronave::Bombarderos },
		{ "ETipoAeronave::Transportes", (int64)ETipoAeronave::Transportes },
		{ "ETipoAeronave::Comerciales", (int64)ETipoAeronave::Comerciales },
		{ "ETipoAeronave::DeEntrenamiento", (int64)ETipoAeronave::DeEntrenamiento },
		{ "ETipoAeronave::Agricolas", (int64)ETipoAeronave::Agricolas },
		{ "ETipoAeronave::DeReconocimiento", (int64)ETipoAeronave::DeReconocimiento },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_EspecializacionCPP_ETipoAeronave_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_EspecializacionCPP,
	nullptr,
	"ETipoAeronave",
	"ETipoAeronave",
	Z_Construct_UEnum_EspecializacionCPP_ETipoAeronave_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_EspecializacionCPP_ETipoAeronave_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_EspecializacionCPP_ETipoAeronave_Statics::Enum_MetaDataParams), Z_Construct_UEnum_EspecializacionCPP_ETipoAeronave_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_EspecializacionCPP_ETipoAeronave()
{
	if (!Z_Registration_Info_UEnum_ETipoAeronave.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ETipoAeronave.InnerSingleton, Z_Construct_UEnum_EspecializacionCPP_ETipoAeronave_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_ETipoAeronave.InnerSingleton;
}
// End Enum ETipoAeronave

// Begin Class AAeronaves
void AAeronaves::StaticRegisterNativesAAeronaves()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AAeronaves);
UClass* Z_Construct_UClass_AAeronaves_NoRegister()
{
	return AAeronaves::StaticClass();
}
struct Z_Construct_UClass_AAeronaves_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "Aeronaves.h" },
		{ "ModuleRelativePath", "Aeronaves.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TipoAeronave_MetaData[] = {
		{ "Category", "Aeronaves" },
		{ "ModuleRelativePath", "Aeronaves.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ModeloAeronave_MetaData[] = {
		{ "Category", "Aeronaves" },
		{ "ModuleRelativePath", "Aeronaves.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_VersionAeronave_MetaData[] = {
		{ "Category", "Aeronaves" },
		{ "ModuleRelativePath", "Aeronaves.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_TipoAeronave_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_TipoAeronave;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ModeloAeronave;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_VersionAeronave;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AAeronaves>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AAeronaves_Statics::NewProp_TipoAeronave_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_AAeronaves_Statics::NewProp_TipoAeronave = { "TipoAeronave", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AAeronaves, TipoAeronave), Z_Construct_UEnum_EspecializacionCPP_ETipoAeronave, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TipoAeronave_MetaData), NewProp_TipoAeronave_MetaData) }; // 1372887842
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_AAeronaves_Statics::NewProp_ModeloAeronave = { "ModeloAeronave", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AAeronaves, ModeloAeronave), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ModeloAeronave_MetaData), NewProp_ModeloAeronave_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AAeronaves_Statics::NewProp_VersionAeronave = { "VersionAeronave", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AAeronaves, VersionAeronave), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_VersionAeronave_MetaData), NewProp_VersionAeronave_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AAeronaves_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAeronaves_Statics::NewProp_TipoAeronave_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAeronaves_Statics::NewProp_TipoAeronave,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAeronaves_Statics::NewProp_ModeloAeronave,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAeronaves_Statics::NewProp_VersionAeronave,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AAeronaves_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AAeronaves_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AVehicle,
	(UObject* (*)())Z_Construct_UPackage__Script_EspecializacionCPP,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AAeronaves_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AAeronaves_Statics::ClassParams = {
	&AAeronaves::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_AAeronaves_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_AAeronaves_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AAeronaves_Statics::Class_MetaDataParams), Z_Construct_UClass_AAeronaves_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AAeronaves()
{
	if (!Z_Registration_Info_UClass_AAeronaves.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AAeronaves.OuterSingleton, Z_Construct_UClass_AAeronaves_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AAeronaves.OuterSingleton;
}
template<> ESPECIALIZACIONCPP_API UClass* StaticClass<AAeronaves>()
{
	return AAeronaves::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AAeronaves);
AAeronaves::~AAeronaves() {}
// End Class AAeronaves

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_Marco_Documents_Unreal_Projects_EspecializacionCPP_Source_EspecializacionCPP_Aeronaves_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ ETipoAeronave_StaticEnum, TEXT("ETipoAeronave"), &Z_Registration_Info_UEnum_ETipoAeronave, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1372887842U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AAeronaves, AAeronaves::StaticClass, TEXT("AAeronaves"), &Z_Registration_Info_UClass_AAeronaves, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AAeronaves), 463667830U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Marco_Documents_Unreal_Projects_EspecializacionCPP_Source_EspecializacionCPP_Aeronaves_h_666225902(TEXT("/Script/EspecializacionCPP"),
	Z_CompiledInDeferFile_FID_Users_Marco_Documents_Unreal_Projects_EspecializacionCPP_Source_EspecializacionCPP_Aeronaves_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Marco_Documents_Unreal_Projects_EspecializacionCPP_Source_EspecializacionCPP_Aeronaves_h_Statics::ClassInfo),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Users_Marco_Documents_Unreal_Projects_EspecializacionCPP_Source_EspecializacionCPP_Aeronaves_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Marco_Documents_Unreal_Projects_EspecializacionCPP_Source_EspecializacionCPP_Aeronaves_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
