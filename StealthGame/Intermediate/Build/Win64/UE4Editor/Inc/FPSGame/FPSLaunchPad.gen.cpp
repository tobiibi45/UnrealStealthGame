// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FPSGame/Public/Challenges/FPSLaunchPad.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFPSLaunchPad() {}
// Cross Module References
	FPSGAME_API UClass* Z_Construct_UClass_AFPSLaunchPad_NoRegister();
	FPSGAME_API UClass* Z_Construct_UClass_AFPSLaunchPad();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_FPSGame();
	FPSGAME_API UFunction* Z_Construct_UFunction_AFPSLaunchPad_OverlapLaunchPad();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHitResult();
	ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UParticleSystem_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UBoxComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
// End Cross Module References
	void AFPSLaunchPad::StaticRegisterNativesAFPSLaunchPad()
	{
		UClass* Class = AFPSLaunchPad::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OverlapLaunchPad", &AFPSLaunchPad::execOverlapLaunchPad },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AFPSLaunchPad_OverlapLaunchPad_Statics
	{
		struct FPSLaunchPad_eventOverlapLaunchPad_Parms
		{
			UPrimitiveComponent* OverLappedComponent;
			AActor* OtherActor;
			UPrimitiveComponent* OtherComp;
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
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OtherComp_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OtherComp;
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFPSLaunchPad_OverlapLaunchPad_Statics::NewProp_SweepResult_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AFPSLaunchPad_OverlapLaunchPad_Statics::NewProp_SweepResult = { UE4CodeGen_Private::EPropertyClass::Struct, "SweepResult", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010008008000182, 1, nullptr, STRUCT_OFFSET(FPSLaunchPad_eventOverlapLaunchPad_Parms, SweepResult), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(Z_Construct_UFunction_AFPSLaunchPad_OverlapLaunchPad_Statics::NewProp_SweepResult_MetaData, ARRAY_COUNT(Z_Construct_UFunction_AFPSLaunchPad_OverlapLaunchPad_Statics::NewProp_SweepResult_MetaData)) };
	void Z_Construct_UFunction_AFPSLaunchPad_OverlapLaunchPad_Statics::NewProp_bFromSweep_SetBit(void* Obj)
	{
		((FPSLaunchPad_eventOverlapLaunchPad_Parms*)Obj)->bFromSweep = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AFPSLaunchPad_OverlapLaunchPad_Statics::NewProp_bFromSweep = { UE4CodeGen_Private::EPropertyClass::Bool, "bFromSweep", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(FPSLaunchPad_eventOverlapLaunchPad_Parms), &Z_Construct_UFunction_AFPSLaunchPad_OverlapLaunchPad_Statics::NewProp_bFromSweep_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AFPSLaunchPad_OverlapLaunchPad_Statics::NewProp_OtherBodyIndex = { UE4CodeGen_Private::EPropertyClass::Int, "OtherBodyIndex", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(FPSLaunchPad_eventOverlapLaunchPad_Parms, OtherBodyIndex), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFPSLaunchPad_OverlapLaunchPad_Statics::NewProp_OtherComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AFPSLaunchPad_OverlapLaunchPad_Statics::NewProp_OtherComp = { UE4CodeGen_Private::EPropertyClass::Object, "OtherComp", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000080080, 1, nullptr, STRUCT_OFFSET(FPSLaunchPad_eventOverlapLaunchPad_Parms, OtherComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_AFPSLaunchPad_OverlapLaunchPad_Statics::NewProp_OtherComp_MetaData, ARRAY_COUNT(Z_Construct_UFunction_AFPSLaunchPad_OverlapLaunchPad_Statics::NewProp_OtherComp_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AFPSLaunchPad_OverlapLaunchPad_Statics::NewProp_OtherActor = { UE4CodeGen_Private::EPropertyClass::Object, "OtherActor", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(FPSLaunchPad_eventOverlapLaunchPad_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFPSLaunchPad_OverlapLaunchPad_Statics::NewProp_OverLappedComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AFPSLaunchPad_OverlapLaunchPad_Statics::NewProp_OverLappedComponent = { UE4CodeGen_Private::EPropertyClass::Object, "OverLappedComponent", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000080080, 1, nullptr, STRUCT_OFFSET(FPSLaunchPad_eventOverlapLaunchPad_Parms, OverLappedComponent), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_AFPSLaunchPad_OverlapLaunchPad_Statics::NewProp_OverLappedComponent_MetaData, ARRAY_COUNT(Z_Construct_UFunction_AFPSLaunchPad_OverlapLaunchPad_Statics::NewProp_OverLappedComponent_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFPSLaunchPad_OverlapLaunchPad_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFPSLaunchPad_OverlapLaunchPad_Statics::NewProp_SweepResult,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFPSLaunchPad_OverlapLaunchPad_Statics::NewProp_bFromSweep,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFPSLaunchPad_OverlapLaunchPad_Statics::NewProp_OtherBodyIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFPSLaunchPad_OverlapLaunchPad_Statics::NewProp_OtherComp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFPSLaunchPad_OverlapLaunchPad_Statics::NewProp_OtherActor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFPSLaunchPad_OverlapLaunchPad_Statics::NewProp_OverLappedComponent,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFPSLaunchPad_OverlapLaunchPad_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Challenges/FPSLaunchPad.h" },
		{ "ToolTip", "Marked with ufunction to bind overlap event" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFPSLaunchPad_OverlapLaunchPad_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFPSLaunchPad, "OverlapLaunchPad", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00480401, sizeof(FPSLaunchPad_eventOverlapLaunchPad_Parms), Z_Construct_UFunction_AFPSLaunchPad_OverlapLaunchPad_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AFPSLaunchPad_OverlapLaunchPad_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFPSLaunchPad_OverlapLaunchPad_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFPSLaunchPad_OverlapLaunchPad_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFPSLaunchPad_OverlapLaunchPad()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFPSLaunchPad_OverlapLaunchPad_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AFPSLaunchPad_NoRegister()
	{
		return AFPSLaunchPad::StaticClass();
	}
	struct Z_Construct_UClass_AFPSLaunchPad_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ActivateLaunchPadEffect_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ActivateLaunchPadEffect;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LaunchPitchAngle_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_LaunchPitchAngle;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LaunchStrength_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_LaunchStrength;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OverlapComp_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OverlapComp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MeshComp_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MeshComp;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AFPSLaunchPad_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_FPSGame,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AFPSLaunchPad_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AFPSLaunchPad_OverlapLaunchPad, "OverlapLaunchPad" }, // 2650433148
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFPSLaunchPad_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Challenges/FPSLaunchPad.h" },
		{ "ModuleRelativePath", "Public/Challenges/FPSLaunchPad.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFPSLaunchPad_Statics::NewProp_ActivateLaunchPadEffect_MetaData[] = {
		{ "Category", "LaunchPad" },
		{ "ModuleRelativePath", "Public/Challenges/FPSLaunchPad.h" },
		{ "ToolTip", "Effect to play when activating laucnhpad" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFPSLaunchPad_Statics::NewProp_ActivateLaunchPadEffect = { UE4CodeGen_Private::EPropertyClass::Object, "ActivateLaunchPadEffect", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0020080000010001, 1, nullptr, STRUCT_OFFSET(AFPSLaunchPad, ActivateLaunchPadEffect), Z_Construct_UClass_UParticleSystem_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AFPSLaunchPad_Statics::NewProp_ActivateLaunchPadEffect_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFPSLaunchPad_Statics::NewProp_ActivateLaunchPadEffect_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFPSLaunchPad_Statics::NewProp_LaunchPitchAngle_MetaData[] = {
		{ "Category", "LaunchPad" },
		{ "ModuleRelativePath", "Public/Challenges/FPSLaunchPad.h" },
		{ "ToolTip", "Angle added on top of actor rotation to lauch the character.\n       Marked \"EditInstanceOnly\" to allow in-level editingg of this property per instance." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AFPSLaunchPad_Statics::NewProp_LaunchPitchAngle = { UE4CodeGen_Private::EPropertyClass::Float, "LaunchPitchAngle", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0020080000000801, 1, nullptr, STRUCT_OFFSET(AFPSLaunchPad, LaunchPitchAngle), METADATA_PARAMS(Z_Construct_UClass_AFPSLaunchPad_Statics::NewProp_LaunchPitchAngle_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFPSLaunchPad_Statics::NewProp_LaunchPitchAngle_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFPSLaunchPad_Statics::NewProp_LaunchStrength_MetaData[] = {
		{ "Category", "LaunchPad" },
		{ "ModuleRelativePath", "Public/Challenges/FPSLaunchPad.h" },
		{ "ToolTip", "Total Impulse added to the character on overlap.\n       Marked \"EditInstanceOnly\" to allow in-level editingg of this property per instance." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AFPSLaunchPad_Statics::NewProp_LaunchStrength = { UE4CodeGen_Private::EPropertyClass::Float, "LaunchStrength", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0020080000000801, 1, nullptr, STRUCT_OFFSET(AFPSLaunchPad, LaunchStrength), METADATA_PARAMS(Z_Construct_UClass_AFPSLaunchPad_Statics::NewProp_LaunchStrength_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFPSLaunchPad_Statics::NewProp_LaunchStrength_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFPSLaunchPad_Statics::NewProp_OverlapComp_MetaData[] = {
		{ "Category", "Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Challenges/FPSLaunchPad.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFPSLaunchPad_Statics::NewProp_OverlapComp = { UE4CodeGen_Private::EPropertyClass::Object, "OverlapComp", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x00200800000a0009, 1, nullptr, STRUCT_OFFSET(AFPSLaunchPad, OverlapComp), Z_Construct_UClass_UBoxComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AFPSLaunchPad_Statics::NewProp_OverlapComp_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFPSLaunchPad_Statics::NewProp_OverlapComp_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFPSLaunchPad_Statics::NewProp_MeshComp_MetaData[] = {
		{ "Category", "Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Challenges/FPSLaunchPad.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFPSLaunchPad_Statics::NewProp_MeshComp = { UE4CodeGen_Private::EPropertyClass::Object, "MeshComp", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x00200800000a0009, 1, nullptr, STRUCT_OFFSET(AFPSLaunchPad, MeshComp), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AFPSLaunchPad_Statics::NewProp_MeshComp_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFPSLaunchPad_Statics::NewProp_MeshComp_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AFPSLaunchPad_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFPSLaunchPad_Statics::NewProp_ActivateLaunchPadEffect,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFPSLaunchPad_Statics::NewProp_LaunchPitchAngle,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFPSLaunchPad_Statics::NewProp_LaunchStrength,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFPSLaunchPad_Statics::NewProp_OverlapComp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFPSLaunchPad_Statics::NewProp_MeshComp,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AFPSLaunchPad_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AFPSLaunchPad>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AFPSLaunchPad_Statics::ClassParams = {
		&AFPSLaunchPad::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x009000A0u,
		FuncInfo, ARRAY_COUNT(FuncInfo),
		Z_Construct_UClass_AFPSLaunchPad_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UClass_AFPSLaunchPad_Statics::PropPointers),
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_AFPSLaunchPad_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_AFPSLaunchPad_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AFPSLaunchPad()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AFPSLaunchPad_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AFPSLaunchPad, 27460768);
	static FCompiledInDefer Z_CompiledInDefer_UClass_AFPSLaunchPad(Z_Construct_UClass_AFPSLaunchPad, &AFPSLaunchPad::StaticClass, TEXT("/Script/FPSGame"), TEXT("AFPSLaunchPad"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AFPSLaunchPad);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
