// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "AIController.h"
#include "AIClass_NPC.generated.h"

/**
 * 
 */
UCLASS()
class ESPECIALIZACIONCPP_API AAIClass_NPC : public AAIController
{
	GENERATED_BODY()

public:
	explicit AAIClass_NPC(FObjectInitializer const& ObjectIntializer);

protected:
	virtual void OnPossess(APawn* InPawn) override;
	
};


