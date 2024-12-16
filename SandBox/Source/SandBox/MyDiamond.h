// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"

#include "Components/SphereComponent.h"
#include "Components/StaticMeshComponent.h"

#include "MyDiamond.generated.h"

UCLASS()
class SANDBOX_API AMyDiamond : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AMyDiamond();

private:
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Colliders", meta = (AllowPrivateAccess = true))
	USphereComponent* SphereCollider;

	UPROPERTY(EditAnywhere, Category = "Mesh", meta = (AllowPrivateAccess = true))
	UStaticMeshComponent* Mesh;



};
