// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TeamUp41/TeamUp41GameModeBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTeamUp41GameModeBase() {}
// Cross Module References
	TEAMUP41_API UClass* Z_Construct_UClass_ATeamUp41GameModeBase_NoRegister();
	TEAMUP41_API UClass* Z_Construct_UClass_ATeamUp41GameModeBase();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_TeamUp41();
// End Cross Module References
	void ATeamUp41GameModeBase::StaticRegisterNativesATeamUp41GameModeBase()
	{
	}
	UClass* Z_Construct_UClass_ATeamUp41GameModeBase_NoRegister()
	{
		return ATeamUp41GameModeBase::StaticClass();
	}
	struct Z_Construct_UClass_ATeamUp41GameModeBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ATeamUp41GameModeBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_TeamUp41,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATeamUp41GameModeBase_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "TeamUp41GameModeBase.h" },
		{ "ModuleRelativePath", "TeamUp41GameModeBase.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ATeamUp41GameModeBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ATeamUp41GameModeBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ATeamUp41GameModeBase_Statics::ClassParams = {
		&ATeamUp41GameModeBase::StaticClass,
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
		0x009002ACu,
		METADATA_PARAMS(Z_Construct_UClass_ATeamUp41GameModeBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ATeamUp41GameModeBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ATeamUp41GameModeBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ATeamUp41GameModeBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ATeamUp41GameModeBase, 2709410164);
	template<> TEAMUP41_API UClass* StaticClass<ATeamUp41GameModeBase>()
	{
		return ATeamUp41GameModeBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ATeamUp41GameModeBase(Z_Construct_UClass_ATeamUp41GameModeBase, &ATeamUp41GameModeBase::StaticClass, TEXT("/Script/TeamUp41"), TEXT("ATeamUp41GameModeBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ATeamUp41GameModeBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
