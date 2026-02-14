// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTGitTest3_init() {}
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");	TGITTEST3_API UFunction* Z_Construct_UDelegateFunction_TGitTest3_OnEnemyDied__DelegateSignature();
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_TGitTest3;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_TGitTest3()
	{
		if (!Z_Registration_Info_UPackage__Script_TGitTest3.OuterSingleton)
		{
		static UObject* (*const SingletonFuncArray[])() = {
			(UObject* (*)())Z_Construct_UDelegateFunction_TGitTest3_OnEnemyDied__DelegateSignature,
		};
		static const UECodeGen_Private::FPackageParams PackageParams = {
			"/Script/TGitTest3",
			SingletonFuncArray,
			UE_ARRAY_COUNT(SingletonFuncArray),
			PKG_CompiledIn | 0x00000000,
			0xFF97559B,
			0xFD86FC5B,
			METADATA_PARAMS(0, nullptr)
		};
		UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_TGitTest3.OuterSingleton, PackageParams);
	}
	return Z_Registration_Info_UPackage__Script_TGitTest3.OuterSingleton;
}
static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_TGitTest3(Z_Construct_UPackage__Script_TGitTest3, TEXT("/Script/TGitTest3"), Z_Registration_Info_UPackage__Script_TGitTest3, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0xFF97559B, 0xFD86FC5B));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
