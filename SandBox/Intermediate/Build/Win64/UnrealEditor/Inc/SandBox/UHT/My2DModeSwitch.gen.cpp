// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SandBox/My2DModeSwitch.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMy2DModeSwitch() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AActor();
ENGINE_API UClass* Z_Construct_UClass_UBoxComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
SANDBOX_API UClass* Z_Construct_UClass_AMy2DModeSwitch();
SANDBOX_API UClass* Z_Construct_UClass_AMy2DModeSwitch_NoRegister();
SANDBOX_API UClass* Z_Construct_UClass_UInteract_NoRegister();
UPackage* Z_Construct_UPackage__Script_SandBox();
// End Cross Module References

// Begin Class AMy2DModeSwitch
void AMy2DModeSwitch::StaticRegisterNativesAMy2DModeSwitch()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AMy2DModeSwitch);
UClass* Z_Construct_UClass_AMy2DModeSwitch_NoRegister()
{
	return AMy2DModeSwitch::StaticClass();
}
struct Z_Construct_UClass_AMy2DModeSwitch_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "My2DModeSwitch.h" },
		{ "ModuleRelativePath", "My2DModeSwitch.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BoxCollider_MetaData[] = {
		{ "AllowPrivateAccess", "" },
		{ "Category", "Collider" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "My2DModeSwitch.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Mesh_MetaData[] = {
		{ "AllowPrivateAccess", "" },
		{ "Category", "Mesh" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "My2DModeSwitch.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_BoxCollider;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Mesh;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMy2DModeSwitch>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMy2DModeSwitch_Statics::NewProp_BoxCollider = { "BoxCollider", nullptr, (EPropertyFlags)0x0040000000080009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMy2DModeSwitch, BoxCollider), Z_Construct_UClass_UBoxComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BoxCollider_MetaData), NewProp_BoxCollider_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMy2DModeSwitch_Statics::NewProp_Mesh = { "Mesh", nullptr, (EPropertyFlags)0x0040000000080009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMy2DModeSwitch, Mesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Mesh_MetaData), NewProp_Mesh_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AMy2DModeSwitch_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMy2DModeSwitch_Statics::NewProp_BoxCollider,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMy2DModeSwitch_Statics::NewProp_Mesh,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMy2DModeSwitch_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AMy2DModeSwitch_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_SandBox,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMy2DModeSwitch_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_AMy2DModeSwitch_Statics::InterfaceParams[] = {
	{ Z_Construct_UClass_UInteract_NoRegister, (int32)VTABLE_OFFSET(AMy2DModeSwitch, IInteract), false },  // 1650648969
};
const UECodeGen_Private::FClassParams Z_Construct_UClass_AMy2DModeSwitch_Statics::ClassParams = {
	&AMy2DModeSwitch::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_AMy2DModeSwitch_Statics::PropPointers,
	InterfaceParams,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_AMy2DModeSwitch_Statics::PropPointers),
	UE_ARRAY_COUNT(InterfaceParams),
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMy2DModeSwitch_Statics::Class_MetaDataParams), Z_Construct_UClass_AMy2DModeSwitch_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AMy2DModeSwitch()
{
	if (!Z_Registration_Info_UClass_AMy2DModeSwitch.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AMy2DModeSwitch.OuterSingleton, Z_Construct_UClass_AMy2DModeSwitch_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AMy2DModeSwitch.OuterSingleton;
}
template<> SANDBOX_API UClass* StaticClass<AMy2DModeSwitch>()
{
	return AMy2DModeSwitch::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AMy2DModeSwitch);
AMy2DModeSwitch::~AMy2DModeSwitch() {}
// End Class AMy2DModeSwitch

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_pietd_Documents_GitHub_Unreal_Engine_Capstone_SandBox_Source_SandBox_My2DModeSwitch_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AMy2DModeSwitch, AMy2DModeSwitch::StaticClass, TEXT("AMy2DModeSwitch"), &Z_Registration_Info_UClass_AMy2DModeSwitch, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AMy2DModeSwitch), 905277757U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_pietd_Documents_GitHub_Unreal_Engine_Capstone_SandBox_Source_SandBox_My2DModeSwitch_h_2503960149(TEXT("/Script/SandBox"),
	Z_CompiledInDeferFile_FID_Users_pietd_Documents_GitHub_Unreal_Engine_Capstone_SandBox_Source_SandBox_My2DModeSwitch_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_pietd_Documents_GitHub_Unreal_Engine_Capstone_SandBox_Source_SandBox_My2DModeSwitch_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
