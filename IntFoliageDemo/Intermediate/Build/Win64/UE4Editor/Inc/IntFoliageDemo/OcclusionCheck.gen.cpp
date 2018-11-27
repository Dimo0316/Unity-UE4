// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "IntFoliageDemo/Public/OcclusionCheck.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOcclusionCheck() {}
// Cross Module References
	INTFOLIAGEDEMO_API UClass* Z_Construct_UClass_UOcclusionCheck_NoRegister();
	INTFOLIAGEDEMO_API UClass* Z_Construct_UClass_UOcclusionCheck();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	UPackage* Z_Construct_UPackage__Script_IntFoliageDemo();
	INTFOLIAGEDEMO_API UFunction* Z_Construct_UFunction_UOcclusionCheck_WasRencentRendered();
	ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
// End Cross Module References
	void UOcclusionCheck::StaticRegisterNativesUOcclusionCheck()
	{
		UClass* Class = UOcclusionCheck::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "WasRencentRendered", &UOcclusionCheck::execWasRencentRendered },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UOcclusionCheck_WasRencentRendered_Statics
	{
		struct OcclusionCheck_eventWasRencentRendered_Parms
		{
			UPrimitiveComponent* PrimitiveComp;
			float fTolerance;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_fTolerance;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PrimitiveComp_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PrimitiveComp;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UOcclusionCheck_WasRencentRendered_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((OcclusionCheck_eventWasRencentRendered_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOcclusionCheck_WasRencentRendered_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Bool, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(OcclusionCheck_eventWasRencentRendered_Parms), &Z_Construct_UFunction_UOcclusionCheck_WasRencentRendered_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UOcclusionCheck_WasRencentRendered_Statics::NewProp_fTolerance = { UE4CodeGen_Private::EPropertyClass::Float, "fTolerance", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(OcclusionCheck_eventWasRencentRendered_Parms, fTolerance), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOcclusionCheck_WasRencentRendered_Statics::NewProp_PrimitiveComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOcclusionCheck_WasRencentRendered_Statics::NewProp_PrimitiveComp = { UE4CodeGen_Private::EPropertyClass::Object, "PrimitiveComp", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000080080, 1, nullptr, STRUCT_OFFSET(OcclusionCheck_eventWasRencentRendered_Parms, PrimitiveComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UOcclusionCheck_WasRencentRendered_Statics::NewProp_PrimitiveComp_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UOcclusionCheck_WasRencentRendered_Statics::NewProp_PrimitiveComp_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOcclusionCheck_WasRencentRendered_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOcclusionCheck_WasRencentRendered_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOcclusionCheck_WasRencentRendered_Statics::NewProp_fTolerance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOcclusionCheck_WasRencentRendered_Statics::NewProp_PrimitiveComp,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOcclusionCheck_WasRencentRendered_Statics::Function_MetaDataParams[] = {
		{ "CPP_Default_fTolerance", "0.200000" },
		{ "ModuleRelativePath", "Public/OcclusionCheck.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UOcclusionCheck_WasRencentRendered_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOcclusionCheck, "WasRencentRendered", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x54080401, sizeof(OcclusionCheck_eventWasRencentRendered_Parms), Z_Construct_UFunction_UOcclusionCheck_WasRencentRendered_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UOcclusionCheck_WasRencentRendered_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOcclusionCheck_WasRencentRendered_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UOcclusionCheck_WasRencentRendered_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOcclusionCheck_WasRencentRendered()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UOcclusionCheck_WasRencentRendered_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UOcclusionCheck_NoRegister()
	{
		return UOcclusionCheck::StaticClass();
	}
	struct Z_Construct_UClass_UOcclusionCheck_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UOcclusionCheck_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_IntFoliageDemo,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UOcclusionCheck_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UOcclusionCheck_WasRencentRendered, "WasRencentRendered" }, // 642378525
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOcclusionCheck_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "OcclusionCheck.h" },
		{ "ModuleRelativePath", "Public/OcclusionCheck.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UOcclusionCheck_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOcclusionCheck>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UOcclusionCheck_Statics::ClassParams = {
		&UOcclusionCheck::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x00B000A0u,
		FuncInfo, ARRAY_COUNT(FuncInfo),
		nullptr, 0,
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_UOcclusionCheck_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UOcclusionCheck_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UOcclusionCheck()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UOcclusionCheck_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UOcclusionCheck, 2033664379);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UOcclusionCheck(Z_Construct_UClass_UOcclusionCheck, &UOcclusionCheck::StaticClass, TEXT("/Script/IntFoliageDemo"), TEXT("UOcclusionCheck"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UOcclusionCheck);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
