// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Pawn.h"
#include "Components/BoxComponent.h"
#include "DefaultCharacter.generated.h"

UCLASS()
class TEAMUP41_API ADefaultCharacter : public APawn
{
	GENERATED_BODY()

public:
	// Sets default values for this pawn's properties
	ADefaultCharacter();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	UPROPERTY(EditAnywhere)
	class UCameraComponent* CameraComp;

	UPROPERTY(EditAnywhere)
	class UStaticMeshComponent* StaticMeshComp;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

private:
	//handle input
	void MoveForwardBack(float AxisValue);
	void MoveLeftRight(float AxisValue);
	void CameraPitch(float AxisValue);
	void CameraYaw(float AxisValue);
	void HandleInput(float DeltaTime);
	void HandleStairs(float DeltaTime, TArray<FHitResult> AtHit, FCollisionShape boxShape);
	UBoxComponent* box;
	FVector NewFrameLocation;
	FVector NewFrameLocationMinusX;
	FVector NewFrameLocationMinusY;
	FCollisionQueryParams collisionparams;

	float velocityStrafe;
	float velocityForward;

	float cameraPitch;
	float cameraYaw;
	static float fakeGravity;
	float runSpeed;

};
