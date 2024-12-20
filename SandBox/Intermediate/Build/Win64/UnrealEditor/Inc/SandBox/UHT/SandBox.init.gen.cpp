// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSandBox_init() {}
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_SandBox;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_SandBox()
	{
		if (!Z_Registration_Info_UPackage__Script_SandBox.OuterSingleton)
		{
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/SandBox",
				nullptr,
				0,
				PKG_CompiledIn | 0x00000000,
				0xA26EC8F5,
				0xE0C78D70,
				METADATA_PARAMS(0, nullptr)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_SandBox.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_SandBox.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_SandBox(Z_Construct_UPackage__Script_SandBox, TEXT("/Script/SandBox"), Z_Registration_Info_UPackage__Script_SandBox, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0xA26EC8F5, 0xE0C78D70));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
