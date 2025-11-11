// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "EspecializacionCPP/MyCharacterInput.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMyCharacterInput() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_ACharacter();
ESPECIALIZACIONCPP_API UClass* Z_Construct_UClass_AMyCharacterInput();
ESPECIALIZACIONCPP_API UClass* Z_Construct_UClass_AMyCharacterInput_NoRegister();
UPackage* Z_Construct_UPackage__Script_EspecializacionCPP();
// End Cross Module References

// Begin Class AMyCharacterInput
void AMyCharacterInput::StaticRegisterNativesAMyCharacterInput()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AMyCharacterInput);
UClass* Z_Construct_UClass_AMyCharacterInput_NoRegister()
{
	return AMyCharacterInput::StaticClass();
}
struct Z_Construct_UClass_AMyCharacterInput_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "//DECLARE_LOG_EXTERN(LogTempChartatcer, Log, ALL);\n" },
#endif
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "MyCharacterInput.h" },
		{ "ModuleRelativePath", "MyCharacterInput.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "DECLARE_LOG_EXTERN(LogTempChartatcer, Log, ALL);" },
#endif
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMyCharacterInput>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_AMyCharacterInput_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_ACharacter,
	(UObject* (*)())Z_Construct_UPackage__Script_EspecializacionCPP,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMyCharacterInput_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AMyCharacterInput_Statics::ClassParams = {
	&AMyCharacterInput::StaticClass,
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
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMyCharacterInput_Statics::Class_MetaDataParams), Z_Construct_UClass_AMyCharacterInput_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AMyCharacterInput()
{
	if (!Z_Registration_Info_UClass_AMyCharacterInput.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AMyCharacterInput.OuterSingleton, Z_Construct_UClass_AMyCharacterInput_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AMyCharacterInput.OuterSingleton;
}
template<> ESPECIALIZACIONCPP_API UClass* StaticClass<AMyCharacterInput>()
{
	return AMyCharacterInput::StaticClass();
}
AMyCharacterInput::AMyCharacterInput(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(AMyCharacterInput);
AMyCharacterInput::~AMyCharacterInput() {}
// End Class AMyCharacterInput

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_Marco_Documents_Unreal_Projects_EspecializacionCPP_Source_EspecializacionCPP_MyCharacterInput_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AMyCharacterInput, AMyCharacterInput::StaticClass, TEXT("AMyCharacterInput"), &Z_Registration_Info_UClass_AMyCharacterInput, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AMyCharacterInput), 1393126175U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Marco_Documents_Unreal_Projects_EspecializacionCPP_Source_EspecializacionCPP_MyCharacterInput_h_274216443(TEXT("/Script/EspecializacionCPP"),
	Z_CompiledInDeferFile_FID_Users_Marco_Documents_Unreal_Projects_EspecializacionCPP_Source_EspecializacionCPP_MyCharacterInput_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Marco_Documents_Unreal_Projects_EspecializacionCPP_Source_EspecializacionCPP_MyCharacterInput_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
