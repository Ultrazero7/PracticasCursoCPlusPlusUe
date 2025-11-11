// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Temperatura.generated.h"

UCLASS()
class ESPECIALIZACIONCPP_API ATemperatura : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ATemperatura();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	UFUNCTION(BlueprintPure, Category = "Temperature")
	static float GetTemperatureFahrenheit(float TemperatureCelcius);

	UFUNCTION(BlueprintPure, Category = "Temperature")
	static float GetAverageTemperature(float Temp1,float Temp2);

	UFUNCTION(BlueprintCallable, Category = "Temperature")
	float ConvertKelvinToCelcius() const;

	UFUNCTION(BlueprintCallable, Category = "Temperature")
	float DiferenciaEntreTemperaturas(float Temp1,float Temp2);

	UFUNCTION(BlueprintCallable,BlueprintImplementableEvent, Category = "Temperature")

	void OnCheckTemperature(float CurrentTemperature);
	



public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;


	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Temperature")

	float TemperatureCelcius; 

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Temperature")

	float temp1;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Temperature")

	float temp2;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Temperature")

	float Kelvin;
	
};
