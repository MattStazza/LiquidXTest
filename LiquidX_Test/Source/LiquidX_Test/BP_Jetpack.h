// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Components/SphereComponent.h"
#include "Engine/EngineTypes.h"
#include "GameFramework/Character.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "Components/SkeletalMeshComponent.h"
#include "Engine/SkeletalMeshSocket.h"
#include "Engine/World.h"
#include "Components/InputComponent.h"
#include "BP_Jetpack.generated.h"

UCLASS()
class LIQUIDX_TEST_API ABP_Jetpack : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ABP_Jetpack();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	// Mesh
	UPROPERTY(EditAnywhere)
	UStaticMeshComponent* JetpackMesh;

	// Sphere Collider
	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "Interactable")
	USphereComponent* SphereCollider;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Jetpack Settings
	UPROPERTY(EditAnywhere, Category = "Jump Settings")
	bool JetpackAttached;
	UPROPERTY(EditAnywhere, Category = "Jump Settings")
	bool usingJetpack;
	UPROPERTY(EditAnywhere, Category = "Jump Settings")
	float JetpackSpeed;
	// Character Movement Reference
	UPROPERTY(EditAnywhere, Category = "Jump Settings")
	UCharacterMovementComponent* MyCharacterMovement;

	UFUNCTION(BlueprintCallable)
	bool GetJetpackAttached();

	UFUNCTION(BlueprintCallable)
	void ToggleJetpack(bool active);

	UFUNCTION(BlueprintCallable)
	void ActivateJetpack();

	UFUNCTION()
	void OnOverlapBegin(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
};
