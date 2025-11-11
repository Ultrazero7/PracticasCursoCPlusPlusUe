// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "EspecializacionCPP/MyPlatformActor2.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMyPlatformActor2() {}

// Begin Cross Module References
ESPECIALIZACIONCPP_API UClass* Z_Construct_UClass_AMyPlatformActor2();
ESPECIALIZACIONCPP_API UClass* Z_Construct_UClass_AMyPlatformActor2_NoRegister();
ESPECIALIZACIONCPP_API UClass* Z_Construct_UClass_APlatformActor();
UPackage* Z_Construct_UPackage__Script_EspecializacionCPP();
// End Cross Module References

// Begin Class AMyPlatformActor2
void AMyPlatformActor2::StaticRegisterNativesAMyPlatformActor2()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AMyPlatformActor2);
UClass* Z_Construct_UClass_AMyPlatformActor2_NoRegister()
{
	return AMyPlatformActor2::StaticClass();
}
struct Z_Construct_UClass_AMyPlatformActor2_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "MyPlatformActor2.h" },
		{ "ModuleRelativePath", "MyPlatformActor2.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMyPlatformActor2>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_AMyPlatformActor2_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_APlatformActor,
	(UObject* (*)())Z_Construct_UPackage__Script_EspecializacionCPP,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMyPlatformActor2_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AMyPlatformActor2_Statics::ClassParams = {
	&AMyPlatformActor2::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMyPlatformActor2_Statics::Class_MetaDataParams), Z_Construct_UClass_AMyPlatformActor2_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AMyPlatformActor2()
{
	if (!Z_Registration_Info_UClass_AMyPlatformActor2.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AMyPlatformActor2.OuterSingleton, Z_Construct_UClass_AMyPlatformActor2_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AMyPlatformActor2.OuterSingleton;
}
template<> ESPECIALIZACIONCPP_API UClass* StaticClass<AMyPlatformActor2>()
{
	return AMyPlatformActor2::StaticClass();
}
AMyPlatformActor2::AMyPlatformActor2() {}
DEFINE_VTABLE_PTR_HELPER_CTOR(AMyPlatformActor2);
AMyPlatformActor2::~AMyPlatformActor2() {}
// End Class AMyPlatformActor2

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_Marco_Documents_Unreal_Projects_EspecializacionCPP_Source_EspecializacionCPP_MyPlatformActor2_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AMyPlatformActor2, AMyPlatformActor2::StaticClass, TEXT("AMyPlatformActor2"), &Z_Registration_Info_UClass_AMyPlatformActor2, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AMyPlatformActor2), 3076754651U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Marco_Documents_Unreal_Projects_EspecializacionCPP_Source_EspecializacionCPP_MyPlatformActor2_h_2497891227(TEXT("/Script/EspecializacionCPP"),
	Z_CompiledInDeferFile_FID_Users_Marco_Documents_Unreal_Projects_EspecializacionCPP_Source_EspecializacionCPP_MyPlatformActor2_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Marco_Documents_Unreal_Projects_EspecializacionCPP_Source_EspecializacionCPP_MyPlatformActor2_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
