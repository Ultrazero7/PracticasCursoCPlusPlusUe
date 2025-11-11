// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "EspecializacionCPP/AIClass_NPC.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAIClass_NPC() {}

// Begin Cross Module References
AIMODULE_API UClass* Z_Construct_UClass_AAIController();
ESPECIALIZACIONCPP_API UClass* Z_Construct_UClass_AAIClass_NPC();
ESPECIALIZACIONCPP_API UClass* Z_Construct_UClass_AAIClass_NPC_NoRegister();
UPackage* Z_Construct_UPackage__Script_EspecializacionCPP();
// End Cross Module References

// Begin Class AAIClass_NPC
void AAIClass_NPC::StaticRegisterNativesAAIClass_NPC()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AAIClass_NPC);
UClass* Z_Construct_UClass_AAIClass_NPC_NoRegister()
{
	return AAIClass_NPC::StaticClass();
}
struct Z_Construct_UClass_AAIClass_NPC_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "Collision Rendering Transformation" },
		{ "IncludePath", "AIClass_NPC.h" },
		{ "ModuleRelativePath", "AIClass_NPC.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AAIClass_NPC>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_AAIClass_NPC_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AAIController,
	(UObject* (*)())Z_Construct_UPackage__Script_EspecializacionCPP,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AAIClass_NPC_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AAIClass_NPC_Statics::ClassParams = {
	&AAIClass_NPC::StaticClass,
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
	0x009002A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AAIClass_NPC_Statics::Class_MetaDataParams), Z_Construct_UClass_AAIClass_NPC_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AAIClass_NPC()
{
	if (!Z_Registration_Info_UClass_AAIClass_NPC.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AAIClass_NPC.OuterSingleton, Z_Construct_UClass_AAIClass_NPC_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AAIClass_NPC.OuterSingleton;
}
template<> ESPECIALIZACIONCPP_API UClass* StaticClass<AAIClass_NPC>()
{
	return AAIClass_NPC::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AAIClass_NPC);
AAIClass_NPC::~AAIClass_NPC() {}
// End Class AAIClass_NPC

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_Marco_Documents_Unreal_Projects_EspecializacionCPP_Source_EspecializacionCPP_AIClass_NPC_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AAIClass_NPC, AAIClass_NPC::StaticClass, TEXT("AAIClass_NPC"), &Z_Registration_Info_UClass_AAIClass_NPC, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AAIClass_NPC), 2861262820U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Marco_Documents_Unreal_Projects_EspecializacionCPP_Source_EspecializacionCPP_AIClass_NPC_h_2551245870(TEXT("/Script/EspecializacionCPP"),
	Z_CompiledInDeferFile_FID_Users_Marco_Documents_Unreal_Projects_EspecializacionCPP_Source_EspecializacionCPP_AIClass_NPC_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Marco_Documents_Unreal_Projects_EspecializacionCPP_Source_EspecializacionCPP_AIClass_NPC_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
