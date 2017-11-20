// Fill out your copyright notice in the Description page of Project Settings.

#include "TankAIController.h"
#include "TankAimingComponent.h"
// Depends on movement component via path finding system
void ATankAIController::BeginPlay()
{
	Super::BeginPlay();
}

// Called every frame
void ATankAIController::Tick(float DeltaTime) 
{
	Super::Tick(DeltaTime);
	auto PlayerTank = GetWorld()->GetFirstPlayerController()->GetPawn();
	auto ControlledTank = GetPawn();

	auto AimingComponent = ControlledTank->FindComponentByClass<UTankAimingComponent>();

	if (!ensure(PlayerTank && ControlledTank && AimingComponent)) { return; }

	// Move towards the player
	MoveToActor(PlayerTank, AcceptanceRadius);

	/// Aim towards the player
	AimingComponent->AimAt(PlayerTank->GetActorLocation());

	// if aiming or locked
	if (AimingComponent->GetFiringState() == EFiringState::Locked)
	{
		AimingComponent->Fire(); // TODO Limit firing rate
	}	 
}

