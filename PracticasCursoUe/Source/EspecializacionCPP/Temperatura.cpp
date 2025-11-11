// Fill out your copyright notice in the Description page of Project Settings.


#include "Temperatura.h"

// Sets default values
ATemperatura::ATemperatura()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	TemperatureCelcius ; 
	temp1 ;
	temp2 ;
	Kelvin; 

}

// Called when the game starts or when spawned
void ATemperatura::BeginPlay()
{
	Super::BeginPlay();
	
}

float ATemperatura::GetTemperatureFahrenheit(float TemperatureCelcius) 
{
	return FMath::Abs(TemperatureCelcius * 9.0f / 5.0f + 32.0f);
}

float ATemperatura::ConvertKelvinToCelcius() const
{
	return Kelvin - 273.15;
}
//
 float ATemperatura::DiferenciaEntreTemperaturas(float Temp1, float Temp2) 
{
	return FMath::Abs(Temp1-Temp2);
}

 float ATemperatura::GetAverageTemperature(float Temp1, float Temp2)
{
	return FMath::Abs(Temp1 + Temp2) / 2.0f;
}

// Called every frame
void ATemperatura::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

