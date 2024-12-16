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

// Begin Class UMyGameHUD Function UpdateHUDLives
struct MyGameHUD_eventUpdateHUDLives_Parms
{
	int32 Lives;
};
static const FName NAME_UMyGameHUD_UpdateHUDLives = FName(TEXT("UpdateHUDLives"));
void UMyGameHUD::UpdateHUDLives(const int32 Lives)
{
	MyGameHUD_eventUpdateHUDLives_Parms Parms;
	Parms.Lives=Lives;
	UFunction* Func = FindFunctionChecked(NAME_UMyGameHUD_UpdateHUDLives);
	ProcessEvent(Func,&Parms);
}
struct Z_Construct_UFunction_UMyGameHUD_UpdateHUDLives_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "UpdateHUD" },
		{ "ModuleRelativePath", "MyGameHUD.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Lives_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_Lives;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UMyGameHUD_UpdateHUDLives_Statics::NewProp_Lives = { "Lives", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MyGameHUD_eventUpdateHUDLives_Parms, Lives), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Lives_MetaData), NewProp_Lives_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMyGameHUD_UpdateHUDLives_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMyGameHUD_UpdateHUDLives_Statics::NewProp_Lives,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMyGameHUD_UpdateHUDLives_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMyGameHUD_UpdateHUDLives_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMyGameHUD, nullptr, "UpdateHUDLives", nullptr, nullptr, Z_Construct_UFunction_UMyGameHUD_UpdateHUDLives_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMyGameHUD_UpdateHUDLives_Statics::PropPointers), sizeof(MyGameHUD_eventUpdateHUDLives_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMyGameHUD_UpdateHUDLives_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMyGameHUD_UpdateHUDLives_Statics::Function_MetaDataParams) };
static_assert(sizeof(MyGameHUD_eventUpdateHUDLives_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMyGameHUD_UpdateHUDLives()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMyGameHUD_UpdateHUDLives_Statics::FuncParams);
	}
	return ReturnFunction;
}
// End Class UMyGameHUD Function UpdateHUDLives

// Begin Class UMyGameHUD Function UpdateHUDScore
struct MyGameHUD_eventUpdateHUDScore_Parms
{
	int32 score;
};
static const FName NAME_UMyGameHUD_UpdateHUDScore = FName(TEXT("UpdateHUDScore"));
void UMyGameHUD::UpdateHUDScore(const int32 score)
{
	MyGameHUD_eventUpdateHUDScore_Parms Parms;
	Parms.score=score;
	UFunction* Func = FindFunctionChecked(NAME_UMyGameHUD_UpdateHUDScore);
	ProcessEvent(Func,&Parms);
}
struct Z_Construct_UFunction_UMyGameHUD_UpdateHUDScore_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "UpdateHUD" },
		{ "ModuleRelativePath", "MyGameHUD.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_score_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_score;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UMyGameHUD_UpdateHUDScore_Statics::NewProp_score = { "score", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MyGameHUD_eventUpdateHUDScore_Parms, score), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_score_MetaData), NewProp_score_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMyGameHUD_UpdateHUDScore_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMyGameHUD_UpdateHUDScore_Statics::NewProp_score,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMyGameHUD_UpdateHUDScore_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMyGameHUD_UpdateHUDScore_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMyGameHUD, nullptr, "UpdateHUDScore", nullptr, nullptr, Z_Construct_UFunction_UMyGameHUD_UpdateHUDScore_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMyGameHUD_UpdateHUDScore_Statics::PropPointers), sizeof(MyGameHUD_eventUpdateHUDScore_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMyGameHUD_UpdateHUDScore_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMyGameHUD_UpdateHUDScore_Statics::Function_MetaDataParams) };
static_assert(sizeof(MyGameHUD_eventUpdateHUDScore_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMyGameHUD_UpdateHUDScore()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMyGameHUD_UpdateHUDScore_Statics::FuncParams);
	}
	return ReturnFunction;
}
// End Class UMyGameHUD Function UpdateHUDScore

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
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UMyGameHUD_UpdateHUDLives, "UpdateHUDLives" }, // 174590765
		{ &Z_Construct_UFunction_UMyGameHUD_UpdateHUDScore, "UpdateHUDScore" }, // 3741684731
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
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
	FuncInfo,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
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
		{ Z_Construct_UClass_UMyGameHUD, UMyGameHUD::StaticClass, TEXT("UMyGameHUD"), &Z_Registration_Info_UClass_UMyGameHUD, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMyGameHUD), 2636922532U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_pietd_Documents_GitHub_Unreal_Engine_Capstone_SandBox_Source_SandBox_MyGameHUD_h_3010461408(TEXT("/Script/SandBox"),
	Z_CompiledInDeferFile_FID_Users_pietd_Documents_GitHub_Unreal_Engine_Capstone_SandBox_Source_SandBox_MyGameHUD_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_pietd_Documents_GitHub_Unreal_Engine_Capstone_SandBox_Source_SandBox_MyGameHUD_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
