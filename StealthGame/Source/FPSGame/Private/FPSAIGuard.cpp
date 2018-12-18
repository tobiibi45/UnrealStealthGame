// Fill out your copyright notice in the Description page of Project Settings.

#include "FPSAIGuard.h"
#include "Perception/PawnSensingComponent.h"
#include "DrawDebugHelpers.h"
#include "TimerManager.h"
#include "Kismet/GameplayStatics.h"
#include "FPSGameMode.h"
#include "Blueprint/AIBlueprintHelperLibrary.h"

// Sets default values
AFPSAIGuard::AFPSAIGuard()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	PawnSensingComp = CreateDefaultSubobject<UPawnSensingComponent>(TEXT("PawnSensingComp"));

	PawnSensingComp->OnSeePawn.AddDynamic(this, &AFPSAIGuard::OnPawnSeen);

	PawnSensingComp->OnHearNoise.AddDynamic(this, &AFPSAIGuard::OnNoiseHeard);

	GuardState = EAIState::Patrolling;
}

// Called when the game starts or when spawned
void AFPSAIGuard::BeginPlay()
{
	Super::BeginPlay();

	OrignalRotation = GetActorRotation();

	m_NoiseLocation = {0.f,0.f,0.f};

	m_bInvestigatingNoise = false;

	if(bPatrol)
	{
		//MoveToNextPatrolPoint();
		GetStateAction(EAIState::Patrolling);
	}
	else
	{
		GetStateAction(EAIState::Idle);
	}
}

void AFPSAIGuard::OnPawnSeen(APawn* SeenPawn)
{
	if(SeenPawn == nullptr)
	{
		return;
	}

	DrawDebugSphere(GetWorld(), SeenPawn->GetActorLocation(), 32.0f, 12, FColor::Red, false, 10.0f);

	AFPSGameMode* GM = Cast<AFPSGameMode>(GetWorld()->GetAuthGameMode());
	if (GM)
	{
		GM->CompleteMission(SeenPawn, false);
	}

	GetStateAction(EAIState::Alerted);
}

void AFPSAIGuard::OnNoiseHeard(APawn* NoiseInstegator, const FVector& Location, float Volume)
{
	if (GuardState == EAIState::Alerted)
	{
		return;
	}

	DrawDebugSphere(GetWorld(), Location, 32.0f, 12, FColor::Green, false, 10.0f);


	FVector Direction = Location - GetActorLocation();
	Direction.Normalize();

	FRotator NewLokkAt = FRotationMatrix::MakeFromX(Direction).Rotator(); //Pitch is up, Yaw is sdieways.
	NewLokkAt.Pitch = 0.0f;
	NewLokkAt.Roll = 0.0f;

	SetActorRotation(NewLokkAt);

	GetWorldTimerManager().ClearTimer(TimeHandle_ResetOrientation);

	GetWorldTimerManager().SetTimer(TimeHandle_ResetOrientation, this, &AFPSAIGuard::ResetOrientation , 3.0f);

	SetNoiseLocation(Location);
	GetStateAction(EAIState::Supsicious);
}


void AFPSAIGuard::ResetOrientation()
{
	if (GuardState == EAIState::Alerted)
	{
		return;
	}

	SetActorRotation(OrignalRotation);

	GetStateAction(EAIState::Idle);

	if (bPatrol)
	{
		GetStateAction(EAIState::Patrolling);
	}
}

void AFPSAIGuard::SetGuardState(EAIState NewState)
{
	if(GuardState == NewState)
	{
		return;
	}

	GuardState = NewState;

	OnStaeChanged(GuardState);
}

void AFPSAIGuard::SetNoiseLocation(FVector NoiseLocation)
{
	if(m_NoiseLocation == NoiseLocation)
	{
		return;
	}

	m_NoiseLocation = NoiseLocation;
}

// Called every frame
void AFPSAIGuard::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	//Patrol Goal Checks
	if (CurentPatrolPoint)
	{
		FVector Delta = GetActorLocation() - CurentPatrolPoint->GetActorLocation();
		float DistanceToGoal = Delta.Size();

		//Check if we are within 50 units of our goal, if so - pick a new patrol point
		if (DistanceToGoal < 80)
		{
			GetStateAction(EAIState::Patrolling);
		}
	}

	if (m_bInvestigatingNoise)
	{
		FVector Delta = GetActorLocation() - m_NoiseLocation;
		float DistanceToGoal = Delta.Size();

		//Check if we are within 50 units of our goal, if so - pick a new patrol point
		if (DistanceToGoal < 80)
		{
			GetStateAction(EAIState::Patrolling);
		}
	}


}

void AFPSAIGuard::MoveToNextPatrolPoint(bool InvestigatingNoise, FVector Location )
{
	if (!InvestigatingNoise)
	{
		//Assign next patrol point
		if (CurentPatrolPoint == nullptr || CurentPatrolPoint == SecondPatrolPoint)
		{
			CurentPatrolPoint = FirstPatrolPoint;
		}
		else
		{
			CurentPatrolPoint = SecondPatrolPoint;
		}

		UAIBlueprintHelperLibrary::SimpleMoveToActor(GetController(), CurentPatrolPoint);
	}
	else
	{
		CurentPatrolPoint = nullptr;
		m_bInvestigatingNoise = true;
		UAIBlueprintHelperLibrary::SimpleMoveToLocation(GetController(), Location);
	}

}

void AFPSAIGuard::GetStateAction(EAIState NewState)
{
	SetGuardState(NewState);
	//Stop Moving when pawn is seen
	AController* controller = GetController();
	switch (NewState)
	{
	case EAIState::Idle:
		if (controller)
		{
			controller->StopMovement();
		}
		break;
	case EAIState::Alerted:
		if (controller)
		{
			controller->StopMovement();
		}
		break;
	case EAIState::Supsicious:
		if (controller)
		{
			controller->StopMovement();
		}
		GetStateAction(EAIState::Investigating);
		break;
	case EAIState::Patrolling:
		m_bInvestigatingNoise = false;
		MoveToNextPatrolPoint(false);
		break;
	case EAIState::Investigating:
		MoveToNextPatrolPoint(true, m_NoiseLocation);
		break;
	}
}
