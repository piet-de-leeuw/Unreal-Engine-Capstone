// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SandBox/MyPlayer.h"
#include "Runtime/Engine/Classes/Engine/HitResult.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMyPlayer() {}

// Begin Cross Module References
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_APawn();
ENGINE_API UClass* Z_Construct_UClass_UBoxComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UFloatingPawnMovement_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USpringArmComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHitResult();
ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputAction_NoRegister();
ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputMappingContext_NoRegister();
SANDBOX_API UClass* Z_Construct_UClass_AMyGameModeBase_NoRegister();
SANDBOX_API UClass* Z_Construct_UClass_AMyPlayer();
SANDBOX_API UClass* Z_Construct_UClass_AMyPlayer_NoRegister();
UPackage* Z_Construct_UPackage__Script_SandBox();
// End Cross Module References

// Begin Class AMyPlayer Function HitGround
struct Z_Construct_UFunction_AMyPlayer_HitGround_Statics
{
	struct MyPlayer_eventHitGround_Parms
	{
		UPrimitiveComponent* HitComponent;
		AActor* OtherActor;
		UPrimitiveComponent* OtherComp;
		FVector NormalImpulse;
		FHitResult Hit;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "MyPlayer.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HitComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OtherComp_MetaData[] = {
		{ "EditInline", "true" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Hit_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_HitComponent;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherActor;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherComp;
	static const UECodeGen_Private::FStructPropertyParams NewProp_NormalImpulse;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Hit;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AMyPlayer_HitGround_Statics::NewProp_HitComponent = { "HitComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MyPlayer_eventHitGround_Parms, HitComponent), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HitComponent_MetaData), NewProp_HitComponent_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AMyPlayer_HitGround_Statics::NewProp_OtherActor = { "OtherActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MyPlayer_eventHitGround_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AMyPlayer_HitGround_Statics::NewProp_OtherComp = { "OtherComp", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MyPlayer_eventHitGround_Parms, OtherComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OtherComp_MetaData), NewProp_OtherComp_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AMyPlayer_HitGround_Statics::NewProp_NormalImpulse = { "NormalImpulse", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MyPlayer_eventHitGround_Parms, NormalImpulse), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AMyPlayer_HitGround_Statics::NewProp_Hit = { "Hit", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MyPlayer_eventHitGround_Parms, Hit), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Hit_MetaData), NewProp_Hit_MetaData) }; // 4100991306
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMyPlayer_HitGround_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMyPlayer_HitGround_Statics::NewProp_HitComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMyPlayer_HitGround_Statics::NewProp_OtherActor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMyPlayer_HitGround_Statics::NewProp_OtherComp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMyPlayer_HitGround_Statics::NewProp_NormalImpulse,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMyPlayer_HitGround_Statics::NewProp_Hit,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AMyPlayer_HitGround_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMyPlayer_HitGround_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMyPlayer, nullptr, "HitGround", nullptr, nullptr, Z_Construct_UFunction_AMyPlayer_HitGround_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMyPlayer_HitGround_Statics::PropPointers), sizeof(Z_Construct_UFunction_AMyPlayer_HitGround_Statics::MyPlayer_eventHitGround_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00C80401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMyPlayer_HitGround_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMyPlayer_HitGround_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AMyPlayer_HitGround_Statics::MyPlayer_eventHitGround_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AMyPlayer_HitGround()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMyPlayer_HitGround_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AMyPlayer::execHitGround)
{
	P_GET_OBJECT(UPrimitiveComponent,Z_Param_HitComponent);
	P_GET_OBJECT(AActor,Z_Param_OtherActor);
	P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp);
	P_GET_STRUCT(FVector,Z_Param_NormalImpulse);
	P_GET_STRUCT_REF(FHitResult,Z_Param_Out_Hit);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->HitGround(Z_Param_HitComponent,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_NormalImpulse,Z_Param_Out_Hit);
	P_NATIVE_END;
}
// End Class AMyPlayer Function HitGround

