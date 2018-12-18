// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "FPSAIGuard.generated.h"

class UPawnSensingComponent;

UENUM(BlueprintType)
enum class EAIState : uint8
{
	Idle,
	Supsicious,
	Alerted,
	Patrolling,
	Investigating
};

UCLASS()
class FPSGAME_API AFPSAIGuard : public ACharacter
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	AFPSAIGuard();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	UPROPERTY(VisibleAnywhere, Category = "Components")
	UPawnSensingComponent* PawnSensingComp;

	UFUNCTION()
	void OnPawnSeen(APawn* SeenPawn);

	UFUNCTION()
	void OnNoiseHeard(APawn* NoiseInstegator, const FVector& Location, float Volume);

	FRotator OrignalRotation;
	FTimerHandle TimeHandle_ResetOrientation;

	UFUNCTION()
	void ResetOrientation();

	EAIState GuardState;

	void SetGuardState(EAIState NewState);

	void SetNoiseLocation(FVector NoiseLocation);

	UFUNCTION(BlueprintImplementableEvent, Category = "AI")
	void OnStaeChanged(EAIState NewState);

public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;

protected:
	//To make enemy move/patrol
	/*Letting the gurad patrol an area*/
	UPROPERTY(EditInstanceOnly, Category = "AI")
	bool bPatrol;

	/*First Patrol point*/
	UPROPERTY(EditInstanceOnly, Category = "AI", meta = (EditCondition = "bPatrol"))
	AActor* FirstPatrolPoint;

	/*Second Patrol point*/
	UPROPERTY(EditInstanceOnly, Category = "AI", meta = (EditCondition = "bPatrol"))
	AActor* SecondPatrolPoint;

	//Location of whewre nosie is made
	FVector m_NoiseLocation;

	//The current point the actor is either when moving to or standing at
	AActor* CurentPatrolPoint;

	void MoveToNextPatrolPoint(bool InvestigatingNoise, FVector Location = {0.f, 0.f, 0.f});

	void GetStateAction(EAIState NewState);

	bool m_bInvestigatingNoise;


};
