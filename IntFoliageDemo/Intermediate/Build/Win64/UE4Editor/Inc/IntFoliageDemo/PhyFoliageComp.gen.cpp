// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "IntFoliageDemo/Public/PhyFoliageComp.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePhyFoliageComp() {}
// Cross Module References
	INTFOLIAGEDEMO_API UClass* Z_Construct_UClass_UPhyFoliageComp_NoRegister();
	INTFOLIAGEDEMO_API UClass* Z_Construct_UClass_UPhyFoliageComp();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	UPackage* Z_Construct_UPackage__Script_IntFoliageDemo();
	INTFOLIAGEDEMO_API UFunction* Z_Construct_UFunction_UPhyFoliageComp_CheckSpawn();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
// End Cross Module References
	void UPhyFoliageComp::StaticRegisterNativesUPhyFoliageComp()
	{
		UClass* Class = UPhyFoliageComp::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CheckSpawn", &UPhyFoliageComp::execCheckSpawn },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UPhyFoliageComp_CheckSpawn_Statics
	{
		struct PhyFoliageComp_eventCheckSpawn_Parms
		{
			TArray<AActor*> Dyns;
			FVector WorldLoc;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_WorldLoc;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Dyns;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Dyns_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UPhyFoliageComp_CheckSpawn_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((PhyFoliageComp_eventCheckSpawn_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPhyFoliageComp_CheckSpawn_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Bool, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(PhyFoliageComp_eventCheckSpawn_Parms), &Z_Construct_UFunction_UPhyFoliageComp_CheckSpawn_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPhyFoliageComp_CheckSpawn_Statics::NewProp_WorldLoc = { UE4CodeGen_Private::EPropertyClass::Struct, "WorldLoc", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(PhyFoliageComp_eventCheckSpawn_Parms, WorldLoc), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UPhyFoliageComp_CheckSpawn_Statics::NewProp_Dyns = { UE4CodeGen_Private::EPropertyClass::Array, "Dyns", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(PhyFoliageComp_eventCheckSpawn_Parms, Dyns), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPhyFoliageComp_CheckSpawn_Statics::NewProp_Dyns_Inner = { UE4CodeGen_Private::EPropertyClass::Object, "Dyns", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPhyFoliageComp_CheckSpawn_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPhyFoliageComp_CheckSpawn_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPhyFoliageComp_CheckSpawn_Statics::NewProp_WorldLoc,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPhyFoliageComp_CheckSpawn_Statics::NewProp_Dyns,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPhyFoliageComp_CheckSpawn_Statics::NewProp_Dyns_Inner,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPhyFoliageComp_CheckSpawn_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PhyFoliageComp.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPhyFoliageComp_CheckSpawn_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPhyFoliageComp, "CheckSpawn", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x54880401, sizeof(PhyFoliageComp_eventCheckSpawn_Parms), Z_Construct_UFunction_UPhyFoliageComp_CheckSpawn_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UPhyFoliageComp_CheckSpawn_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPhyFoliageComp_CheckSpawn_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UPhyFoliageComp_CheckSpawn_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPhyFoliageComp_CheckSpawn()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPhyFoliageComp_CheckSpawn_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UPhyFoliageComp_NoRegister()
	{
		return UPhyFoliageComp::StaticClass();
	}
	struct Z_Construct_UClass_UPhyFoliageComp_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPhyFoliageComp_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_IntFoliageDemo,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UPhyFoliageComp_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UPhyFoliageComp_CheckSpawn, "CheckSpawn" }, // 787078546
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPhyFoliageComp_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "PhyFoliageComp.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/PhyFoliageComp.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPhyFoliageComp_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPhyFoliageComp>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UPhyFoliageComp_Statics::ClassParams = {
		&UPhyFoliageComp::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x00B000A0u,
		FuncInfo, ARRAY_COUNT(FuncInfo),
		nullptr, 0,
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_UPhyFoliageComp_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UPhyFoliageComp_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPhyFoliageComp()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UPhyFoliageComp_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UPhyFoliageComp, 269263203);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UPhyFoliageComp(Z_Construct_UClass_UPhyFoliageComp, &UPhyFoliageComp::StaticClass, TEXT("/Script/IntFoliageDemo"), TEXT("UPhyFoliageComp"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPhyFoliageComp);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
