// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FPSGame/Public/Challenges/FPSBlackHole.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFPSBlackHole() {}
// Cross Module References
	FPSGAME_API UClass* Z_Construct_UClass_AFPSBlackHole_NoRegister();
	FPSGAME_API UClass* Z_Construct_UClass_AFPSBlackHole();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_FPSGame();
	FPSGAME_API UFunction* Z_Construct_UFunction_AFPSBlackHole_OverLapInnerSphere();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHitResult();
	ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USphereComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
// End Cross Module References
	void AFPSBlackHole::StaticRegisterNativesAFPSBlackHole()
	{
		UClass* Class = AFPSBlackHole::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OverLapInnerSphere", &AFPSBlackHole::execOverLapInnerSphere },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AFPSBlackHole_OverLapInnerSphere_Statics
	{
		struct FPSBlackHole_eventOverLapInnerSphere_Parms
		{
			UPrimitiveComponent* OverLappedComponent;
			AActor* OtherActor;
			UPrimitiveComponent* OhterComp;
			int32 OtherBodyIndex;
			bool bFromSweep;
			FHitResult SweepResult;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SweepResult_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SweepResult;
		static void NewProp_bFromSweep_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bFromSweep;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_OtherBodyIndex;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OhterComp_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OhterComp;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OtherActor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OverLappedComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OverLappedComponent;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFPSBlackHole_OverLapInnerSphere_Statics::NewProp_SweepResult_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AFPSBlackHole_OverLapInnerSphere_Statics::NewProp_SweepResult = { UE4CodeGen_Private::EPropertyClass::Struct, "SweepResult", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010008008000182, 1, nullptr, STRUCT_OFFSET(FPSBlackHole_eventOverLapInnerSphere_Parms, SweepResult), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(Z_Construct_UFunction_AFPSBlackHole_OverLapInnerSphere_Statics::NewProp_SweepResult_MetaData, ARRAY_COUNT(Z_Construct_UFunction_AFPSBlackHole_OverLapInnerSphere_Statics::NewProp_SweepResult_MetaData)) };
	void Z_Construct_UFunction_AFPSBlackHole_OverLapInnerSphere_Statics::NewProp_bFromSweep_SetBit(void* Obj)
	{
		((FPSBlackHole_eventOverLapInnerSphere_Parms*)Obj)->bFromSweep = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AFPSBlackHole_OverLapInnerSphere_Statics::NewProp_bFromSweep = { UE4CodeGen_Private::EPropertyClass::Bool, "bFromSweep", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(FPSBlackHole_eventOverLapInnerSphere_Parms), &Z_Construct_UFunction_AFPSBlackHole_OverLapInnerSphere_Statics::NewProp_bFromSweep_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AFPSBlackHole_OverLapInnerSphere_Statics::NewProp_OtherBodyIndex = { UE4CodeGen_Private::EPropertyClass::Int, "OtherBodyIndex", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(FPSBlackHole_eventOverLapInnerSphere_Parms, OtherBodyIndex), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFPSBlackHole_OverLapInnerSphere_Statics::NewProp_OhterComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AFPSBlackHole_OverLapInnerSphere_Statics::NewProp_OhterComp = { UE4CodeGen_Private::EPropertyClass::Object, "OhterComp", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000080080, 1, nullptr, STRUCT_OFFSET(FPSBlackHole_eventOverLapInnerSphere_Parms, OhterComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_AFPSBlackHole_OverLapInnerSphere_Statics::NewProp_OhterComp_MetaData, ARRAY_COUNT(Z_Construct_UFunction_AFPSBlackHole_OverLapInnerSphere_Statics::NewProp_OhterComp_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AFPSBlackHole_OverLapInnerSphere_Statics::NewProp_OtherActor = { UE4CodeGen_Private::EPropertyClass::Object, "OtherActor", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(FPSBlackHole_eventOverLapInnerSphere_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFPSBlackHole_OverLapInnerSphere_Statics::NewProp_OverLappedComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AFPSBlackHole_OverLapInnerSphere_Statics::NewProp_OverLappedComponent = { UE4CodeGen_Private::EPropertyClass::Object, "OverLappedComponent", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000080080, 1, nullptr, STRUCT_OFFSET(FPSBlackHole_eventOverLapInnerSphere_Parms, OverLappedComponent), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_AFPSBlackHole_OverLapInnerSphere_Statics::NewProp_OverLappedComponent_MetaData, ARRAY_COUNT(Z_Construct_UFunction_AFPSBlackHole_OverLapInnerSphere_Statics::NewProp_OverLappedComponent_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFPSBlackHole_OverLapInnerSphere_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFPSBlackHole_OverLapInnerSphere_Statics::NewProp_SweepResult,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFPSBlackHole_OverLapInnerSphere_Statics::NewProp_bFromSweep,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFPSBlackHole_OverLapInnerSphere_Statics::NewProp_OtherBodyIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFPSBlackHole_OverLapInnerSphere_Statics::NewProp_OhterComp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFPSBlackHole_OverLapInnerSphere_Statics::NewProp_OtherActor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFPSBlackHole_OverLapInnerSphere_Statics::NewProp_OverLappedComponent,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFPSBlackHole_OverLapInnerSphere_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Challenges/FPSBlackHole.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFPSBlackHole_OverLapInnerSphere_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFPSBlackHole, "OverLapInnerSphere", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00480401, sizeof(FPSBlackHole_eventOverLapInnerSphere_Parms), Z_Construct_UFunction_AFPSBlackHole_OverLapInnerSphere_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AFPSBlackHole_OverLapInnerSphere_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFPSBlackHole_OverLapInnerSphere_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFPSBlackHole_OverLapInnerSphere_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFPSBlackHole_OverLapInnerSphere()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFPSBlackHole_OverLapInnerSphere_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AFPSBlackHole_NoRegister()
	{
		return AFPSBlackHole::StaticClass();
	}
	struct Z_Construct_UClass_AFPSBlackHole_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OuterSphereComp_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OuterSphereComp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InnerSphereComp_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InnerSphereComp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MeshComp_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MeshComp;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AFPSBlackHole_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_FPSGame,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AFPSBlackHole_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AFPSBlackHole_OverLapInnerSphere, "OverLapInnerSphere" }, // 2070224503
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFPSBlackHole_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Challenges/FPSBlackHole.h" },
		{ "ModuleRelativePath", "Public/Challenges/FPSBlackHole.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFPSBlackHole_Statics::NewProp_OuterSphereComp_MetaData[] = {
		{ "Category", "Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Challenges/FPSBlackHole.h" },
		{ "ToolTip", "Outer sphere pulls components that are physically simulating towards the centre of the actor" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFPSBlackHole_Statics::NewProp_OuterSphereComp = { UE4CodeGen_Private::EPropertyClass::Object, "OuterSphereComp", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x00200800000a0009, 1, nullptr, STRUCT_OFFSET(AFPSBlackHole, OuterSphereComp), Z_Construct_UClass_USphereComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AFPSBlackHole_Statics::NewProp_OuterSphereComp_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFPSBlackHole_Statics::NewProp_OuterSphereComp_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFPSBlackHole_Statics::NewProp_InnerSphereComp_MetaData[] = {
		{ "Category", "Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Challenges/FPSBlackHole.h" },
		{ "ToolTip", "Inner Sphere component for the overlapping components" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFPSBlackHole_Statics::NewProp_InnerSphereComp = { UE4CodeGen_Private::EPropertyClass::Object, "InnerSphereComp", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x00200800000a0009, 1, nullptr, STRUCT_OFFSET(AFPSBlackHole, InnerSphereComp), Z_Construct_UClass_USphereComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AFPSBlackHole_Statics::NewProp_InnerSphereComp_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFPSBlackHole_Statics::NewProp_InnerSphereComp_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFPSBlackHole_Statics::NewProp_MeshComp_MetaData[] = {
		{ "Category", "Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Challenges/FPSBlackHole.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFPSBlackHole_Statics::NewProp_MeshComp = { UE4CodeGen_Private::EPropertyClass::Object, "MeshComp", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x00200800000a0009, 1, nullptr, STRUCT_OFFSET(AFPSBlackHole, MeshComp), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AFPSBlackHole_Statics::NewProp_MeshComp_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFPSBlackHole_Statics::NewProp_MeshComp_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AFPSBlackHole_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFPSBlackHole_Statics::NewProp_OuterSphereComp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFPSBlackHole_Statics::NewProp_InnerSphereComp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFPSBlackHole_Statics::NewProp_MeshComp,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AFPSBlackHole_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AFPSBlackHole>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AFPSBlackHole_Statics::ClassParams = {
		&AFPSBlackHole::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x009000A0u,
		FuncInfo, ARRAY_COUNT(FuncInfo),
		Z_Construct_UClass_AFPSBlackHole_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UClass_AFPSBlackHole_Statics::PropPointers),
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_AFPSBlackHole_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_AFPSBlackHole_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AFPSBlackHole()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AFPSBlackHole_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AFPSBlackHole, 1247965959);
	static FCompiledInDefer Z_CompiledInDefer_UClass_AFPSBlackHole(Z_Construct_UClass_AFPSBlackHole, &AFPSBlackHole::StaticClass, TEXT("/Script/FPSGame"), TEXT("AFPSBlackHole"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AFPSBlackHole);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
