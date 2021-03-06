// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "CharacterInputComponent.generated.h"


UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class TEAMUP41_API UCharacterInputComponent : public UActorComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	UCharacterInputComponent();

protected:
	// Called when the game starts
	virtual void BeginPlay() override;
	APawn* owner;
	float velocityForward;
	float velocityStrafe;
	float deltaTime;
	float velocityDeltaStrafe;
	float velocityDeltaForward;

private:
	void getInputVelocity();

public:	
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

		
};
