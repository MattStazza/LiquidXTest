// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/World.h"
#include "Engine/EngineTypes.h"
#include "GameFramework/Actor.h"
#include "Components/SphereComponent.h"
#include "GameFramework/Character.h"
#include "InteractableActor.generated.h"

UCLASS()
class LIQUIDX_TEST_API AInteractableActor : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AInteractableActor();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	// Mesh
	UPROPERTY(EditAnywhere)
	UStaticMeshComponent* Mesh;

	// Sphere Collider
	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "Interactable")
	USphereComponent* SphereCollider;

	// Interactable Settings
	UPROPERTY(EditAnywhere, Category = "Interactable")
	bool beingHeld;
	UPROPERTY(EditAnywhere, Category = "Interactable")
	ACharacter* MyCharacter;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	UFUNCTION()
	void OnOverlapBegin(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);

	UFUNCTION(BlueprintCallable)
	void ThrowObject(float force);

	void PopulateArray(int n);
	void PrintArray(TArray<AActor*> Array);
};
