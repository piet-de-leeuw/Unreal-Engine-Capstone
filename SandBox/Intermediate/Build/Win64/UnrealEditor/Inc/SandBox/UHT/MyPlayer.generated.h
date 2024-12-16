// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MyPlayer.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class UPrimitiveComponent;
struct FHitResult;
#ifdef SANDBOX_MyPlayer_generated_h
#error "MyPlayer.generated.h already included, missing '#pragma once' in MyPlayer.h"
#endif
#define SANDBOX_MyPlayer_generated_h

#define FID_Users_pietd_Documents_GitHub_Unreal_Engine_Capstone_SandBox_Source_SandBox_MyPlayer_h_27_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execHitGround);


#define FID_Users_pietd_Documents_GitHub_Unreal_Engine_Capstone_SandBox_Source_SandBox_MyPlayer_h_27_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAMyPlayer(); \
	friend struct Z_Construct_UClass_AMyPlayer_Statics; \
public: \
	DECLARE_CLASS(AMyPlayer, APawn, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/SandBox"), NO_API) \
	DECLARE_SERIALIZER(AMyPlayer)


#define FID_Users_pietd_Documents_GitHub_Unreal_Engine_Capstone_SandBox_Source_SandBox_MyPlayer_h_27_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	AMyPlayer(AMyPlayer&&); \
	AMyPlayer(const AMyPlayer&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMyPlayer); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMyPlayer); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AMyPlayer) \
	NO_API virtual ~AMyPlayer();


#define FID_Users_pietd_Documents_GitHub_Unreal_Engine_Capstone_SandBox_Source_SandBox_MyPlayer_h_24_PROLOG
#define FID_Users_pietd_Documents_GitHub_Unreal_Engine_Capstone_SandBox_Source_SandBox_MyPlayer_h_27_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_pietd_Documents_GitHub_Unreal_Engine_Capstone_SandBox_Source_SandBox_MyPlayer_h_27_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_pietd_Documents_GitHub_Unreal_Engine_Capstone_SandBox_Source_SandBox_MyPlayer_h_27_INCLASS_NO_PURE_DECLS \
	FID_Users_pietd_Documents_GitHub_Unreal_Engine_Capstone_SandBox_Source_SandBox_MyPlayer_h_27_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SANDBOX_API UClass* StaticClass<class AMyPlayer>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_pietd_Documents_GitHub_Unreal_Engine_Capstone_SandBox_Source_SandBox_MyPlayer_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
