 // Fill out your copyright notice in the Description page of Project Settings.


#include "MyPlayer.h"


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




	HitBoxGround->OnComponentHit.AddDynamic(this, &AMyPlayer::HitGround);
	
	if (APlayerController* PlayerController = Cast<APlayerController>(Controller))
	{

		if (UEnhancedInputLocalPlayerSubsystem* SubSystem = 
			ULocalPlayer::GetSubsystem<UEnhancedInputLocalPlayerSubsystem>(PlayerController->GetLocalPlayer()))
		{
			SubSystem->AddMappingContext(DefaultMappingContext, 0);
		}
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


		// Reset Amount to rotate to default value.
		AmountToRotate = 90;

	}
}

void AMyPlayer::RotateCW()
{
	// Set Rotation Direction
	IsRotationCCW = false;
	// Set Startpoint for the rotation
	Rotation = GetActorRotation();
	// Activates the code in UpdateRotation.
	IsRotating = true;

}

void AMyPlayer::RotateCCW()
{
	// Set Rotation Direction
	IsRotationCCW = true;
	// Set Startpoint for the rotation
	Rotation = GetActorRotation();
	// Activates the code in UpdateRotation.
	IsRotating = true;
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