// Begin Class AMyPlayer Function OnOverlapBegin
struct Z_Construct_UFunction_AMyPlayer_OnOverlapBegin_Statics
{
	struct MyPlayer_eventOnOverlapBegin_Parms
	{
		UPrimitiveComponent* OverlappedComponent;
		AActor* OtherActor;
		UPrimitiveComponent* OtherComp;
		int32 OtherBodyIndex;
		bool bFromSweep;
		FHitResult SweepResult;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "MyPlayer.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OverlappedComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OtherComp_MetaData[] = {
		{ "EditInline", "true" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SweepResult_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OverlappedComponent;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherActor;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherComp;
	static const UECodeGen_Private::FIntPropertyParams NewProp_OtherBodyIndex;
	static void NewProp_bFromSweep_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bFromSweep;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SweepResult;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AMyPlayer_OnOverlapBegin_Statics::NewProp_OverlappedComponent = { "OverlappedComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MyPlayer_eventOnOverlapBegin_Parms, OverlappedComponent), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OverlappedComponent_MetaData), NewProp_OverlappedComponent_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AMyPlayer_OnOverlapBegin_Statics::NewProp_OtherActor = { "OtherActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MyPlayer_eventOnOverlapBegin_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AMyPlayer_OnOverlapBegin_Statics::NewProp_OtherComp = { "OtherComp", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MyPlayer_eventOnOverlapBegin_Parms, OtherComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OtherComp_MetaData), NewProp_OtherComp_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AMyPlayer_OnOverlapBegin_Statics::NewProp_OtherBodyIndex = { "OtherBodyIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MyPlayer_eventOnOverlapBegin_Parms, OtherBodyIndex), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_AMyPlayer_OnOverlapBegin_Statics::NewProp_bFromSweep_SetBit(void* Obj)
{
	((MyPlayer_eventOnOverlapBegin_Parms*)Obj)->bFromSweep = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AMyPlayer_OnOverlapBegin_Statics::NewProp_bFromSweep = { "bFromSweep", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(MyPlayer_eventOnOverlapBegin_Parms), &Z_Construct_UFunction_AMyPlayer_OnOverlapBegin_Statics::NewProp_bFromSweep_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AMyPlayer_OnOverlapBegin_Statics::NewProp_SweepResult = { "SweepResult", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MyPlayer_eventOnOverlapBegin_Parms, SweepResult), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SweepResult_MetaData), NewProp_SweepResult_MetaData) }; // 4100991306
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMyPlayer_OnOverlapBegin_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMyPlayer_OnOverlapBegin_Statics::NewProp_OverlappedComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMyPlayer_OnOverlapBegin_Statics::NewProp_OtherActor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMyPlayer_OnOverlapBegin_Statics::NewProp_OtherComp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMyPlayer_OnOverlapBegin_Statics::NewProp_OtherBodyIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMyPlayer_OnOverlapBegin_Statics::NewProp_bFromSweep,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMyPlayer_OnOverlapBegin_Statics::NewProp_SweepResult,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AMyPlayer_OnOverlapBegin_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMyPlayer_OnOverlapBegin_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMyPlayer, nullptr, "OnOverlapBegin", nullptr, nullptr, Z_Construct_UFunction_AMyPlayer_OnOverlapBegin_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMyPlayer_OnOverlapBegin_Statics::PropPointers), sizeof(Z_Construct_UFunction_AMyPlayer_OnOverlapBegin_Statics::MyPlayer_eventOnOverlapBegin_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00480401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMyPlayer_OnOverlapBegin_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMyPlayer_OnOverlapBegin_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AMyPlayer_OnOverlapBegin_Statics::MyPlayer_eventOnOverlapBegin_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AMyPlayer_OnOverlapBegin()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMyPlayer_OnOverlapBegin_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AMyPlayer::execOnOverlapBegin)
{
	P_GET_OBJECT(UPrimitiveComponent,Z_Param_OverlappedComponent);
	P_GET_OBJECT(AActor,Z_Param_OtherActor);
	P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp);
	P_GET_PROPERTY(FIntProperty,Z_Param_OtherBodyIndex);
	P_GET_UBOOL(Z_Param_bFromSweep);
	P_GET_STRUCT_REF(FHitResult,Z_Param_Out_SweepResult);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnOverlapBegin(Z_Param_OverlappedComponent,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_OtherBodyIndex,Z_Param_bFromSweep,Z_Param_Out_SweepResult);
	P_NATIVE_END;
}
// End Class AMyPlayer Function OnOverlapBegin

// Begin Class AMyPlayer
void AMyPlayer::StaticRegisterNativesAMyPlayer()
{
	UClass* Class = AMyPlayer::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "HitGround", &AMyPlayer::execHitGround },
		{ "OnOverlapBegin", &AMyPlayer::execOnOverlapBegin },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AMyPlayer);
UClass* Z_Construct_UClass_AMyPlayer_NoRegister()
{
	return AMyPlayer::StaticClass();
}
struct Z_Construct_UClass_AMyPlayer_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "MyPlayer.h" },
		{ "ModuleRelativePath", "MyPlayer.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DefaultMappingContext_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "Input" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// INPUT MAPPING & ACTIONS:\n" },
