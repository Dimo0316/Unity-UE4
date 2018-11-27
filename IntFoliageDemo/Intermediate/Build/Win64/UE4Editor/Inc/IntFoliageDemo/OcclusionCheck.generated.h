// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UPrimitiveComponent;
#ifdef INTFOLIAGEDEMO_OcclusionCheck_generated_h
#error "OcclusionCheck.generated.h already included, missing '#pragma once' in OcclusionCheck.h"
#endif
#define INTFOLIAGEDEMO_OcclusionCheck_generated_h

#define IntFoliageDemo_Source_IntFoliageDemo_Public_OcclusionCheck_h_13_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execWasRencentRendered) \
	{ \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_PrimitiveComp); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_fTolerance); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->WasRencentRendered(Z_Param_PrimitiveComp,Z_Param_fTolerance); \
		P_NATIVE_END; \
	}


#define IntFoliageDemo_Source_IntFoliageDemo_Public_OcclusionCheck_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execWasRencentRendered) \
	{ \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_PrimitiveComp); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_fTolerance); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->WasRencentRendered(Z_Param_PrimitiveComp,Z_Param_fTolerance); \
		P_NATIVE_END; \
	}


#define IntFoliageDemo_Source_IntFoliageDemo_Public_OcclusionCheck_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUOcclusionCheck(); \
	friend struct Z_Construct_UClass_UOcclusionCheck_Statics; \
public: \
	DECLARE_CLASS(UOcclusionCheck, UActorComponent, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/IntFoliageDemo"), NO_API) \
	DECLARE_SERIALIZER(UOcclusionCheck)


#define IntFoliageDemo_Source_IntFoliageDemo_Public_OcclusionCheck_h_13_INCLASS \
private: \
	static void StaticRegisterNativesUOcclusionCheck(); \
	friend struct Z_Construct_UClass_UOcclusionCheck_Statics; \
public: \
	DECLARE_CLASS(UOcclusionCheck, UActorComponent, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/IntFoliageDemo"), NO_API) \
	DECLARE_SERIALIZER(UOcclusionCheck)


#define IntFoliageDemo_Source_IntFoliageDemo_Public_OcclusionCheck_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UOcclusionCheck(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UOcclusionCheck) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UOcclusionCheck); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UOcclusionCheck); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UOcclusionCheck(UOcclusionCheck&&); \
	NO_API UOcclusionCheck(const UOcclusionCheck&); \
public:


#define IntFoliageDemo_Source_IntFoliageDemo_Public_OcclusionCheck_h_13_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UOcclusionCheck(UOcclusionCheck&&); \
	NO_API UOcclusionCheck(const UOcclusionCheck&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UOcclusionCheck); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UOcclusionCheck); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UOcclusionCheck)


#define IntFoliageDemo_Source_IntFoliageDemo_Public_OcclusionCheck_h_13_PRIVATE_PROPERTY_OFFSET
#define IntFoliageDemo_Source_IntFoliageDemo_Public_OcclusionCheck_h_10_PROLOG
#define IntFoliageDemo_Source_IntFoliageDemo_Public_OcclusionCheck_h_13_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	IntFoliageDemo_Source_IntFoliageDemo_Public_OcclusionCheck_h_13_PRIVATE_PROPERTY_OFFSET \
	IntFoliageDemo_Source_IntFoliageDemo_Public_OcclusionCheck_h_13_RPC_WRAPPERS \
	IntFoliageDemo_Source_IntFoliageDemo_Public_OcclusionCheck_h_13_INCLASS \
	IntFoliageDemo_Source_IntFoliageDemo_Public_OcclusionCheck_h_13_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define IntFoliageDemo_Source_IntFoliageDemo_Public_OcclusionCheck_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	IntFoliageDemo_Source_IntFoliageDemo_Public_OcclusionCheck_h_13_PRIVATE_PROPERTY_OFFSET \
	IntFoliageDemo_Source_IntFoliageDemo_Public_OcclusionCheck_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	IntFoliageDemo_Source_IntFoliageDemo_Public_OcclusionCheck_h_13_INCLASS_NO_PURE_DECLS \
	IntFoliageDemo_Source_IntFoliageDemo_Public_OcclusionCheck_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID IntFoliageDemo_Source_IntFoliageDemo_Public_OcclusionCheck_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
