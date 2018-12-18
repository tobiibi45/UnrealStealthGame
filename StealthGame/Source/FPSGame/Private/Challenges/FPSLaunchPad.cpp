// Fill out your copyright notice in the Description page of Project Settings.

#include "Challenges/FPSLaunchPad.h"
#include "Components/BoxComponent.h"
#include "Components/StaticMeshComponent.h"
#include "Components/ActorComponent.h"
#include "GameFramework/Character.h"
#include "Kismet/GameplayStatics.h"

// Sets default values
AFPSLaunchPad::AFPSLaunchPad()
{

	OverlapComp = CreateDefaultSubobject<UBoxComponent>(TEXT("OverlapComp"));
	OverlapComp->SetBoxExtent(FVector(757, 75, 50));
	RootComponent = OverlapComp;

	MeshComp = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("MeshComp"));
	MeshComp->SetupAttachment(RootComponent);

	//Bind to event
	OverlapComp->OnComponentBeginOverlap.AddDynamic(this, &AFPSLaunchPad::OverlapLaunchPad);

	LaunchStrength = 1500;
	LaunchPitchAngle = 35;
}

void AFPSLaunchPad::OverlapLaunchPad(UPrimitiveComponent* OverLappedComponent, AActor* OtherActor,
	UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	//Make rotator withg our specified "pitch" and convert to a direction vector *  intensity
	FRotator LaunchDirection = GetActorRotation();
	LaunchDirection.Pitch += LaunchPitchAngle;

	FVector LaunchVelocity = LaunchDirection.Vector() * LaunchStrength;

	ACharacter* OtherCharacter = Cast<ACharacter>(OtherActor);
	if(OtherCharacter)
	{
		//Launch Player! Both booleans give conisintent launch velocity by ignoring the current player velocity
		OtherCharacter->LaunchCharacter(LaunchVelocity, true, true);

		//Spawn FX
		UGameplayStatics::SpawnEmitterAtLocation(GetWorld(), ActivateLaunchPadEffect, GetActorLocation());
	}
	//Did not overlap a player, so check if it's a physics simulating actor we launch
	else if (OtherComp && OtherComp->IsSimulatingPhysics())
	{
		OtherComp->AddImpulse(LaunchVelocity, NAME_None, true);

		//Spawn FX
		UGameplayStatics::SpawnEmitterAtLocation(GetWorld(), ActivateLaunchPadEffect, GetActorLocation());
	}
}


