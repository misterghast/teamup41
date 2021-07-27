// Fill out your copyright notice in the Description page of Project Settings.


#include "GenericMovementComponent.h"
#include "Components/BoxComponent.h"

// Sets default values for this component's properties
UGenericMovementComponent::UGenericMovementComponent()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;
	collidingBox = CreateDefaultSubobject<UBoxComponent>(TEXT("RootCollider"));
	collidingBox->SetNotifyRigidBodyCollision(true);
	// ...
}


// Called when the game starts
void UGenericMovementComponent::BeginPlay()
{
	Super::BeginPlay();

	// ...
	
}


// Called every frame
void UGenericMovementComponent::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	// ...
}

