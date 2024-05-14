// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Todo_Interfaces/AMyGAmeHUD.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAMyGAmeHUD() {}
// Cross Module References
	TODO_INTERFACES_API UClass* Z_Construct_UClass_AMyGameHUD_NoRegister();
	TODO_INTERFACES_API UClass* Z_Construct_UClass_AMyGameHUD();
	ENGINE_API UClass* Z_Construct_UClass_AHUD();
	UPackage* Z_Construct_UPackage__Script_Todo_Interfaces();
// End Cross Module References
	void AMyGameHUD::StaticRegisterNativesAMyGameHUD()
	{
	}
	UClass* Z_Construct_UClass_AMyGameHUD_NoRegister()
	{
		return AMyGameHUD::StaticClass();
	}
	struct Z_Construct_UClass_AMyGameHUD_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AMyGameHUD_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AHUD,
		(UObject* (*)())Z_Construct_UPackage__Script_Todo_Interfaces,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMyGameHUD_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Rendering Actor Input Replication" },
		{ "IncludePath", "AMyGAmeHUD.h" },
		{ "ModuleRelativePath", "AMyGAmeHUD.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AMyGameHUD_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMyGameHUD>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AMyGameHUD_Statics::ClassParams = {
		&AMyGameHUD::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_AMyGameHUD_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AMyGameHUD_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AMyGameHUD()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AMyGameHUD_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AMyGameHUD, 2064026250);
	template<> TODO_INTERFACES_API UClass* StaticClass<AMyGameHUD>()
	{
		return AMyGameHUD::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AMyGameHUD(Z_Construct_UClass_AMyGameHUD, &AMyGameHUD::StaticClass, TEXT("/Script/Todo_Interfaces"), TEXT("AMyGameHUD"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AMyGameHUD);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
