// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TGitTest3GameMode.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeTGitTest3GameMode() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
TGITTEST3_API UClass* Z_Construct_UClass_ATGitTest3GameMode();
TGITTEST3_API UClass* Z_Construct_UClass_ATGitTest3GameMode_NoRegister();
UPackage* Z_Construct_UPackage__Script_TGitTest3();
// ********** End Cross Module References **********************************************************

// ********** Begin Class ATGitTest3GameMode *******************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_ATGitTest3GameMode;
UClass* ATGitTest3GameMode::GetPrivateStaticClass()
{
	using TClass = ATGitTest3GameMode;
	if (!Z_Registration_Info_UClass_ATGitTest3GameMode.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("TGitTest3GameMode"),
			Z_Registration_Info_UClass_ATGitTest3GameMode.InnerSingleton,
			StaticRegisterNativesATGitTest3GameMode,
			sizeof(TClass),
			alignof(TClass),
			TClass::StaticClassFlags,
			TClass::StaticClassCastFlags(),
			TClass::StaticConfigName(),
			(UClass::ClassConstructorType)InternalConstructor<TClass>,
			(UClass::ClassVTableHelperCtorCallerType)InternalVTableHelperCtorCaller<TClass>,
			UOBJECT_CPPCLASS_STATICFUNCTIONS_FORCLASS(TClass),
			&TClass::Super::StaticClass,
			&TClass::WithinClass::StaticClass
		);
	}
	return Z_Registration_Info_UClass_ATGitTest3GameMode.InnerSingleton;
}
UClass* Z_Construct_UClass_ATGitTest3GameMode_NoRegister()
{
	return ATGitTest3GameMode::GetPrivateStaticClass();
}
struct Z_Construct_UClass_ATGitTest3GameMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n *  Simple GameMode for a third person game\n */" },
#endif
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "TGitTest3GameMode.h" },
		{ "ModuleRelativePath", "TGitTest3GameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Simple GameMode for a third person game" },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Class ATGitTest3GameMode constinit property declarations ***********************
// ********** End Class ATGitTest3GameMode constinit property declarations *************************
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ATGitTest3GameMode>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_ATGitTest3GameMode_Statics
UObject* (*const Z_Construct_UClass_ATGitTest3GameMode_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AGameModeBase,
	(UObject* (*)())Z_Construct_UPackage__Script_TGitTest3,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ATGitTest3GameMode_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ATGitTest3GameMode_Statics::ClassParams = {
	&ATGitTest3GameMode::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x008002ADu,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ATGitTest3GameMode_Statics::Class_MetaDataParams), Z_Construct_UClass_ATGitTest3GameMode_Statics::Class_MetaDataParams)
};
void ATGitTest3GameMode::StaticRegisterNativesATGitTest3GameMode()
{
}
UClass* Z_Construct_UClass_ATGitTest3GameMode()
{
	if (!Z_Registration_Info_UClass_ATGitTest3GameMode.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ATGitTest3GameMode.OuterSingleton, Z_Construct_UClass_ATGitTest3GameMode_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ATGitTest3GameMode.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, ATGitTest3GameMode);
ATGitTest3GameMode::~ATGitTest3GameMode() {}
// ********** End Class ATGitTest3GameMode *********************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Unreal_Projects_TGit_Test_Tourtise_Git_Test_Repo_TGitTest3_Source_TGitTest3_TGitTest3GameMode_h__Script_TGitTest3_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ATGitTest3GameMode, ATGitTest3GameMode::StaticClass, TEXT("ATGitTest3GameMode"), &Z_Registration_Info_UClass_ATGitTest3GameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ATGitTest3GameMode), 2778792005U) },
	};
}; // Z_CompiledInDeferFile_FID_Unreal_Projects_TGit_Test_Tourtise_Git_Test_Repo_TGitTest3_Source_TGitTest3_TGitTest3GameMode_h__Script_TGitTest3_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_Projects_TGit_Test_Tourtise_Git_Test_Repo_TGitTest3_Source_TGitTest3_TGitTest3GameMode_h__Script_TGitTest3_926514028{
	TEXT("/Script/TGitTest3"),
	Z_CompiledInDeferFile_FID_Unreal_Projects_TGit_Test_Tourtise_Git_Test_Repo_TGitTest3_Source_TGitTest3_TGitTest3GameMode_h__Script_TGitTest3_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_Projects_TGit_Test_Tourtise_Git_Test_Repo_TGitTest3_Source_TGitTest3_TGitTest3GameMode_h__Script_TGitTest3_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
