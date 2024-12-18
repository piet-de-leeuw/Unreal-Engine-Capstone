// Fill out your copyright notice in the Description page of Project Settings.


#include "My2DModeSwitch.h"
#include "Components/BoxComponent.h"
#include "Components/StaticMeshComponent.h"

// Sets default values
AMy2DModeSwitch::AMy2DModeSwitch()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = false;

	BoxCollider = CreateDefaultSubobject<UBoxComponent>(TEXT("Body"));
	RootComponent = BoxCollider;

	Mesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Mesh"));
	Mesh->SetupAttachment(RootComponent);
}

void AMy2DModeSwitch::Interact(AMyPlayer* Player)
{
	FVector SwitchLocation = GetActorLocation();
	FRotator SwitchRotation = GetActorRotation();



	Player->Toggel2DMode(SwitchLocation, SwitchRotation);
}






