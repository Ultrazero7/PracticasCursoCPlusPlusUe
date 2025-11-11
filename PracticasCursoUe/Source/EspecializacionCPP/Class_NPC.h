// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "BehaviorTree/BehaviorTree.h"
#include "Class_NPC.generated.h"

UCLASS()
class ESPECIALIZACIONCPP_API AClass_NPC : public ACharacter
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	AClass_NPC();

	UBehaviorTree* GetBehaviorTree() const { return Tree; }

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category= "AI", meta = (AllowPrivateAcces = "true"))
	UBehaviorTree* Tree;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

};
