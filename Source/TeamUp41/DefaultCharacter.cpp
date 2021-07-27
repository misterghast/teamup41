// Fill out your copyright notice in the Description page of Project Settings.


#include "DefaultCharacter.h"
#include "GameFramework/SpringArmComponent.h"
#include "Camera/CameraComponent.h"
#include "CharacterInputComponent.h"

float ADefaultCharacter::fakeGravity = 72;

// Sets default values
ADefaultCharacter::ADefaultCharacter()
{
 	// Set this pawn to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	velocityForward = 0;
	velocityStrafe = 0;
	cameraPitch = 0;
	cameraYaw = 0;
	runSpeed = 237.6;
	//runSpeed = 2;
	//setup components
	box = CreateDefaultSubobject<UBoxComponent>(TEXT("RootBoxComponent"));
	box->SetBoxExtent(FVector(10, 10, 100));
	RootComponent = box;
	
	CameraComp = CreateDefaultSubobject<UCameraComponent>(TEXT("CameraComponent"));

	//attach components
	CameraComp->SetupAttachment(RootComponent);
}

// Called when the game starts or when spawned
void ADefaultCharacter::BeginPlay()
{
	Super::BeginPlay();
}

// Called every frame
void ADefaultCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	HandleInput(DeltaTime);
}

// Called to bind functionality to input
void ADefaultCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);
	InputComponent->BindAxis("WS", this, &ADefaultCharacter::MoveForwardBack);
	InputComponent->BindAxis("Pitch", this, &ADefaultCharacter::CameraPitch);
	InputComponent->BindAxis("Yaw", this, &ADefaultCharacter::CameraYaw);
}

void ADefaultCharacter::MoveForwardBack(float AxisValue) {
	UE_LOG(LogTemp, Warning, TEXT("%f, %f"), AxisValue, runSpeed)
	velocityForward = FMath::Clamp(AxisValue, -1.0f, 1.0f) * runSpeed;
}

void ADefaultCharacter::MoveLeftRight(float AxisValue) {
	velocityForward = FMath::Clamp(AxisValue, -1.0f, 1.0f) * runSpeed;
}

void ADefaultCharacter::CameraPitch(float AxisValue) {
	cameraPitch = FMath::Clamp(CameraComp->GetRelativeRotation().Pitch + AxisValue, -30.0f, 80.0f);
}

void ADefaultCharacter::CameraYaw(float AxisValue) {
	cameraYaw = CameraComp->GetRelativeRotation().Yaw + AxisValue;
}

void ADefaultCharacter::HandleInput(float DeltaTime) {
	TArray<FHitResult> AtHit;
	FCollisionShape boxShape = FCollisionShape::MakeBox(FVector(20, 20, 80));
	UE_LOG(LogTemp, Warning, TEXT("Handling input"))
	FVector forwardHorizontal = FVector(CameraComp->GetForwardVector().X, CameraComp->GetForwardVector().Y, 0);
	NewFrameLocation = GetActorLocation() + (forwardHorizontal * (velocityForward * DeltaTime));
	if (velocityForward > 0) {
		if (GetWorld()->SweepMultiByChannel(AtHit, GetActorLocation(), NewFrameLocation, GetActorQuat(), ECollisionChannel::ECC_WorldStatic, boxShape, collisionparams)) {
			NewFrameLocationMinusX = FVector(GetActorLocation().X, NewFrameLocation.Y, NewFrameLocation.Z);
			NewFrameLocationMinusY = FVector(NewFrameLocation.X, GetActorLocation().Y, NewFrameLocation.Z);
			if (!(GetWorld()->SweepMultiByChannel(AtHit, FVector(GetActorLocation().X, GetActorLocation().Y, GetActorLocation().Z + 16), FVector(NewFrameLocation.X, NewFrameLocation.Y, NewFrameLocation.Z + 16), GetActorQuat(), ECollisionChannel::ECC_WorldStatic, boxShape, collisionparams))) {
				NewFrameLocation.Set(NewFrameLocation.X, NewFrameLocation.Y, NewFrameLocation.X + (16 * DeltaTime));
			}
			else {
				if ((GetWorld()->SweepMultiByChannel(AtHit, GetActorLocation(), NewFrameLocationMinusX, GetActorQuat(), ECollisionChannel::ECC_WorldStatic, boxShape, collisionparams))) {
					if (GetWorld()->SweepMultiByChannel(AtHit, GetActorLocation(), NewFrameLocationMinusY, GetActorQuat(), ECollisionChannel::ECC_WorldStatic, boxShape, collisionparams)) {
						NewFrameLocation = GetActorLocation();
					}
					else {
						NewFrameLocation = NewFrameLocationMinusY;
					}
				}
				else {
					NewFrameLocation = NewFrameLocationMinusX;
				}
			}
			
		}
	}
	SetActorLocation(NewFrameLocation);
	CameraComp->SetRelativeRotation(FRotator(cameraPitch, cameraYaw, 0));
}

void ADefaultCharacter::HandleStairs(float DeltaTime, TArray<FHitResult> AtHit, FCollisionShape boxShape) {
	if (!(GetWorld()->SweepMultiByChannel(AtHit, FVector(GetActorLocation().X, GetActorLocation().Y, GetActorLocation().Z + 16), FVector(NewFrameLocation.X, NewFrameLocation.Y, NewFrameLocation.Z + 300), GetActorQuat(), ECollisionChannel::ECC_WorldStatic, boxShape, collisionparams))) {
		NewFrameLocation.Set(NewFrameLocation.X, NewFrameLocation.Y, NewFrameLocation.X + 300);
	}
}