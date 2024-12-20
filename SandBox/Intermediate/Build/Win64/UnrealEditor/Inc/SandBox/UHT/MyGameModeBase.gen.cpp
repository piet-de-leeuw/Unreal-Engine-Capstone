// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SandBox/MyGameModeBase.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMyGameModeBase() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
SANDBOX_API UClass* Z_Construct_UClass_AMyGameModeBase();
SANDBOX_API UClass* Z_Construct_UClass_AMyGameModeBase_NoRegister();
SANDBOX_API UClass* Z_Construct_UClass_AMyPlayer_NoRegister();
SANDBOX_API UClass* Z_Construct_UClass_UMyGameHUD_NoRegister();
UMG_API UClass* Z_Construct_UClass_UUserWidget_NoRegister();
UPackage* Z_Construct_UPackage__Script_SandBox();
// End Cross Module References

// Begin Class AMyGameModeBase Function AddRemoveUI
struct MyGameModeBase_eventAddRemoveUI_Parms
{
	bool ShowMouseCursor;
	bool DisableInput;
	UUserWidget* RemoveWidget;
	UUserWidget* AddWidget;
};
static const FName NAME_AMyGameModeBase_AddRemoveUI = FName(TEXT("AddRemoveUI"));
void AMyGameModeBase::AddRemoveUI(bool ShowMouseCursor, bool DisableInput, UUserWidget* RemoveWidget, UUserWidget* AddWidget)
{
	MyGameModeBase_eventAddRemoveUI_Parms Parms;
	Parms.ShowMouseCursor=ShowMouseCursor ? true : false;
	Parms.DisableInput=DisableInput ? true : false;
	Parms.RemoveWidget=RemoveWidget;
	Parms.AddWidget=AddWidget;
	UFunction* Func = FindFunctionChecked(NAME_AMyGameModeBase_AddRemoveUI);
	ProcessEvent(Func,&Parms);
}
struct Z_Construct_UFunction_AMyGameModeBase_AddRemoveUI_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "UI" },
		{ "ModuleRelativePath", "MyGameModeBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RemoveWidget_MetaData[] = {
		{ "EditInline", "true" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AddWidget_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static void NewProp_ShowMouseCursor_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ShowMouseCursor;
	static void NewProp_DisableInput_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_DisableInput;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_RemoveWidget;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_AddWidget;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_AMyGameModeBase_AddRemoveUI_Statics::NewProp_ShowMouseCursor_SetBit(void* Obj)
{
	((MyGameModeBase_eventAddRemoveUI_Parms*)Obj)->ShowMouseCursor = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AMyGameModeBase_AddRemoveUI_Statics::NewProp_ShowMouseCursor = { "ShowMouseCursor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(MyGameModeBase_eventAddRemoveUI_Parms), &Z_Construct_UFunction_AMyGameModeBase_AddRemoveUI_Statics::NewProp_ShowMouseCursor_SetBit, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_AMyGameModeBase_AddRemoveUI_Statics::NewProp_DisableInput_SetBit(void* Obj)
{
	((MyGameModeBase_eventAddRemoveUI_Parms*)Obj)->DisableInput = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AMyGameModeBase_AddRemoveUI_Statics::NewProp_DisableInput = { "DisableInput", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(MyGameModeBase_eventAddRemoveUI_Parms), &Z_Construct_UFunction_AMyGameModeBase_AddRemoveUI_Statics::NewProp_DisableInput_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AMyGameModeBase_AddRemoveUI_Statics::NewProp_RemoveWidget = { "RemoveWidget", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MyGameModeBase_eventAddRemoveUI_Parms, RemoveWidget), Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RemoveWidget_MetaData), NewProp_RemoveWidget_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AMyGameModeBase_AddRemoveUI_Statics::NewProp_AddWidget = { "AddWidget", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MyGameModeBase_eventAddRemoveUI_Parms, AddWidget), Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AddWidget_MetaData), NewProp_AddWidget_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMyGameModeBase_AddRemoveUI_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMyGameModeBase_AddRemoveUI_Statics::NewProp_ShowMouseCursor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMyGameModeBase_AddRemoveUI_Statics::NewProp_DisableInput,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMyGameModeBase_AddRemoveUI_Statics::NewProp_RemoveWidget,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMyGameModeBase_AddRemoveUI_Statics::NewProp_AddWidget,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AMyGameModeBase_AddRemoveUI_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMyGameModeBase_AddRemoveUI_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMyGameModeBase, nullptr, "AddRemoveUI", nullptr, nullptr, Z_Construct_UFunction_AMyGameModeBase_AddRemoveUI_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMyGameModeBase_AddRemoveUI_Statics::PropPointers), sizeof(MyGameModeBase_eventAddRemoveUI_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMyGameModeBase_AddRemoveUI_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMyGameModeBase_AddRemoveUI_Statics::Function_MetaDataParams) };
static_assert(sizeof(MyGameModeBase_eventAddRemoveUI_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AMyGameModeBase_AddRemoveUI()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMyGameModeBase_AddRemoveUI_Statics::FuncParams);
	}
	return ReturnFunction;
}
// End Class AMyGameModeBase Function AddRemoveUI

// Begin Class AMyGameModeBase Function UpdateLives
struct MyGameModeBase_eventUpdateLives_Parms
{
	float Damage;
};
static const FName NAME_AMyGameModeBase_UpdateLives = FName(TEXT("UpdateLives"));
void AMyGameModeBase::UpdateLives(const float Damage)
{
	MyGameModeBase_eventUpdateLives_Parms Parms;
	Parms.Damage=Damage;
	UFunction* Func = FindFunctionChecked(NAME_AMyGameModeBase_UpdateLives);
	ProcessEvent(Func,&Parms);
}
struct Z_Construct_UFunction_AMyGameModeBase_UpdateLives_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Health" },
		{ "ModuleRelativePath", "MyGameModeBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Damage_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Damage;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AMyGameModeBase_UpdateLives_Statics::NewProp_Damage = { "Damage", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MyGameModeBase_eventUpdateLives_Parms, Damage), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Damage_MetaData), NewProp_Damage_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMyGameModeBase_UpdateLives_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMyGameModeBase_UpdateLives_Statics::NewProp_Damage,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AMyGameModeBase_UpdateLives_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMyGameModeBase_UpdateLives_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMyGameModeBase, nullptr, "UpdateLives", nullptr, nullptr, Z_Construct_UFunction_AMyGameModeBase_UpdateLives_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMyGameModeBase_UpdateLives_Statics::PropPointers), sizeof(MyGameModeBase_eventUpdateLives_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMyGameModeBase_UpdateLives_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMyGameModeBase_UpdateLives_Statics::Function_MetaDataParams) };
static_assert(sizeof(MyGameModeBase_eventUpdateLives_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AMyGameModeBase_UpdateLives()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMyGameModeBase_UpdateLives_Statics::FuncParams);
	}
	return ReturnFunction;
}
// End Class AMyGameModeBase Function UpdateLives

// Begin Class AMyGameModeBase Function UpdateScore
struct MyGameModeBase_eventUpdateScore_Parms
{
	int32 Value;
};
static const FName NAME_AMyGameModeBase_UpdateScore = FName(TEXT("UpdateScore"));
void AMyGameModeBase::UpdateScore(const int32 Value)
{
	MyGameModeBase_eventUpdateScore_Parms Parms;
	Parms.Value=Value;
	UFunction* Func = FindFunctionChecked(NAME_AMyGameModeBase_UpdateScore);
	ProcessEvent(Func,&Parms);
}
struct Z_Construct_UFunction_AMyGameModeBase_UpdateScore_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Score" },
		{ "ModuleRelativePath", "MyGameModeBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_Value;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AMyGameModeBase_UpdateScore_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MyGameModeBase_eventUpdateScore_Parms, Value), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Value_MetaData), NewProp_Value_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMyGameModeBase_UpdateScore_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMyGameModeBase_UpdateScore_Statics::NewProp_Value,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AMyGameModeBase_UpdateScore_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMyGameModeBase_UpdateScore_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMyGameModeBase, nullptr, "UpdateScore", nullptr, nullptr, Z_Construct_UFunction_AMyGameModeBase_UpdateScore_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMyGameModeBase_UpdateScore_Statics::PropPointers), sizeof(MyGameModeBase_eventUpdateScore_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMyGameModeBase_UpdateScore_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMyGameModeBase_UpdateScore_Statics::Function_MetaDataParams) };
static_assert(sizeof(MyGameModeBase_eventUpdateScore_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AMyGameModeBase_UpdateScore()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMyGameModeBase_UpdateScore_Statics::FuncParams);
	}
	return ReturnFunction;
}
// End Class AMyGameModeBase Function UpdateScore

// Begin Class AMyGameModeBase
void AMyGameModeBase::StaticRegisterNativesAMyGameModeBase()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AMyGameModeBase);
UClass* Z_Construct_UClass_AMyGameModeBase_NoRegister()
{
	return AMyGameModeBase::StaticClass();
}
struct Z_Construct_UClass_AMyGameModeBase_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "MyGameModeBase.h" },
		{ "ModuleRelativePath", "MyGameModeBase.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GameHUDRef_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "Reference" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "MyGameModeBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MainMenuRef_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "Reference" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "MyGameModeBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EndMenuRef_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "Reference" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "MyGameModeBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PlayerRef_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "Reference" },
		{ "ModuleRelativePath", "MyGameModeBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Lives_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "Health" },
		{ "ModuleRelativePath", "MyGameModeBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Score_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "Score" },
		{ "ModuleRelativePath", "MyGameModeBase.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_GameHUDRef;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MainMenuRef;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_EndMenuRef;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PlayerRef;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Lives;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Score;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_AMyGameModeBase_AddRemoveUI, "AddRemoveUI" }, // 3363711699
		{ &Z_Construct_UFunction_AMyGameModeBase_UpdateLives, "UpdateLives" }, // 186880746
		{ &Z_Construct_UFunction_AMyGameModeBase_UpdateScore, "UpdateScore" }, // 466891248
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMyGameModeBase>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMyGameModeBase_Statics::NewProp_GameHUDRef = { "GameHUDRef", nullptr, (EPropertyFlags)0x004000000008000c, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMyGameModeBase, GameHUDRef), Z_Construct_UClass_UMyGameHUD_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GameHUDRef_MetaData), NewProp_GameHUDRef_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMyGameModeBase_Statics::NewProp_MainMenuRef = { "MainMenuRef", nullptr, (EPropertyFlags)0x004000000008000c, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMyGameModeBase, MainMenuRef), Z_Construct_UClass_UMyGameHUD_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MainMenuRef_MetaData), NewProp_MainMenuRef_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMyGameModeBase_Statics::NewProp_EndMenuRef = { "EndMenuRef", nullptr, (EPropertyFlags)0x004000000008000c, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMyGameModeBase, EndMenuRef), Z_Construct_UClass_UMyGameHUD_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EndMenuRef_MetaData), NewProp_EndMenuRef_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMyGameModeBase_Statics::NewProp_PlayerRef = { "PlayerRef", nullptr, (EPropertyFlags)0x0040000000000004, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMyGameModeBase, PlayerRef), Z_Construct_UClass_AMyPlayer_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PlayerRef_MetaData), NewProp_PlayerRef_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AMyGameModeBase_Statics::NewProp_Lives = { "Lives", nullptr, (EPropertyFlags)0x0040000000000004, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMyGameModeBase, Lives), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Lives_MetaData), NewProp_Lives_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AMyGameModeBase_Statics::NewProp_Score = { "Score", nullptr, (EPropertyFlags)0x0040000000000004, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMyGameModeBase, Score), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Score_MetaData), NewProp_Score_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AMyGameModeBase_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyGameModeBase_Statics::NewProp_GameHUDRef,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyGameModeBase_Statics::NewProp_MainMenuRef,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyGameModeBase_Statics::NewProp_EndMenuRef,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyGameModeBase_Statics::NewProp_PlayerRef,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyGameModeBase_Statics::NewProp_Lives,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyGameModeBase_Statics::NewProp_Score,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMyGameModeBase_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AMyGameModeBase_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AGameModeBase,
	(UObject* (*)())Z_Construct_UPackage__Script_SandBox,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMyGameModeBase_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AMyGameModeBase_Statics::ClassParams = {
	&AMyGameModeBase::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_AMyGameModeBase_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_AMyGameModeBase_Statics::PropPointers),
	0,
	0x009002ACu,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMyGameModeBase_Statics::Class_MetaDataParams), Z_Construct_UClass_AMyGameModeBase_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AMyGameModeBase()
{
	if (!Z_Registration_Info_UClass_AMyGameModeBase.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AMyGameModeBase.OuterSingleton, Z_Construct_UClass_AMyGameModeBase_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AMyGameModeBase.OuterSingleton;
}
template<> SANDBOX_API UClass* StaticClass<AMyGameModeBase>()
{
	return AMyGameModeBase::StaticClass();
}
AMyGameModeBase::AMyGameModeBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(AMyGameModeBase);
AMyGameModeBase::~AMyGameModeBase() {}
// End Class AMyGameModeBase

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_pietd_Documents_GitHub_Unreal_Engine_Capstone_SandBox_Source_SandBox_MyGameModeBase_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AMyGameModeBase, AMyGameModeBase::StaticClass, TEXT("AMyGameModeBase"), &Z_Registration_Info_UClass_AMyGameModeBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AMyGameModeBase), 3703746471U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_pietd_Documents_GitHub_Unreal_Engine_Capstone_SandBox_Source_SandBox_MyGameModeBase_h_1947851282(TEXT("/Script/SandBox"),
	Z_CompiledInDeferFile_FID_Users_pietd_Documents_GitHub_Unreal_Engine_Capstone_SandBox_Source_SandBox_MyGameModeBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_pietd_Documents_GitHub_Unreal_Engine_Capstone_SandBox_Source_SandBox_MyGameModeBase_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
