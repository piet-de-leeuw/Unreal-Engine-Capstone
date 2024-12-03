// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SandBox/MyGameHUD.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMyGameHUD() {}

// Begin Cross Module References
SANDBOX_API UClass* Z_Construct_UClass_UMyGameHUD();
SANDBOX_API UClass* Z_Construct_UClass_UMyGameHUD_NoRegister();
UMG_API UClass* Z_Construct_UClass_UUserWidget();
UPackage* Z_Construct_UPackage__Script_SandBox();
// End Cross Module References

// Begin Class UMyGameHUD
void UMyGameHUD::StaticRegisterNativesUMyGameHUD()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMyGameHUD);
UClass* Z_Construct_UClass_UMyGameHUD_NoRegister()
{
	return UMyGameHUD::StaticClass();
}
struct Z_Construct_UClass_UMyGameHUD_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "MyGameHUD.h" },
		{ "ModuleRelativePath", "MyGameHUD.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMyGameHUD>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UMyGameHUD_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UUserWidget,
	(UObject* (*)())Z_Construct_UPackage__Script_SandBox,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMyGameHUD_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMyGameHUD_Statics::ClassParams = {
	&UMyGameHUD::StaticClass,
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
	0x00B010A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMyGameHUD_Statics::Class_MetaDataParams), Z_Construct_UClass_UMyGameHUD_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UMyGameHUD()
{
	if (!Z_Registration_Info_UClass_UMyGameHUD.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMyGameHUD.OuterSingleton, Z_Construct_UClass_UMyGameHUD_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMyGameHUD.OuterSingleton;
}
template<> SANDBOX_API UClass* StaticClass<UMyGameHUD>()
{
	return UMyGameHUD::StaticClass();
}
UMyGameHUD::UMyGameHUD(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UMyGameHUD);
UMyGameHUD::~UMyGameHUD() {}
// End Class UMyGameHUD

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_pietd_Documents_GitHub_Unreal_Engine_Capstone_SandBox_Source_SandBox_MyGameHUD_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UMyGameHUD, UMyGameHUD::StaticClass, TEXT("UMyGameHUD"), &Z_Registration_Info_UClass_UMyGameHUD, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMyGameHUD), 1523318311U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_pietd_Documents_GitHub_Unreal_Engine_Capstone_SandBox_Source_SandBox_MyGameHUD_h_3045047360(TEXT("/Script/SandBox"),
	Z_CompiledInDeferFile_FID_Users_pietd_Documents_GitHub_Unreal_Engine_Capstone_SandBox_Source_SandBox_MyGameHUD_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_pietd_Documents_GitHub_Unreal_Engine_Capstone_SandBox_Source_SandBox_MyGameHUD_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
