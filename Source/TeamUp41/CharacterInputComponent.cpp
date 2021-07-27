// Fill out your copyright notice in the Description page of Project Settings.


#include "CharacterInputComponent.h"

// Sets default values for this component's properties
UCharacterInputComponent::UCharacterInputComponent()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.

	PrimaryComponentTick.bCanEverTick = true;
	owner = Cast<APawn>(GetOwner());
	velocityForward = 0;
	velocityStrafe = 0;
	
	
	// ...
}


// Called when the game starts
void UCharacterInputComponent::BeginPlay()
{
	Super::BeginPlay();

	// ...
	
}

void UCharacterInputComponent::getInputVelocity() {
	velocityForward = owner->InputComponent->GetAxisValue("WS");
	velocityDeltaForward = velocityForward * deltaTime;

}

// Called every frame
void UCharacterInputComponent::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);
	deltaTime = owner->GetWorld()->GetDeltaSeconds();
	getInputVelocity();
	
	FVector forward = owner->GetActorForwardVector();
	FVector newVector = owner->GetActorLocation() + forward * velocityDeltaForward;
	owner->SetActorLocation(newVector);
	// ...
}

