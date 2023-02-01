// Fill out your copyright notice in the Description page of Project Settings.


#include "BP_Jetpack.h"

// Sets default values
ABP_Jetpack::ABP_Jetpack()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	// Create Mesh
	JetpackMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("JetpackMesh"));
	JetpackMesh->SetCollisionEnabled(ECollisionEnabled::NoCollision);

	// Create / setup Interactable Sphere
	SphereCollider = CreateDefaultSubobject<USphereComponent>(TEXT("Sphere Collider"));
	SphereCollider->SetSphereRadius(100.0f);
	SphereCollider->OnComponentBeginOverlap.AddDynamic(this, &ABP_Jetpack::OnOverlapBegin);

	// Attach Collider to jetpack mesh
	SphereCollider->SetupAttachment(JetpackMesh);

	// Create Character Movement Reference
	MyCharacterMovement = CreateDefaultSubobject<UCharacterMovementComponent>(TEXT("Player Character"));


}

// Called when the game starts or when spawned
void ABP_Jetpack::BeginPlay()
{
	Super::BeginPlay();

	JetpackAttached = false;
	JetpackSpeed = 1500;
}

// Called every frame
void ABP_Jetpack::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	if (usingJetpack) {
		ActivateJetpack();
	}
}


// Attach Jetpack to player
void ABP_Jetpack::OnOverlapBegin(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	// Check if the overlapping actor is a character
	if (ACharacter* Character = Cast<ACharacter>(OtherActor))
	{
		// Detach the interactable object from the world and make it a child of the character
		this->DetachFromActor(FDetachmentTransformRules::KeepRelativeTransform);
		this->AttachToComponent(Character->GetMesh(), FAttachmentTransformRules::SnapToTargetNotIncludingScale, "spine_02");

		UE_LOG(LogTemp, Warning, TEXT("Jetpack attached"));
		JetpackAttached = true;

		// Get Characrter's Movement Component
		MyCharacterMovement = Character->GetCharacterMovement();
	}
}





bool ABP_Jetpack::GetJetpackAttached()
{
	return JetpackAttached;
}

void ABP_Jetpack::ToggleJetpack(bool active)
{
	usingJetpack = active;
}

void ABP_Jetpack::ActivateJetpack()
{
	MyCharacterMovement->AddImpulse(FVector(0.0f, 0.0f, 1.0f * JetpackSpeed));
}








