// Fill out your copyright notice in the Description page of Project Settings.

#pragma once


#include "CoreMinimal.h"
#include "GameFramework/Pawn.h"

#include "Components/BoxComponent.h"
#include "Components/StaticMeshComponent.h"
#include "EnhancedInputSubsystems.h"
#include "InputActionValue.h"
#include "EnhancedInputComponent.h"
#include "Engine/LocalPlayer.h"
#include "GameFramework/SpringArmComponent.h"
#include "Camera/CameraComponent.h"
#include "GameFramework/FloatingPawnMovement.h"
#include "Misc/App.h"

#include "MyPlayer.generated.h"

class AMyGameModeBase;

UCLASS()
class SANDBOX_API AMyPlayer : public APawn
{
	GENERATED_BODY()

public:
	// Sets default values for this pawn's properties
	AMyPlayer();

	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	// INPUT MAPPING & ACTIONS:
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Input", meta = (AllowPrivateAccess = true))
	UInputMappingContext* DefaultMappingContext;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Input", meta = (AllowPrivateAccess = true))
	UInputAction* MoveInput;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Input", meta = (AllowPrivateAccess = true))
	UInputAction* RotateInputCW;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Input", meta = (AllowPrivateAccess = true))
	UInputAction* RotateInputCCW;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Input", meta = (AllowPrivateAccess = true))
	UInputAction* JumpInput;

	

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	UPROPERTY(VisibleDefaultsOnly, BlueprintReadWrite, Category = "References", meta = (BlueprintProtected))
	AMyGameModeBase* GameModeRef;

	UPROPERTY(EditDefaultsOnly, Category = "Collision", meta = (BlueprintProtected))
	UBoxComponent* BoxCollider;

	UPROPERTY(EditDefaultsOnly, Category = "Collision", meta = (BlueprintProtected))
	UBoxComponent* HitBoxGround;
	
	UPROPERTY(EditAnywhere, Category = "Mesh", meta = (BlueprintProtected))
	UStaticMeshComponent* Mesh;

	UPROPERTY(EditAnywhere, Category = "Camera", meta = (BlueprintProtected))
	USpringArmComponent* SpringArm;

	UPROPERTY(EditAnywhere, Category = "Camera", meta = (BlueprintProtected))
	UCameraComponent* Camera;

	UPROPERTY(EditAnywhere, Category = "Movement", meta = (BlueprintProtected))
	UFloatingPawnMovement* Movement;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Movement", meta = (BlueprintProtected))
	float Speed = 1; 

	bool IsRotating = false;
	bool IsRotationCCW = false;

	void Move(const FInputActionValue& Value);
	void Jump();
	UPROPERTY(EditAnywhere);
	float JumpForce = 500;

	UFUNCTION()
	void HitGround(UPrimitiveComponent* HitComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit);
	bool IsOnGround;

	void UpdateRotation( FRotator Rotation, float DeltaTime);
	void RotateCW();
	void RotateCCW();
	float AmountToRotate = 90;
	FRotator Rotation;
	

};
