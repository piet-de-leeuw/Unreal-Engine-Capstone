// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Interact.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef SANDBOX_Interact_generated_h
#error "Interact.generated.h already included, missing '#pragma once' in Interact.h"
#endif
#define SANDBOX_Interact_generated_h

#define FID_Users_pietd_Documents_GitHub_Unreal_Engine_Capstone_SandBox_Source_SandBox_Interact_h_17_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	SANDBOX_API UInteract(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UInteract(UInteract&&); \
	UInteract(const UInteract&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(SANDBOX_API, UInteract); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInteract); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UInteract) \
	SANDBOX_API virtual ~UInteract();


#define FID_Users_pietd_Documents_GitHub_Unreal_Engine_Capstone_SandBox_Source_SandBox_Interact_h_17_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUInteract(); \
	friend struct Z_Construct_UClass_UInteract_Statics; \
public: \
	DECLARE_CLASS(UInteract, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/SandBox"), SANDBOX_API) \
	DECLARE_SERIALIZER(UInteract)


#define FID_Users_pietd_Documents_GitHub_Unreal_Engine_Capstone_SandBox_Source_SandBox_Interact_h_17_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_Users_pietd_Documents_GitHub_Unreal_Engine_Capstone_SandBox_Source_SandBox_Interact_h_17_GENERATED_UINTERFACE_BODY() \
	FID_Users_pietd_Documents_GitHub_Unreal_Engine_Capstone_SandBox_Source_SandBox_Interact_h_17_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Users_pietd_Documents_GitHub_Unreal_Engine_Capstone_SandBox_Source_SandBox_Interact_h_17_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IInteract() {} \
public: \
	typedef UInteract UClassType; \
	typedef IInteract ThisClass; \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_Users_pietd_Documents_GitHub_Unreal_Engine_Capstone_SandBox_Source_SandBox_Interact_h_14_PROLOG
#define FID_Users_pietd_Documents_GitHub_Unreal_Engine_Capstone_SandBox_Source_SandBox_Interact_h_22_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_pietd_Documents_GitHub_Unreal_Engine_Capstone_SandBox_Source_SandBox_Interact_h_17_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SANDBOX_API UClass* StaticClass<class UInteract>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_pietd_Documents_GitHub_Unreal_Engine_Capstone_SandBox_Source_SandBox_Interact_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
