 // Fill out your copyright notice in the Description page of Project Settings.


#include "MyPlayer.h"
#include "Interact.h"
#include "Components/BoxComponent.h"
#include "Components/StaticMeshComponent.h"
#include "EnhancedInputSubsystems.h"
#include "InputActionValue.h"
#include "EnhancedInputComponent.h"
#include "Engine/LocalPlayer.h"
#include "GameFramework/SpringArmComponent.h"
#include "Camera/CameraComponent.h"

// Sets default values
AMyPlayer::AMyPlayer()
{
 	// Set this pawn to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	BoxCollider = CreateDefaultSubobject<UBoxComponent>(TEXT("BodyCollider"));
	RootComponent = BoxCollider;

	HitBoxGround = CreateDefaultSubobject<UBoxComponent>(TEXT("HitBoxGround"));
	HitBoxGround->SetupAttachment(RootComponent);

	Mesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Body"));
	Mesh->SetupAttachment(RootComponent);

	SpringArm = CreateDefaultSubobject<USpringArmComponent>(TEXT("SpringArm"));
	SpringArm->SetupAttachment(RootComponent);

	Camera = CreateDefaultSubobject<UCameraComponent>(TEXT("PlayerCamera"));
	Camera->SetupAttachment(SpringArm, USpringArmComponent::SocketName);

	Movement = CreateDefaultSubobject<UFloatingPawnMovement>(TEXT("Movement"));


}

// Called when the game starts or when spawned
void AMyPlayer::BeginPlay()
{
	Super::BeginPlay();

	//Lock z rotation.
	BoxCollider->GetBodyInstance()->bLockZRotation = true;
	BoxCollider->GetBodyInstance()->SetDOFLock(EDOFMode::SixDOF);

	HitBoxGround->OnComponentHit.AddDynamic(this, &AMyPlayer::HitGround);
	BoxCollider->OnComponentBeginOverlap.AddDynamic(this, &AMyPlayer::OnOverlapBegin);
	
	if (APlayerController* PlayerController = Cast<APlayerController>(Controller))
	{
		if (UEnhancedInputLocalPlayerSubsystem* SubSystem = 
			ULocalPlayer::GetSubsystem<UEnhancedInputLocalPlayerSubsystem>(PlayerController->GetLocalPlayer()))
		{
			SubSystem->AddMappingContext(DefaultMappingContext, 0);
		}
	}
}

void AMyPlayer::OnOverlapBegin(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor,
	UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	// Check if OtherActor implements Interface IInteract.
	if (IInteract* Interact = Cast<IInteract>(OtherActor); Interact != nullptr)
	{
		Interact->Interact(this);
	}
}

void AMyPlayer::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	UpdateRotation(Rotation, DeltaTime);
	
}

void AMyPlayer::Move(const FInputActionValue& Value)
{
	// Get InputValues (axis) from the inputAction.
	FVector2D DirectionVector = Value.Get<FVector2D>();
	// Store in FVector because AddMovementInput can't take a FVector2.
	FVector MovementDirection = FVector(DirectionVector, 0);

	// GetActorRotation().RotateVector() ensures that the player moves along its local axis. 
	// Not along World Axis.
	AddMovementInput(GetActorRotation().RotateVector(MovementDirection), Speed, false);
}

void AMyPlayer::Jump()
{
	if (!IsOnGround) { return; }
	//Reduce player speed while in the air, so he can't jump to far.
	Speed = 0.4;
	BoxCollider->BodyInstance.AddImpulse(FVector(0, 0, JumpForce), true);
	IsOnGround = false;
}

//Is called when HitBoxGround is hitting something
void AMyPlayer::HitGround(UPrimitiveComponent* HitComponent, AActor* OtherActor, 
	UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit)
{
	IsOnGround = true;
	// Restore origenal speed whenn hitting the ground.
	Speed = 0.5;
}

