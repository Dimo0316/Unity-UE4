// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
struct FVector;
#ifdef INTFOLIAGEDEMO_PhyFoliageComp_generated_h
#error "PhyFoliageComp.generated.h already included, missing '#pragma once' in PhyFoliageComp.h"
#endif
#define INTFOLIAGEDEMO_PhyFoliageComp_generated_h

#define IntFoliageDemo_Source_IntFoliageDemo_Public_PhyFoliageComp_h_13_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execCheckSpawn) \
	{ \
		P_GET_TARRAY(AActor*,Z_Param_Dyns); \
		P_GET_STRUCT(FVector,Z_Param_WorldLoc); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->CheckSpawn(Z_Param_Dyns,Z_Param_WorldLoc); \
		P_NATIVE_END; \
	}


#define IntFoliageDemo_Source_IntFoliageDemo_Public_PhyFoliageComp_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execCheckSpawn) \
	{ \
		P_GET_TARRAY(AActor*,Z_Param_Dyns); \
		P_GET_STRUCT(FVector,Z_Param_WorldLoc); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->CheckSpawn(Z_Param_Dyns,Z_Param_WorldLoc); \
		P_NATIVE_END; \
	}


#define IntFoliageDemo_Source_IntFoliageDemo_Public_PhyFoliageComp_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPhyFoliageComp(); \
	friend struct Z_Construct_UClass_UPhyFoliageComp_Statics; \
public: \
	DECLARE_CLASS(UPhyFoliageComp, UActorComponent, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/IntFoliageDemo"), NO_API) \
	DECLARE_SERIALIZER(UPhyFoliageComp)


#define IntFoliageDemo_Source_IntFoliageDemo_Public_PhyFoliageComp_h_13_INCLASS \
private: \
	static void StaticRegisterNativesUPhyFoliageComp(); \
	friend struct Z_Construct_UClass_UPhyFoliageComp_Statics; \
public: \
	DECLARE_CLASS(UPhyFoliageComp, UActorComponent, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/IntFoliageDemo"), NO_API) \
	DECLARE_SERIALIZER(UPhyFoliageComp)


#define IntFoliageDemo_Source_IntFoliageDemo_Public_PhyFoliageComp_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPhyFoliageComp(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPhyFoliageComp) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPhyFoliageComp); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPhyFoliageComp); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UPhyFoliageComp(UPhyFoliageComp&&); \
	NO_API UPhyFoliageComp(const UPhyFoliageComp&); \
public:


#define IntFoliageDemo_Source_IntFoliageDemo_Public_PhyFoliageComp_h_13_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UPhyFoliageComp(UPhyFoliageComp&&); \
	NO_API UPhyFoliageComp(const UPhyFoliageComp&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPhyFoliageComp); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPhyFoliageComp); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UPhyFoliageComp)


#define IntFoliageDemo_Source_IntFoliageDemo_Public_PhyFoliageComp_h_13_PRIVATE_PROPERTY_OFFSET
#define IntFoliageDemo_Source_IntFoliageDemo_Public_PhyFoliageComp_h_10_PROLOG
#define IntFoliageDemo_Source_IntFoliageDemo_Public_PhyFoliageComp_h_13_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	IntFoliageDemo_Source_IntFoliageDemo_Public_PhyFoliageComp_h_13_PRIVATE_PROPERTY_OFFSET \
	IntFoliageDemo_Source_IntFoliageDemo_Public_PhyFoliageComp_h_13_RPC_WRAPPERS \
	IntFoliageDemo_Source_IntFoliageDemo_Public_PhyFoliageComp_h_13_INCLASS \
	IntFoliageDemo_Source_IntFoliageDemo_Public_PhyFoliageComp_h_13_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define IntFoliageDemo_Source_IntFoliageDemo_Public_PhyFoliageComp_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	IntFoliageDemo_Source_IntFoliageDemo_Public_PhyFoliageComp_h_13_PRIVATE_PROPERTY_OFFSET \
	IntFoliageDemo_Source_IntFoliageDemo_Public_PhyFoliageComp_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	IntFoliageDemo_Source_IntFoliageDemo_Public_PhyFoliageComp_h_13_INCLASS_NO_PURE_DECLS \
	IntFoliageDemo_Source_IntFoliageDemo_Public_PhyFoliageComp_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID IntFoliageDemo_Source_IntFoliageDemo_Public_PhyFoliageComp_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
