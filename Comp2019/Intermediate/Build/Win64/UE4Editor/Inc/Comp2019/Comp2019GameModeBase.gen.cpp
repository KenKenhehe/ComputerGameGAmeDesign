// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Comp2019/Comp2019GameModeBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeComp2019GameModeBase() {}
// Cross Module References
	COMP2019_API UClass* Z_Construct_UClass_AComp2019GameModeBase_NoRegister();
	COMP2019_API UClass* Z_Construct_UClass_AComp2019GameModeBase();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_Comp2019();
// End Cross Module References
	void AComp2019GameModeBase::StaticRegisterNativesAComp2019GameModeBase()
	{
	}
	UClass* Z_Construct_UClass_AComp2019GameModeBase_NoRegister()
	{
		return AComp2019GameModeBase::StaticClass();
	}
	struct Z_Construct_UClass_AComp2019GameModeBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AComp2019GameModeBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_Comp2019,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AComp2019GameModeBase_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "Comp2019GameModeBase.h" },
		{ "ModuleRelativePath", "Comp2019GameModeBase.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AComp2019GameModeBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AComp2019GameModeBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AComp2019GameModeBase_Statics::ClassParams = {
		&AComp2019GameModeBase::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x009002A8u,
		nullptr, 0,
		nullptr, 0,
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_AComp2019GameModeBase_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_AComp2019GameModeBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AComp2019GameModeBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AComp2019GameModeBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AComp2019GameModeBase, 1657154215);
	static FCompiledInDefer Z_CompiledInDefer_UClass_AComp2019GameModeBase(Z_Construct_UClass_AComp2019GameModeBase, &AComp2019GameModeBase::StaticClass, TEXT("/Script/Comp2019"), TEXT("AComp2019GameModeBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AComp2019GameModeBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
