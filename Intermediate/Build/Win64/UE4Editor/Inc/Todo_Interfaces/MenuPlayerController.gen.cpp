// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Todo_Interfaces/MenuPlayerController.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMenuPlayerController() {}
// Cross Module References
	TODO_INTERFACES_API UClass* Z_Construct_UClass_AMenuPlayerController_NoRegister();
	TODO_INTERFACES_API UClass* Z_Construct_UClass_AMenuPlayerController();
	ENGINE_API UClass* Z_Construct_UClass_APlayerController();
	UPackage* Z_Construct_UPackage__Script_Todo_Interfaces();
// End Cross Module References
	void AMenuPlayerController::StaticRegisterNativesAMenuPlayerController()
	{
	}
	UClass* Z_Construct_UClass_AMenuPlayerController_NoRegister()
	{
		return AMenuPlayerController::StaticClass();
	}
	struct Z_Construct_UClass_AMenuPlayerController_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AMenuPlayerController_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APlayerController,
		(UObject* (*)())Z_Construct_UPackage__Script_Todo_Interfaces,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMenuPlayerController_Statics::Class_MetaDataParams[] = {
		{ "Comment", "// Clase para detectar cuando el usuario desea interactuar con el menu\n" },
		{ "HideCategories", "Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "MenuPlayerController.h" },
		{ "ModuleRelativePath", "MenuPlayerController.h" },
		{ "ToolTip", "Clase para detectar cuando el usuario desea interactuar con el menu" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AMenuPlayerController_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMenuPlayerController>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AMenuPlayerController_Statics::ClassParams = {
		&AMenuPlayerController::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_AMenuPlayerController_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AMenuPlayerController_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AMenuPlayerController()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AMenuPlayerController_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AMenuPlayerController, 1044082802);
	template<> TODO_INTERFACES_API UClass* StaticClass<AMenuPlayerController>()
	{
		return AMenuPlayerController::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AMenuPlayerController(Z_Construct_UClass_AMenuPlayerController, &AMenuPlayerController::StaticClass, TEXT("/Script/Todo_Interfaces"), TEXT("AMenuPlayerController"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AMenuPlayerController);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
