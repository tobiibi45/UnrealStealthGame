// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.

#include "FPSGameMode.h"
#include "FPSHUD.h"
#include "FPSCharacter.h"
#include "UObject/ConstructorHelpers.h"
#include "Kismet/GameplayStatics.h"

AFPSGameMode::AFPSGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/Blueprints/BP_Player"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

	// use our custom HUD class
	HUDClass = AFPSHUD::StaticClass();
}

void AFPSGameMode::CompleteMission(APawn* InstigatePawn)
{
	if (InstigatePawn)
	{
		InstigatePawn->DisableInput(nullptr);

		if (SpectatingViewPointClass)
		{

			TArray<AActor*> ReturnActors;
			UGameplayStatics::GetAllActorsOfClass(this, SpectatingViewPointClass, ReturnActors);

			//Cjamge view target id any actor found
			if (ReturnActors.Num() > 0)
			{
				AActor* NewViewTarget = ReturnActors[0];

				APlayerController* PC = Cast<APlayerController>(InstigatePawn->GetController());
				if (PC)
				{
					PC->SetViewTargetWithBlend(NewViewTarget, 0.5f, EViewTargetBlendFunction::VTBlend_Cubic);
				}
			}
		}
		else
		{
			UE_LOG(LogTemp, Warning, TEXT("SpectatingViewPointClass is nullptr. Please update GameMode class with valid subclass. Cannot change spectating view"));
		}
	}

	OnMissionCompleted(InstigatePawn);
}
