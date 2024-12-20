// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"

#include "Components/SphereComponent.h"
#include "Components/StaticMeshComponent.h"
#include "interact.h"

#include "MyDiamond.generated.h"

UCLASS()
class SANDBOX_API AMyDiamond : public AActor, public IInteract
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AMyDiamond();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	virtual void Interact(AMyPlayer* Player) override;

	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable)
	void PickupDiamond(AMyPlayer* Player);

private:
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Colliders", meta = (AllowPrivateAccess = true))
	USphereComponent* SphereCollider;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Mesh", meta = (AllowPrivateAccess = true))
	UStaticMeshComponent* Mesh;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Score", meta = (AllowPrivateAccess))
	int Value = 25;



};
