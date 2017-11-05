// Fill out your copyright notice in the Description page of Project Settings.

#include "TankAIController.h"
#include "Tank.h"

void ATankAIController::BeginPlay()
{
	Super::BeginPlay();
}

// Called every frame
void ATankAIController::Tick(float DeltaTime) 
{
	Super::Tick(DeltaTime);
	ATank* PlayerTank = Cast<ATank>(GetWorld()->GetFirstPlayerController()->GetPawn());
	ATank* ControlledTank = Cast<ATank>(GetPawn());
	if (PlayerTank)
	{
		// TODO Move towards the player
		/// Aim towards the player
		FVector PlayerTankLocation = PlayerTank->GetActorLocation();
		ControlledTank->AimAt(PlayerTankLocation);

		ControlledTank->Fire(); // TODO Limit firing rate
	}
}

