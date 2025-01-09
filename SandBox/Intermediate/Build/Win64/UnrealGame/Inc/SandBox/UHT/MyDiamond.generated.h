// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MyDiamond.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AMyPlayer;
#ifdef SANDBOX_MyDiamond_generated_h
#error "MyDiamond.generated.h already included, missing '#pragma once' in MyDiamond.h"
#endif
#define SANDBOX_MyDiamond_generated_h

#define FID_Users_pietd_Documents_GitHub_Unreal_Engine_Capstone_SandBox_Source_SandBox_MyDiamond_h_17_CALLBACK_WRAPPERS
#define FID_Users_pietd_Documents_GitHub_Unreal_Engine_Capstone_SandBox_Source_SandBox_MyDiamond_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAMyDiamond(); \
	friend struct Z_Construct_UClass_AMyDiamond_Statics; \
public: \
	DECLARE_CLASS(AMyDiamond, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/SandBox"), NO_API) \
	DECLARE_SERIALIZER(AMyDiamond) \
	virtual UObject* _getUObject() const override { return const_cast<AMyDiamond*>(this); }


#define FID_Users_pietd_Documents_GitHub_Unreal_Engine_Capstone_SandBox_Source_SandBox_MyDiamond_h_17_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	AMyDiamond(AMyDiamond&&); \
	AMyDiamond(const AMyDiamond&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMyDiamond); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMyDiamond); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AMyDiamond) \
	NO_API virtual ~AMyDiamond();


#define FID_Users_pietd_Documents_GitHub_Unreal_Engine_Capstone_SandBox_Source_SandBox_MyDiamond_h_14_PROLOG
#define FID_Users_pietd_Documents_GitHub_Unreal_Engine_Capstone_SandBox_Source_SandBox_MyDiamond_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_pietd_Documents_GitHub_Unreal_Engine_Capstone_SandBox_Source_SandBox_MyDiamond_h_17_CALLBACK_WRAPPERS \
	FID_Users_pietd_Documents_GitHub_Unreal_Engine_Capstone_SandBox_Source_SandBox_MyDiamond_h_17_INCLASS_NO_PURE_DECLS \
	FID_Users_pietd_Documents_GitHub_Unreal_Engine_Capstone_SandBox_Source_SandBox_MyDiamond_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SANDBOX_API UClass* StaticClass<class AMyDiamond>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_pietd_Documents_GitHub_Unreal_Engine_Capstone_SandBox_Source_SandBox_MyDiamond_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
