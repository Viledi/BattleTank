// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Tank.h"
#include "GameFramework/PlayerController.h"
#include "TankPlayerController.generated.h" //Must be the last include

/**
 * 
 */
UCLASS()
class BATTLETANKGAME_API ATankPlayerController : public APlayerController
{
	GENERATED_BODY()
		
	ATankPlayerController(const FObjectInitializer& ObjectInitializer);

	
public:
	virtual void BeginPlay() override;
	virtual void Tick(float DeltaTime) override;
	

private:
	ATank* GetControlledTank() const;
	
	//Start the tank moving the barrel so that a shot would hit where the crosshair intersicts the world
	void AimTowardsCrosshair();
	bool GetSightRayHitLocation(FVector&) const;

	bool GetLookDirection(FVector2D ScreenLocation, FVector & LookDirection) const;
	
	UPROPERTY(EditAnywhere)
	float CrossHairXLocation = 0.5;
	UPROPERTY(EditAnywhere)
	float CrossHairYLocation = 0.3333;

};
