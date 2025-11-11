// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Vehicle.generated.h"

UCLASS()
class ESPECIALIZACIONCPP_API AVehicle : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AVehicle();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

public:
	UFUNCTION(BlueprintCallable,Category= "Vehicle")
	virtual void Move();

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "vehicle")

	float VehicleSpeed;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "vehicle")

	float fuel;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "vehicle")

	FString VehicleName;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "vehicle")

	int32 Wheels;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "vehicle")

	bool IsStandar;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "vehicle")

	bool IsElectric;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "vehicle")

	FColor VehicleColor;

	
};
