// Fill out your copyright notice in the Description page of Project Settings.

#include "FPSObjectiveActor.h"
#include "Components/StaticMeshComponent.h"
#include "Components/SphereComponent.h"
#include "Kismet/GameplayStatics.h"
#include "FPSCharacter.h"


// Sets default values
AFPSObjectiveActor::AFPSObjectiveActor()
{

	MeshComp = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("MeshComp")); //Initialises the Mesh component that is arround the sphere. This is what we visually see
	MeshComp->SetCollisionEnabled(ECollisionEnabled::NoCollision); //Sets the Mesh to nt check for any collision
	RootComponent = MeshComp; //Sets the MesH Component as the root component.


	SphereComp = CreateDefaultSubobject<USphereComponent>(TEXT("SphereComp")); //Initialises the Sphere component
	SphereComp->SetCollisionEnabled(ECollisionEnabled::QueryOnly); //Just queries if a collision is detected
	SphereComp->SetCollisionResponseToAllChannels(ECR_Ignore); //Ignores queries from all game objects
	SphereComp->SetCollisionResponseToChannel(ECC_Pawn, ECR_Overlap); //Checks the query only when the player collides and overlaps
	SphereComp->SetupAttachment(MeshComp); //Sets the Sphere component as a child of the Mesh Component. So if mesh component moves, so does the sphere.
}

// Called when the game starts or when spawned
void AFPSObjectiveActor::BeginPlay()
{
	Super::BeginPlay();

	PlayEffects();
}

//Called for spawning particle effects
void AFPSObjectiveActor::PlayEffects()
{
	UGameplayStatics::SpawnEmitterAtLocation(this, PickupFX, GetActorLocation());
}

void AFPSObjectiveActor::NotifyActorBeginOverlap(AActor* OtherActor)
{
	Super::NotifyActorBeginOverlap(OtherActor);

	PlayEffects();

	AFPSCharacter* MyCharacter = Cast<AFPSCharacter>(OtherActor); //Makes it so its just my character is overlapping

	if(MyCharacter)
	{
		if(MyCharacter->InsertItemInIventory("Sphere", 1))
		{
			MyCharacter->bIsCarryingObjective = true;
		}

		Destroy();
	}
}

