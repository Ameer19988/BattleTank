// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "TankAIController.h"
PRAGMA_DISABLE_OPTIMIZATION
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTankAIController() {}
// Cross Module References
	BATTLETANK_API UClass* Z_Construct_UClass_ATankAIController_NoRegister();
	BATTLETANK_API UClass* Z_Construct_UClass_ATankAIController();
	AIMODULE_API UClass* Z_Construct_UClass_AAIController();
	UPackage* Z_Construct_UPackage__Script_BattleTank();
// End Cross Module References
	void ATankAIController::StaticRegisterNativesATankAIController()
	{
	}
	UClass* Z_Construct_UClass_ATankAIController_NoRegister()
	{
		return ATankAIController::StaticClass();
	}
	UClass* Z_Construct_UClass_ATankAIController()
	{
		static UClass* OuterClass = NULL;
		if (!OuterClass)
		{
			Z_Construct_UClass_AAIController();
			Z_Construct_UPackage__Script_BattleTank();
			OuterClass = ATankAIController::StaticClass();
			if (!(OuterClass->ClassFlags & CLASS_Constructed))
			{
				UObjectForceRegistration(OuterClass);
				OuterClass->ClassFlags |= (EClassFlags)0x20900280u;


				static TCppClassTypeInfo<TCppClassTypeTraits<ATankAIController> > StaticCppClassTypeInfo;
				OuterClass->SetCppTypeInfo(&StaticCppClassTypeInfo);
				OuterClass->StaticLink();
#if WITH_METADATA
				UMetaData* MetaData = OuterClass->GetOutermost()->GetMetaData();
				MetaData->SetValue(OuterClass, TEXT("HideCategories"), TEXT("Collision Rendering Utilities|Transformation"));
				MetaData->SetValue(OuterClass, TEXT("IncludePath"), TEXT("TankAIController.h"));
				MetaData->SetValue(OuterClass, TEXT("ModuleRelativePath"), TEXT("TankAIController.h"));
#endif
			}
		}
		check(OuterClass->GetClass());
		return OuterClass;
	}
	IMPLEMENT_CLASS(ATankAIController, 540172992);
	static FCompiledInDefer Z_CompiledInDefer_UClass_ATankAIController(Z_Construct_UClass_ATankAIController, &ATankAIController::StaticClass, TEXT("/Script/BattleTank"), TEXT("ATankAIController"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ATankAIController);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
PRAGMA_ENABLE_OPTIMIZATION
