// Fill out your copyright notice in the Description page of Project Settings.


#include "InteractableActor.h"

// Sets default values
AInteractableActor::AInteractableActor()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	// Create/Setup Mesh
	Mesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Object Mesh"));

	// Create / setup sphere collider
	SphereCollider = CreateDefaultSubobject<USphereComponent>(TEXT("Sphere Collider"));
	SphereCollider->SetSphereRadius(100.0f);
	SphereCollider->OnComponentBeginOverlap.AddDynamic(this, &AInteractableActor::OnOverlapBegin);

	// Attach mesh to collider
	Mesh->SetupAttachment(SphereCollider);
}

// Called when the game starts or when spawned
void AInteractableActor::BeginPlay()
{
	Super::BeginPlay();

}

// Called every frame
void AInteractableActor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}


// Pickup
void AInteractableActor::OnOverlapBegin(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	Mesh->SetSimulatePhysics(false);

	// Check if the overlapping actor is a character
	if (ACharacter* Character = Cast<ACharacter>(OtherActor))
	{
		// Detach the interactable object from the world and make it a child of the character
		this->DetachFromActor(FDetachmentTransformRules::KeepRelativeTransform);
		this->AttachToComponent(Character->GetMesh(), FAttachmentTransformRules::SnapToTargetNotIncludingScale, "ik_hand_gun");

		UE_LOG(LogTemp, Warning, TEXT("Collision"));

		Mesh->SetCollisionEnabled(ECollisionEnabled::NoCollision);

		beingHeld = true;
	}	
}


void AInteractableActor::ThrowObject(float force)
{
	if (beingHeld)
	{	
		//FVector newLocation = Mesh->GetRelativeLocation();
		//// Detach the child actor from its parent
		this->DetachFromActor(FDetachmentTransformRules::KeepWorldTransform);
		//SetActorLocation(newLocation);

		Mesh->SetCollisionEnabled(ECollisionEnabled::QueryAndPhysics);
		Mesh->SetSimulatePhysics(true);
		Mesh->AddImpulseAtLocation(GetVelocity() * force, GetActorLocation());

		beingHeld = false;
	}
}



