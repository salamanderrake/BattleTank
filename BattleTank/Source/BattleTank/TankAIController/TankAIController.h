// Fill out your copyright notice in the Description page of Project Settings.

#pragma once


#include "AIController.h"
#include "TankAIController.generated.h"
// Depends on movement componentt via path finding

// Forward Declarations

/**
 * 
 */
UCLASS()
class BATTLETANK_API ATankAIController : public AAIController
{
	GENERATED_BODY()
	
public:

  void BeginPlay() override;
  virtual void Tick( float DeltaTime ) override;
  
private:
  
  // UPROPERTY(EditDefaultsOnly, Category = "Tank - Setup")
  float AcceptanceRadius = 3000.0f;
	
};
