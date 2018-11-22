// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "FPSBlackHole.generated.h"

class UStaticMeshComponent;
class USphereComponent;

UCLASS()
class FPSGAME_API AFPSBlackHole : public AActor
{
	GENERATED_BODY()

public:
	// Sets default values for this actor's properties
	AFPSBlackHole();

protected:

	UPROPERTY(VisibleAnywhere, Category = "Components")
		UStaticMeshComponent* MeshComp;

	/* Inner Sphere component for the overlapping components */
	UPROPERTY(VisibleAnywhere, Category = "Components")
		USphereComponent* InnerSphereComp;

	/* Outer sphere pulls components that are physically simulating towards the centre of the actor */
	UPROPERTY(VisibleAnywhere, Category = "Components")
		USphereComponent* OuterSphereComp;

	UFUNCTION()
		void OverLapInnerSphere(UPrimitiveComponent* OverLappedComponent, AActor* OtherActor, UPrimitiveComponent* OhterComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