#endif
		{ "ModuleRelativePath", "MyPlayer.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "INPUT MAPPING & ACTIONS:" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MoveInput_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "Input" },
		{ "ModuleRelativePath", "MyPlayer.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RotateInputCW_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "Input" },
		{ "ModuleRelativePath", "MyPlayer.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RotateInputCCW_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "Input" },
		{ "ModuleRelativePath", "MyPlayer.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_JumpInput_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "Input" },
		{ "ModuleRelativePath", "MyPlayer.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InteractInput_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "Input" },
		{ "ModuleRelativePath", "MyPlayer.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GameModeRef_MetaData[] = {
		{ "BlueprintProtected", "" },
		{ "Category", "References" },
		{ "ModuleRelativePath", "MyPlayer.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BoxCollider_MetaData[] = {
		{ "BlueprintProtected", "" },
		{ "Category", "Collision" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "MyPlayer.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HitBoxGround_MetaData[] = {
		{ "BlueprintProtected", "" },
		{ "Category", "Collision" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "MyPlayer.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Mesh_MetaData[] = {
		{ "BlueprintProtected", "" },
		{ "Category", "Mesh" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "MyPlayer.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SpringArm_MetaData[] = {
		{ "BlueprintProtected", "" },
		{ "Category", "Camera" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "MyPlayer.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Camera_MetaData[] = {
		{ "BlueprintProtected", "" },
		{ "Category", "Camera" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "MyPlayer.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Movement_MetaData[] = {
		{ "BlueprintProtected", "" },
		{ "Category", "Movement" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "MyPlayer.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Speed_MetaData[] = {
		{ "BlueprintProtected", "" },
		{ "Category", "Movement" },
		{ "ModuleRelativePath", "MyPlayer.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_JumpForce_MetaData[] = {
		{ "Category", "MyPlayer" },
		{ "ModuleRelativePath", "MyPlayer.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DefaultMappingContext;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MoveInput;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_RotateInputCW;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_RotateInputCCW;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_JumpInput;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InteractInput;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_GameModeRef;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_BoxCollider;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_HitBoxGround;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Mesh;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SpringArm;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Camera;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Movement;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Speed;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_JumpForce;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_AMyPlayer_HitGround, "HitGround" }, // 3230611063
		{ &Z_Construct_UFunction_AMyPlayer_OnOverlapBegin, "OnOverlapBegin" }, // 1431353380
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMyPlayer>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMyPlayer_Statics::NewProp_DefaultMappingContext = { "DefaultMappingContext", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMyPlayer, DefaultMappingContext), Z_Construct_UClass_UInputMappingContext_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DefaultMappingContext_MetaData), NewProp_DefaultMappingContext_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMyPlayer_Statics::NewProp_MoveInput = { "MoveInput", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMyPlayer, MoveInput), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MoveInput_MetaData), NewProp_MoveInput_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMyPlayer_Statics::NewProp_RotateInputCW = { "RotateInputCW", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMyPlayer, RotateInputCW), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RotateInputCW_MetaData), NewProp_RotateInputCW_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMyPlayer_Statics::NewProp_RotateInputCCW = { "RotateInputCCW", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMyPlayer, RotateInputCCW), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RotateInputCCW_MetaData), NewProp_RotateInputCCW_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMyPlayer_Statics::NewProp_JumpInput = { "JumpInput", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMyPlayer, JumpInput), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_JumpInput_MetaData), NewProp_JumpInput_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMyPlayer_Statics::NewProp_InteractInput = { "InteractInput", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMyPlayer, InteractInput), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InteractInput_MetaData), NewProp_InteractInput_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMyPlayer_Statics::NewProp_GameModeRef = { "GameModeRef", nullptr, (EPropertyFlags)0x0020080000030005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMyPlayer, GameModeRef), Z_Construct_UClass_AMyGameModeBase_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GameModeRef_MetaData), NewProp_GameModeRef_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMyPlayer_Statics::NewProp_BoxCollider = { "BoxCollider", nullptr, (EPropertyFlags)0x0020080000090009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMyPlayer, BoxCollider), Z_Construct_UClass_UBoxComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BoxCollider_MetaData), NewProp_BoxCollider_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMyPlayer_Statics::NewProp_HitBoxGround = { "HitBoxGround", nullptr, (EPropertyFlags)0x0020080000090009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMyPlayer, HitBoxGround), Z_Construct_UClass_UBoxComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HitBoxGround_MetaData), NewProp_HitBoxGround_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMyPlayer_Statics::NewProp_Mesh = { "Mesh", nullptr, (EPropertyFlags)0x0020080000080009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMyPlayer, Mesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Mesh_MetaData), NewProp_Mesh_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMyPlayer_Statics::NewProp_SpringArm = { "SpringArm", nullptr, (EPropertyFlags)0x0020080000080009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMyPlayer, SpringArm), Z_Construct_UClass_USpringArmComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SpringArm_MetaData), NewProp_SpringArm_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMyPlayer_Statics::NewProp_Camera = { "Camera", nullptr, (EPropertyFlags)0x0020080000080009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMyPlayer, Camera), Z_Construct_UClass_UCameraComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Camera_MetaData), NewProp_Camera_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMyPlayer_Statics::NewProp_Movement = { "Movement", nullptr, (EPropertyFlags)0x0020080000080009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMyPlayer, Movement), Z_Construct_UClass_UFloatingPawnMovement_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Movement_MetaData), NewProp_Movement_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMyPlayer_Statics::NewProp_Speed = { "Speed", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMyPlayer, Speed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Speed_MetaData), NewProp_Speed_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMyPlayer_Statics::NewProp_JumpForce = { "JumpForce", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMyPlayer, JumpForce), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_JumpForce_MetaData), NewProp_JumpForce_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AMyPlayer_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyPlayer_Statics::NewProp_DefaultMappingContext,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyPlayer_Statics::NewProp_MoveInput,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyPlayer_Statics::NewProp_RotateInputCW,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyPlayer_Statics::NewProp_RotateInputCCW,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyPlayer_Statics::NewProp_JumpInput,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyPlayer_Statics::NewProp_InteractInput,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyPlayer_Statics::NewProp_GameModeRef,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyPlayer_Statics::NewProp_BoxCollider,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyPlayer_Statics::NewProp_HitBoxGround,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyPlayer_Statics::NewProp_Mesh,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyPlayer_Statics::NewProp_SpringArm,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyPlayer_Statics::NewProp_Camera,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyPlayer_Statics::NewProp_Movement,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyPlayer_Statics::NewProp_Speed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyPlayer_Statics::NewProp_JumpForce,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMyPlayer_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AMyPlayer_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_APawn,
	(UObject* (*)())Z_Construct_UPackage__Script_SandBox,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMyPlayer_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AMyPlayer_Statics::ClassParams = {
	&AMyPlayer::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_AMyPlayer_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_AMyPlayer_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMyPlayer_Statics::Class_MetaDataParams), Z_Construct_UClass_AMyPlayer_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AMyPlayer()
{
	if (!Z_Registration_Info_UClass_AMyPlayer.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AMyPlayer.OuterSingleton, Z_Construct_UClass_AMyPlayer_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AMyPlayer.OuterSingleton;
}
template<> SANDBOX_API UClass* StaticClass<AMyPlayer>()
{
	return AMyPlayer::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AMyPlayer);
AMyPlayer::~AMyPlayer() {}
// End Class AMyPlayer

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_pietd_Documents_GitHub_Unreal_Engine_Capstone_SandBox_Source_SandBox_MyPlayer_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AMyPlayer, AMyPlayer::StaticClass, TEXT("AMyPlayer"), &Z_Registration_Info_UClass_AMyPlayer, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AMyPlayer), 1904641504U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_pietd_Documents_GitHub_Unreal_Engine_Capstone_SandBox_Source_SandBox_MyPlayer_h_2767029204(TEXT("/Script/SandBox"),
	Z_CompiledInDeferFile_FID_Users_pietd_Documents_GitHub_Unreal_Engine_Capstone_SandBox_Source_SandBox_MyPlayer_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_pietd_Documents_GitHub_Unreal_Engine_Capstone_SandBox_Source_SandBox_MyPlayer_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
