// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Aeronaves.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ESPECIALIZACIONCPP_Aeronaves_generated_h
#error "Aeronaves.generated.h already included, missing '#pragma once' in Aeronaves.h"
#endif
#define ESPECIALIZACIONCPP_Aeronaves_generated_h

#define FID_Users_Marco_Documents_Unreal_Projects_EspecializacionCPP_Source_EspecializacionCPP_Aeronaves_h_38_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAAeronaves(); \
	friend struct Z_Construct_UClass_AAeronaves_Statics; \
public: \
	DECLARE_CLASS(AAeronaves, AVehicle, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/EspecializacionCPP"), NO_API) \
	DECLARE_SERIALIZER(AAeronaves)


#define FID_Users_Marco_Documents_Unreal_Projects_EspecializacionCPP_Source_EspecializacionCPP_Aeronaves_h_38_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	AAeronaves(AAeronaves&&); \
	AAeronaves(const AAeronaves&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AAeronaves); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AAeronaves); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AAeronaves) \
	NO_API virtual ~AAeronaves();


#define FID_Users_Marco_Documents_Unreal_Projects_EspecializacionCPP_Source_EspecializacionCPP_Aeronaves_h_35_PROLOG
#define FID_Users_Marco_Documents_Unreal_Projects_EspecializacionCPP_Source_EspecializacionCPP_Aeronaves_h_38_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_Marco_Documents_Unreal_Projects_EspecializacionCPP_Source_EspecializacionCPP_Aeronaves_h_38_INCLASS_NO_PURE_DECLS \
	FID_Users_Marco_Documents_Unreal_Projects_EspecializacionCPP_Source_EspecializacionCPP_Aeronaves_h_38_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ESPECIALIZACIONCPP_API UClass* StaticClass<class AAeronaves>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_Marco_Documents_Unreal_Projects_EspecializacionCPP_Source_EspecializacionCPP_Aeronaves_h


#define FOREACH_ENUM_ETIPOAERONAVE(op) \
	op(ETipoAeronave::Helicoptero) \
	op(ETipoAeronave::Cazas) \
	op(ETipoAeronave::Bombarderos) \
	op(ETipoAeronave::Transportes) \
	op(ETipoAeronave::Comerciales) \
	op(ETipoAeronave::DeEntrenamiento) \
	op(ETipoAeronave::Agricolas) \
	op(ETipoAeronave::DeReconocimiento) 

enum class ETipoAeronave;
template<> struct TIsUEnumClass<ETipoAeronave> { enum { Value = true }; };
template<> ESPECIALIZACIONCPP_API UEnum* StaticEnum<ETipoAeronave>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
