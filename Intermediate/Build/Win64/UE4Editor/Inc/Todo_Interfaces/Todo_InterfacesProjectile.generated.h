// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UPrimitiveComponent;
class AActor;
struct FVector;
struct FHitResult;
#ifdef TODO_INTERFACES_Todo_InterfacesProjectile_generated_h
#error "Todo_InterfacesProjectile.generated.h already included, missing '#pragma once' in Todo_InterfacesProjectile.h"
#endif
#define TODO_INTERFACES_Todo_InterfacesProjectile_generated_h

#define Todo_Interfaces_Source_Todo_Interfaces_Todo_InterfacesProjectile_h_15_SPARSE_DATA
#define Todo_Interfaces_Source_Todo_Interfaces_Todo_InterfacesProjectile_h_15_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnHit);


#define Todo_Interfaces_Source_Todo_Interfaces_Todo_InterfacesProjectile_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnHit);


#define Todo_Interfaces_Source_Todo_Interfaces_Todo_InterfacesProjectile_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesATodo_InterfacesProjectile(); \
	friend struct Z_Construct_UClass_ATodo_InterfacesProjectile_Statics; \
public: \
	DECLARE_CLASS(ATodo_InterfacesProjectile, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Todo_Interfaces"), NO_API) \
	DECLARE_SERIALIZER(ATodo_InterfacesProjectile) \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define Todo_Interfaces_Source_Todo_Interfaces_Todo_InterfacesProjectile_h_15_INCLASS \
private: \
	static void StaticRegisterNativesATodo_InterfacesProjectile(); \
	friend struct Z_Construct_UClass_ATodo_InterfacesProjectile_Statics; \
public: \
	DECLARE_CLASS(ATodo_InterfacesProjectile, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Todo_Interfaces"), NO_API) \
	DECLARE_SERIALIZER(ATodo_InterfacesProjectile) \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define Todo_Interfaces_Source_Todo_Interfaces_Todo_InterfacesProjectile_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ATodo_InterfacesProjectile(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ATodo_InterfacesProjectile) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ATodo_InterfacesProjectile); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ATodo_InterfacesProjectile); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ATodo_InterfacesProjectile(ATodo_InterfacesProjectile&&); \
	NO_API ATodo_InterfacesProjectile(const ATodo_InterfacesProjectile&); \
public:


#define Todo_Interfaces_Source_Todo_Interfaces_Todo_InterfacesProjectile_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ATodo_InterfacesProjectile(ATodo_InterfacesProjectile&&); \
	NO_API ATodo_InterfacesProjectile(const ATodo_InterfacesProjectile&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ATodo_InterfacesProjectile); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ATodo_InterfacesProjectile); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ATodo_InterfacesProjectile)


#define Todo_Interfaces_Source_Todo_Interfaces_Todo_InterfacesProjectile_h_15_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__ProjectileMesh() { return STRUCT_OFFSET(ATodo_InterfacesProjectile, ProjectileMesh); } \
	FORCEINLINE static uint32 __PPO__ProjectileMovement() { return STRUCT_OFFSET(ATodo_InterfacesProjectile, ProjectileMovement); }


#define Todo_Interfaces_Source_Todo_Interfaces_Todo_InterfacesProjectile_h_12_PROLOG
#define Todo_Interfaces_Source_Todo_Interfaces_Todo_InterfacesProjectile_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Todo_Interfaces_Source_Todo_Interfaces_Todo_InterfacesProjectile_h_15_PRIVATE_PROPERTY_OFFSET \
	Todo_Interfaces_Source_Todo_Interfaces_Todo_InterfacesProjectile_h_15_SPARSE_DATA \
	Todo_Interfaces_Source_Todo_Interfaces_Todo_InterfacesProjectile_h_15_RPC_WRAPPERS \
	Todo_Interfaces_Source_Todo_Interfaces_Todo_InterfacesProjectile_h_15_INCLASS \
	Todo_Interfaces_Source_Todo_Interfaces_Todo_InterfacesProjectile_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Todo_Interfaces_Source_Todo_Interfaces_Todo_InterfacesProjectile_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Todo_Interfaces_Source_Todo_Interfaces_Todo_InterfacesProjectile_h_15_PRIVATE_PROPERTY_OFFSET \
	Todo_Interfaces_Source_Todo_Interfaces_Todo_InterfacesProjectile_h_15_SPARSE_DATA \
	Todo_Interfaces_Source_Todo_Interfaces_Todo_InterfacesProjectile_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	Todo_Interfaces_Source_Todo_Interfaces_Todo_InterfacesProjectile_h_15_INCLASS_NO_PURE_DECLS \
	Todo_Interfaces_Source_Todo_Interfaces_Todo_InterfacesProjectile_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> TODO_INTERFACES_API UClass* StaticClass<class ATodo_InterfacesProjectile>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Todo_Interfaces_Source_Todo_Interfaces_Todo_InterfacesProjectile_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