// Rotates the Character 90 degrees left or right when Q or E is pressed. (Called from Tick)
void AMyPlayer::UpdateRotation( FRotator RRotation, float DeltaTime)
{
	if (!IsRotating) { return; }

	//Unlock z rotation.
	BoxCollider->GetBodyInstance()->bLockZRotation = false;
	BoxCollider->GetBodyInstance()->SetDOFLock(EDOFMode::SixDOF);
	
	float RotationStepAmount = 250 * DeltaTime;
	// Making shure AmountToRotate doesn't go below 0. 
	// So the rotation isn't going further as 90 degrees. 
	if (AmountToRotate < 5) { RotationStepAmount = AmountToRotate; }

	// Makes the rotation CW or CCW depending on if IsRotationCCW is true or false. 
	// (Set by RotateCW() & RotateCCW())
	if (IsRotationCCW) { Rotation -= FRotator(0, RotationStepAmount, 0); }
	else { Rotation += FRotator(0, RotationStepAmount, 0); }
	
	SetActorRotation(Rotation);

	// Counter to see if we should rotate any further. starts with value = 90.
	AmountToRotate -= RotationStepAmount;

	// Is Called at the end of the rotation.
	if (AmountToRotate <= 0)
	{
		// Round and set rotation to correct overshooting the target value.
		Rotation.Yaw = roundl(Rotation.Yaw);
		SetActorRotation(Rotation);
		// Deactivates this function.
		IsRotating = false;

		//Relock z rotation.
		BoxCollider->GetBodyInstance()->bLockZRotation = true;
		BoxCollider->GetBodyInstance()->SetDOFLock(EDOFMode::SixDOF);

		// Reset Amount to rotate to default value.
		AmountToRotate = 90;

	}
}

void AMyPlayer::RotateCW()
{
	if (Is2DMode) { return; }
	// Set Rotation Direction
	IsRotationCCW = false;
	// Set Startpoint for the rotation
	Rotation = GetActorRotation();
	// Activates the code in UpdateRotation.
	IsRotating = true;

}

void AMyPlayer::RotateCCW()
{
	if (Is2DMode) { return; }
	// Set Rotation Direction
	IsRotationCCW = true;
	// Set Startpoint for the rotation
	Rotation = GetActorRotation();
	// Activates the code in UpdateRotation.
	IsRotating = true;
}

void AMyPlayer::Toggel2DMode(FVector NewLocation, FRotator NewRotation)
{
	Is2DMode = !Is2DMode;

	//Determine in which direction movement should be blocked.
	bool BlockY;
	if (int(NewRotation.Yaw) == 90 || int(NewRotation.Yaw) == -90) { BlockY = true; }
	else { BlockY = false; }

	if (Is2DMode)
	{
		//offset for NewLocation
		FVector Distance = FVector(2.1, 0, 0);
		//Make sure we face the right direction.
		SetActorRotation(FRotator(NewRotation.Pitch, NewRotation.Yaw - 180, NewRotation.Roll));
		//Make shure we have the right location after scale
		SetActorLocation(NewLocation + NewRotation.RotateVector(Distance));
		//Lock movment to a 2D plane.
		if(BlockY) { BoxCollider->GetBodyInstance()->bLockYTranslation = true; }
		else { BoxCollider->GetBodyInstance()->bLockXTranslation = true; }
		BoxCollider->GetBodyInstance()->SetDOFLock(EDOFMode::SixDOF);

		SetActorScale3D(FVector(0.1, 0.25, 0.25));
	}
	else
	{
		//offset for NewLocation
		FVector Distance = FVector(0, 0, 10);
		//Unlock movment to a 2D plane.
		if (BlockY) { BoxCollider->GetBodyInstance()->bLockYTranslation = false; }
		else { BoxCollider->GetBodyInstance()->bLockXTranslation = false; }
		BoxCollider->GetBodyInstance()->SetDOFLock(EDOFMode::SixDOF);
		//Make shure we have the right location after scale
		SetActorLocation(NewLocation + NewRotation.RotateVector(Distance));
		SetActorScale3D(FVector(0.5, 0.5, 0.5));
	}
}

// Called to bind functionality to input
void AMyPlayer::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

	if (UEnhancedInputComponent* EnhancedInputComponent = CastChecked<UEnhancedInputComponent>(InputComponent))
	{
		EnhancedInputComponent->BindAction(MoveInput, ETriggerEvent::Triggered, this, &AMyPlayer::Move);
		EnhancedInputComponent->BindAction(RotateInputCW, ETriggerEvent::Completed, this, &AMyPlayer::RotateCW);
		EnhancedInputComponent->BindAction(RotateInputCCW, ETriggerEvent::Completed, this, &AMyPlayer::RotateCCW);
		EnhancedInputComponent->BindAction(JumpInput, ETriggerEvent::Completed, this, &AMyPlayer::Jump);
	}

}

