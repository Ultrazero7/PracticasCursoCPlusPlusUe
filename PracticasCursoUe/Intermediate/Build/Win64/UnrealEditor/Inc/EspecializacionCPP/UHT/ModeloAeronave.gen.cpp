// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "EspecializacionCPP/ModeloAeronave.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeModeloAeronave() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UUserDefinedEnum();
ESPECIALIZACIONCPP_API UClass* Z_Construct_UClass_UModeloAeronave();
ESPECIALIZACIONCPP_API UClass* Z_Construct_UClass_UModeloAeronave_NoRegister();
UPackage* Z_Construct_UPackage__Script_EspecializacionCPP();
// End Cross Module References

// Begin Class UModeloAeronave
void UModeloAeronave::StaticRegisterNativesUModeloAeronave()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UModeloAeronave);
UClass* Z_Construct_UClass_UModeloAeronave_NoRegister()
{
	return UModeloAeronave::StaticClass();
}
struct Z_Construct_UClass_UModeloAeronave_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "ModeloAeronave.h" },
		{ "ModuleRelativePath", "ModeloAeronave.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UModeloAeronave>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UModeloAeronave_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UUserDefinedEnum,
	(UObject* (*)())Z_Construct_UPackage__Script_EspecializacionCPP,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UModeloAeronave_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UModeloAeronave_Statics::ClassParams = {
	&UModeloAeronave::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UModeloAeronave_Statics::Class_MetaDataParams), Z_Construct_UClass_UModeloAeronave_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UModeloAeronave()
{
	if (!Z_Registration_Info_UClass_UModeloAeronave.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UModeloAeronave.OuterSingleton, Z_Construct_UClass_UModeloAeronave_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UModeloAeronave.OuterSingleton;
}
template<> ESPECIALIZACIONCPP_API UClass* StaticClass<UModeloAeronave>()
{
	return UModeloAeronave::StaticClass();
}
UModeloAeronave::UModeloAeronave(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UModeloAeronave);
UModeloAeronave::~UModeloAeronave() {}
// End Class UModeloAeronave

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_Marco_Documents_Unreal_Projects_EspecializacionCPP_Source_EspecializacionCPP_ModeloAeronave_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UModeloAeronave, UModeloAeronave::StaticClass, TEXT("UModeloAeronave"), &Z_Registration_Info_UClass_UModeloAeronave, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UModeloAeronave), 843913336U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Marco_Documents_Unreal_Projects_EspecializacionCPP_Source_EspecializacionCPP_ModeloAeronave_h_3880990177(TEXT("/Script/EspecializacionCPP"),
	Z_CompiledInDeferFile_FID_Users_Marco_Documents_Unreal_Projects_EspecializacionCPP_Source_EspecializacionCPP_ModeloAeronave_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Marco_Documents_Unreal_Projects_EspecializacionCPP_Source_EspecializacionCPP_ModeloAeronave_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
