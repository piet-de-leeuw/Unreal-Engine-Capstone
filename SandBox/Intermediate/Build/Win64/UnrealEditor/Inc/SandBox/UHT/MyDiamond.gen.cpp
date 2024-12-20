// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SandBox/MyDiamond.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMyDiamond() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AActor();
ENGINE_API UClass* Z_Construct_UClass_USphereComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
SANDBOX_API UClass* Z_Construct_UClass_AMyDiamond();
SANDBOX_API UClass* Z_Construct_UClass_AMyDiamond_NoRegister();
SANDBOX_API UClass* Z_Construct_UClass_AMyPlayer_NoRegister();
SANDBOX_API UClass* Z_Construct_UClass_UInteract_NoRegister();
UPackage* Z_Construct_UPackage__Script_SandBox();
// End Cross Module References

// Begin Class AMyDiamond Function PickupDiamond
struct MyDiamond_eventPickupDiamond_Parms
{
	AMyPlayer* Player;
};
static const FName NAME_AMyDiamond_PickupDiamond = FName(TEXT("PickupDiamond"));
void AMyDiamond::PickupDiamond(AMyPlayer* Player)
{
	MyDiamond_eventPickupDiamond_Parms Parms;
	Parms.Player=Player;
	UFunction* Func = FindFunctionChecked(NAME_AMyDiamond_PickupDiamond);
	ProcessEvent(Func,&Parms);
}
struct Z_Construct_UFunction_AMyDiamond_PickupDiamond_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "MyDiamond.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Player;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AMyDiamond_PickupDiamond_Statics::NewProp_Player = { "Player", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MyDiamond_eventPickupDiamond_Parms, Player), Z_Construct_UClass_AMyPlayer_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMyDiamond_PickupDiamond_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMyDiamond_PickupDiamond_Statics::NewProp_Player,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AMyDiamond_PickupDiamond_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMyDiamond_PickupDiamond_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMyDiamond, nullptr, "PickupDiamond", nullptr, nullptr, Z_Construct_UFunction_AMyDiamond_PickupDiamond_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMyDiamond_PickupDiamond_Statics::PropPointers), sizeof(MyDiamond_eventPickupDiamond_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMyDiamond_PickupDiamond_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMyDiamond_PickupDiamond_Statics::Function_MetaDataParams) };
static_assert(sizeof(MyDiamond_eventPickupDiamond_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AMyDiamond_PickupDiamond()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMyDiamond_PickupDiamond_Statics::FuncParams);
	}
	return ReturnFunction;
}
// End Class AMyDiamond Function PickupDiamond

// Begin Class AMyDiamond
void AMyDiamond::StaticRegisterNativesAMyDiamond()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AMyDiamond);
UClass* Z_Construct_UClass_AMyDiamond_NoRegister()
{
	return AMyDiamond::StaticClass();
}
struct Z_Construct_UClass_AMyDiamond_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "MyDiamond.h" },
		{ "ModuleRelativePath", "MyDiamond.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SphereCollider_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "Colliders" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "MyDiamond.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Mesh_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "Mesh" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "MyDiamond.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[] = {
		{ "AllowPrivateAccess", "" },
		{ "Category", "Score" },
		{ "ModuleRelativePath", "MyDiamond.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SphereCollider;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Mesh;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Value;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_AMyDiamond_PickupDiamond, "PickupDiamond" }, // 3848254133
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMyDiamond>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMyDiamond_Statics::NewProp_SphereCollider = { "SphereCollider", nullptr, (EPropertyFlags)0x004000000009001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMyDiamond, SphereCollider), Z_Construct_UClass_USphereComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SphereCollider_MetaData), NewProp_SphereCollider_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMyDiamond_Statics::NewProp_Mesh = { "Mesh", nullptr, (EPropertyFlags)0x004000000008000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMyDiamond, Mesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Mesh_MetaData), NewProp_Mesh_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AMyDiamond_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0040000000000015, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMyDiamond, Value), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Value_MetaData), NewProp_Value_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AMyDiamond_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyDiamond_Statics::NewProp_SphereCollider,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyDiamond_Statics::NewProp_Mesh,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyDiamond_Statics::NewProp_Value,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMyDiamond_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AMyDiamond_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_SandBox,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMyDiamond_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_AMyDiamond_Statics::InterfaceParams[] = {
	{ Z_Construct_UClass_UInteract_NoRegister, (int32)VTABLE_OFFSET(AMyDiamond, IInteract), false },  // 1650648969
};
const UECodeGen_Private::FClassParams Z_Construct_UClass_AMyDiamond_Statics::ClassParams = {
	&AMyDiamond::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_AMyDiamond_Statics::PropPointers,
	InterfaceParams,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_AMyDiamond_Statics::PropPointers),
	UE_ARRAY_COUNT(InterfaceParams),
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMyDiamond_Statics::Class_MetaDataParams), Z_Construct_UClass_AMyDiamond_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AMyDiamond()
{
	if (!Z_Registration_Info_UClass_AMyDiamond.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AMyDiamond.OuterSingleton, Z_Construct_UClass_AMyDiamond_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AMyDiamond.OuterSingleton;
}
template<> SANDBOX_API UClass* StaticClass<AMyDiamond>()
{
	return AMyDiamond::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AMyDiamond);
AMyDiamond::~AMyDiamond() {}
// End Class AMyDiamond

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_pietd_Documents_GitHub_Unreal_Engine_Capstone_SandBox_Source_SandBox_MyDiamond_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AMyDiamond, AMyDiamond::StaticClass, TEXT("AMyDiamond"), &Z_Registration_Info_UClass_AMyDiamond, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AMyDiamond), 3530751204U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_pietd_Documents_GitHub_Unreal_Engine_Capstone_SandBox_Source_SandBox_MyDiamond_h_583154533(TEXT("/Script/SandBox"),
	Z_CompiledInDeferFile_FID_Users_pietd_Documents_GitHub_Unreal_Engine_Capstone_SandBox_Source_SandBox_MyDiamond_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_pietd_Documents_GitHub_Unreal_Engine_Capstone_SandBox_Source_SandBox_MyDiamond_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
