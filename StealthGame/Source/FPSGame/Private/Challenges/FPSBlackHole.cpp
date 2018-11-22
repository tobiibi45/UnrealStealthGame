// Fill out your copyright notice in the Description page of Project Settings.

#include "Challenges/FPSBlackHole.h"
#include "Components/SphereComponent.h"
#include "Components/StaticMeshComponent.h"

// Sets default values
AFPSBlackHole::AFPSBlackHole()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	MeshComp = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("MeshComp")); //Initialises the Mesh component that is arround the sphere. This is what we visually see
	MeshComp->SetCollisionEnabled(ECollisionEnabled::NoCollision); //Sets the Mesh to nt check for any collision
	RootComponent = MeshComp; //Sets the MesH Component as the root component.


	InnerSphereComp = CreateDefaultSubobject<USphereComponent>(TEXT("InnerSphereComp")); //Initialises the Sphere component
	InnerSphereComp->SetSphereRadius(100);
	InnerSphereComp->SetupAttachment(MeshComp); //Sets the Sphere component as a child of the Mesh Component. So if mesh component moves, so does the sphere.

	InnerSphereComp->OnComponentBeginOverlap.AddDynamic(this, &AFPSBlackHole::OverLapInnerSphere); //Binds to the event

	OuterSphereComp = CreateDefaultSubobject<USphereComponent>(TEXT("OuterSphereComp")); //Initialises the Sphere component
	OuterSphereComp->SetSphereRadius(3000);
	OuterSphereComp->SetupAttachment(MeshComp); //Sets the Sphere component as a child of the Mesh Component. So if mesh component moves, so does the sphere.

}

void AFPSBlackHole::OverLapInnerSphere(UPrimitiveComponent* OverLappedComponent, AActor* OtherActor,
	UPrimitiveComponent* OhterComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	if(OtherActor)
	{
		OtherActor->Destroy();
	}
}

// Called every frame
void AFPSBlackHole::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	//Find all components that can collide and may be physically simulating
	//Primitive components means anything that has a transform and has the potenital to be physically simulated
	TArray<UPrimitiveComponent*> OverLappingComps;
	OuterSphereComp->GetOverlappingComponents(OverLappingComps);

	for(int32 i = 0; i < OverLappingComps.Num(); i++)
	{
		UPrimitiveComponent* PrimComp = OverLappingComps[i];
		if(PrimComp && PrimComp->IsSimulatingPhysics())
		{
			//the compoenent we are looking for! It needs to be simulating in order to apply forces

			const float SphereRadius = OuterSphereComp->GetScaledSphereRadius();
			const float ForceStrength = -2000; //Negative value to make it pull towards the origin instead of away

			PrimComp->AddRadialForce(GetActorLocation(), SphereRadius, ForceStrength, ERadialImpulseFalloff::RIF_Constant, true);
		}
	}
}

