// Fill out your copyright notice in the Description page of Project Settings.


#include "MyDiamond.h"

// Sets default values
AMyDiamond::AMyDiamond()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = false;

	SphereCollider = CreateDefaultSubobject<USphereComponent>(TEXT("SphereCollider"));
	RootComponent = SphereCollider;

	Mesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Mesh"));
	Mesh->SetupAttachment(RootComponent);



}

void AMyDiamond::BeginPlay()
{
	Super::BeginPlay();

}

