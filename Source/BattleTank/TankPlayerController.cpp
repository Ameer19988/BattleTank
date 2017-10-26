// Fill out your copyright notice in the Description page of Project Settings.

#include "TankPlayerController.h"

void ATankPlayerController::BeginPlay()
{
	Super::BeginPlay();
	UE_LOG(LogTemp, Warning, TEXT("PlayerController Begin Play"));

	// Pointer on the tank controlled by tank player
	auto ControlledTank = GetControlledTank();
	/// if player controls the tank print name, otherwise print message
	if (ControlledTank)
	{
		UE_LOG(LogTemp, Warning, TEXT("PlayerController possesing: %s"), *ControlledTank->GetName());
	}
	else
	{
		UE_LOG(LogTemp, Warning, TEXT("PlayerController Not possesing a tank"));
	}
}

// Called every frame
void ATankPlayerController::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	AimTowardsCrosshair();
}

ATank* ATankPlayerController::GetControlledTank() const
{
	return Cast<ATank>(GetPawn());
}

void ATankPlayerController::AimTowardsCrosshair()
{
	if (!GetControlledTank())
	{
		return;
	}
	// Get world location if linetrace through crosshair
	// if it hits the landscape
		// Tell controlled tank to aim at this point
}