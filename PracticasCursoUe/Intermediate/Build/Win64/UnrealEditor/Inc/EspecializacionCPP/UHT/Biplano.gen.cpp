// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "EspecializacionCPP/Biplano.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBiplano() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AActor();
ESPECIALIZACIONCPP_API UClass* Z_Construct_UClass_ABiplano();
ESPECIALIZACIONCPP_API UClass* Z_Construct_UClass_ABiplano_NoRegister();
UPackage* Z_Construct_UPackage__Script_EspecializacionCPP();
// End Cross Module References

// Begin Class ABiplano
void ABiplano::StaticRegisterNativesABiplano()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ABiplano);
UClass* Z_Construct_UClass_ABiplano_NoRegister()
{
	return ABiplano::StaticClass();
}
struct Z_Construct_UClass_ABiplano_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Biplano.h" },
		{ "ModuleRelativePath", "Biplano.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABiplano>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_ABiplano_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_EspecializacionCPP,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ABiplano_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ABiplano_Statics::ClassParams = {
	&ABiplano::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ABiplano_Statics::Class_MetaDataParams), Z_Construct_UClass_ABiplano_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ABiplano()
{
	if (!Z_Registration_Info_UClass_ABiplano.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ABiplano.OuterSingleton, Z_Construct_UClass_ABiplano_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ABiplano.OuterSingleton;
}
template<> ESPECIALIZACIONCPP_API UClass* StaticClass<ABiplano>()
{
	return ABiplano::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ABiplano);
ABiplano::~ABiplano() {}
// End Class ABiplano

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_Marco_Documents_Unreal_Projects_EspecializacionCPP_Source_EspecializacionCPP_Biplano_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ABiplano, ABiplano::StaticClass, TEXT("ABiplano"), &Z_Registration_Info_UClass_ABiplano, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ABiplano), 592741330U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Marco_Documents_Unreal_Projects_EspecializacionCPP_Source_EspecializacionCPP_Biplano_h_2020352554(TEXT("/Script/EspecializacionCPP"),
	Z_CompiledInDeferFile_FID_Users_Marco_Documents_Unreal_Projects_EspecializacionCPP_Source_EspecializacionCPP_Biplano_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Marco_Documents_Unreal_Projects_EspecializacionCPP_Source_EspecializacionCPP_Biplano_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
