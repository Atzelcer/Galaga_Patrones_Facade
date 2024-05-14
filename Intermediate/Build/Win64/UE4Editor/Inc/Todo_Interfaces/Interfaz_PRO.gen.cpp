// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Todo_Interfaces/Interfaz_PRO.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInterfaz_PRO() {}
// Cross Module References
	TODO_INTERFACES_API UClass* Z_Construct_UClass_AInterfaz_PRO_NoRegister();
	TODO_INTERFACES_API UClass* Z_Construct_UClass_AInterfaz_PRO();
	ENGINE_API UClass* Z_Construct_UClass_AGameStateBase();
	UPackage* Z_Construct_UPackage__Script_Todo_Interfaces();
// End Cross Module References
	void AInterfaz_PRO::StaticRegisterNativesAInterfaz_PRO()
	{
	}
	UClass* Z_Construct_UClass_AInterfaz_PRO_NoRegister()
	{
		return AInterfaz_PRO::StaticClass();
	}
	struct Z_Construct_UClass_AInterfaz_PRO_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AInterfaz_PRO_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameStateBase,
		(UObject* (*)())Z_Construct_UPackage__Script_Todo_Interfaces,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AInterfaz_PRO_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "Interfaz_PRO.h" },
		{ "ModuleRelativePath", "Interfaz_PRO.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AInterfaz_PRO_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AInterfaz_PRO>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AInterfaz_PRO_Statics::ClassParams = {
		&AInterfaz_PRO::StaticClass,
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
		0x009002A4u,
		METADATA_PARAMS(Z_Construct_UClass_AInterfaz_PRO_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AInterfaz_PRO_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AInterfaz_PRO()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AInterfaz_PRO_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AInterfaz_PRO, 1330181166);
	template<> TODO_INTERFACES_API UClass* StaticClass<AInterfaz_PRO>()
	{
		return AInterfaz_PRO::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AInterfaz_PRO(Z_Construct_UClass_AInterfaz_PRO, &AInterfaz_PRO::StaticClass, TEXT("/Script/Todo_Interfaces"), TEXT("AInterfaz_PRO"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AInterfaz_PRO);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
