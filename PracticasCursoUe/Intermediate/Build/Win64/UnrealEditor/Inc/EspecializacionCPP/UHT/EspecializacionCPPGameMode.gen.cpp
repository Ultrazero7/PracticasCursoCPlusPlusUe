// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "EspecializacionCPP/EspecializacionCPPGameMode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEspecializacionCPPGameMode() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
ESPECIALIZACIONCPP_API UClass* Z_Construct_UClass_AEspecializacionCPPGameMode();
ESPECIALIZACIONCPP_API UClass* Z_Construct_UClass_AEspecializacionCPPGameMode_NoRegister();
UPackage* Z_Construct_UPackage__Script_EspecializacionCPP();
// End Cross Module References

// Begin Class AEspecializacionCPPGameMode
void AEspecializacionCPPGameMode::StaticRegisterNativesAEspecializacionCPPGameMode()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AEspecializacionCPPGameMode);
UClass* Z_Construct_UClass_AEspecializacionCPPGameMode_NoRegister()
{
	return AEspecializacionCPPGameMode::StaticClass();
}
struct Z_Construct_UClass_AEspecializacionCPPGameMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "EspecializacionCPPGameMode.h" },
		{ "ModuleRelativePath", "EspecializacionCPPGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AEspecializacionCPPGameMode>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_AEspecializacionCPPGameMode_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AGameModeBase,
	(UObject* (*)())Z_Construct_UPackage__Script_EspecializacionCPP,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AEspecializacionCPPGameMode_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AEspecializacionCPPGameMode_Statics::ClassParams = {
	&AEspecializacionCPPGameMode::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x008802ACu,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AEspecializacionCPPGameMode_Statics::Class_MetaDataParams), Z_Construct_UClass_AEspecializacionCPPGameMode_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AEspecializacionCPPGameMode()
{
	if (!Z_Registration_Info_UClass_AEspecializacionCPPGameMode.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AEspecializacionCPPGameMode.OuterSingleton, Z_Construct_UClass_AEspecializacionCPPGameMode_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AEspecializacionCPPGameMode.OuterSingleton;
}
template<> ESPECIALIZACIONCPP_API UClass* StaticClass<AEspecializacionCPPGameMode>()
{
	return AEspecializacionCPPGameMode::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AEspecializacionCPPGameMode);
AEspecializacionCPPGameMode::~AEspecializacionCPPGameMode() {}
// End Class AEspecializacionCPPGameMode

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_Marco_Documents_Unreal_Projects_EspecializacionCPP_Source_EspecializacionCPP_EspecializacionCPPGameMode_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AEspecializacionCPPGameMode, AEspecializacionCPPGameMode::StaticClass, TEXT("AEspecializacionCPPGameMode"), &Z_Registration_Info_UClass_AEspecializacionCPPGameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AEspecializacionCPPGameMode), 2829908343U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Marco_Documents_Unreal_Projects_EspecializacionCPP_Source_EspecializacionCPP_EspecializacionCPPGameMode_h_682667961(TEXT("/Script/EspecializacionCPP"),
	Z_CompiledInDeferFile_FID_Users_Marco_Documents_Unreal_Projects_EspecializacionCPP_Source_EspecializacionCPP_EspecializacionCPPGameMode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Marco_Documents_Unreal_Projects_EspecializacionCPP_Source_EspecializacionCPP_EspecializacionCPPGameMode_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
