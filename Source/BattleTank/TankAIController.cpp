// Fill out your copyright notice in the Description page of Project Settings.

#include "TankAIController.h"

void ATankAIController::BeginPlay()
{
	Super::BeginPlay();
	UE_LOG(LogTemp, Warning, TEXT("AIController Begin Play"));

	// Pointer on the tank controlled by tank player
	auto ControlledTank = GetControlledTank();
	/// if player controlles a tank print name, otherwise print message
	if (ControlledTank)
	{
		UE_LOG(LogTemp, Warning, TEXT("AIController possesing: %s"), *ControlledTank->GetName());
	}
	else
	{
		UE_LOG(LogTemp, Warning, TEXT("AIController Not possesing a tank"));
	}
}


ATank* ATankAIController::GetControlledTank() const
{
	return Cast<ATank>(GetPawn());
}


