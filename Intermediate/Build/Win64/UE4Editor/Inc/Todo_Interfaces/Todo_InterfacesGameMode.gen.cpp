// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Todo_Interfaces/Todo_InterfacesGameMode.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTodo_InterfacesGameMode() {}
// Cross Module References
	TODO_INTERFACES_API UClass* Z_Construct_UClass_ATodo_InterfacesGameMode_NoRegister();
	TODO_INTERFACES_API UClass* Z_Construct_UClass_ATodo_InterfacesGameMode();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_Todo_Interfaces();
// End Cross Module References
	void ATodo_InterfacesGameMode::StaticRegisterNativesATodo_InterfacesGameMode()
	{
	}
	UClass* Z_Construct_UClass_ATodo_InterfacesGameMode_NoRegister()
	{
		return ATodo_InterfacesGameMode::StaticClass();
	}
	struct Z_Construct_UClass_ATodo_InterfacesGameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ATodo_InterfacesGameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_Todo_Interfaces,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATodo_InterfacesGameMode_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "Todo_InterfacesGameMode.h" },
		{ "ModuleRelativePath", "Todo_InterfacesGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ATodo_InterfacesGameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ATodo_InterfacesGameMode>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ATodo_InterfacesGameMode_Statics::ClassParams = {
		&ATodo_InterfacesGameMode::StaticClass,
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
		0x008802ACu,
		METADATA_PARAMS(Z_Construct_UClass_ATodo_InterfacesGameMode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ATodo_InterfacesGameMode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ATodo_InterfacesGameMode()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ATodo_InterfacesGameMode_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ATodo_InterfacesGameMode, 1032288724);
	template<> TODO_INTERFACES_API UClass* StaticClass<ATodo_InterfacesGameMode>()
	{
		return ATodo_InterfacesGameMode::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ATodo_InterfacesGameMode(Z_Construct_UClass_ATodo_InterfacesGameMode, &ATodo_InterfacesGameMode::StaticClass, TEXT("/Script/Todo_Interfaces"), TEXT("ATodo_InterfacesGameMode"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ATodo_InterfacesGameMode);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
