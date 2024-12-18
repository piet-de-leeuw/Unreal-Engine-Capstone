// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"

#include "Interact.h"

#include "My2DModeSwitch.generated.h"

class UBoxComponent;
class UStaticMeshComponent;

UCLASS()
class SANDBOX_API AMy2DModeSwitch : public AActor, public IInteract
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AMy2DModeSwitch();

	virtual void Interact(AMyPlayer* Player) override;

private:
	UPROPERTY(EditAnywhere, Category = "Collider", meta = (AllowPrivateAccess))
	UBoxComponent* BoxCollider;

	UPROPERTY(EditAnywhere, Category = "Mesh", meta = (AllowPrivateAccess))
	UStaticMeshComponent* Mesh;

};
