// Fill out your copyright notice in the Description page of Project Settings.

#include "Public/TankAIController.h"

void  ATankAIController::BeginPlay()
{
	Super::BeginPlay();

	auto ControlledTank = GetControlledTank();
	if (!ControlledTank)
	{
		UE_LOG(LogTemp, Warning, TEXT("AIController not possesing a tank."));
	}
	else
	{
		UE_LOG(LogTemp, Warning, TEXT("%s is controlled by AI."), *ControlledTank->GetName());
	}
}


ATank * ATankAIController::GetControlledTank() const
{
	return Cast<ATank>(GetPawn());
}
