// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Vehicle.h"
#include "Aeronaves.generated.h"

UENUM()

enum class ETipoAeronave 
{
	Helicoptero UMETA(DisplayName = "Helicoptero"),

	Cazas UMETA(DisplayName = "Cazas"),

	Bombarderos UMETA(DisplayName = "Bombardero"),

	Transportes UMETA(DisplayName = "Transportes"),

	Comerciales UMETA(DisplayName = "Comerciales"),

	DeEntrenamiento UMETA(DisplayName = "DeEntrenamiento"),

	Agricolas UMETA(DisplayName = "Agricolas"),

	DeReconocimiento UMETA(DisplayName = "DeReconocimiento"),


};

/**
 * 
 */
UCLASS()
class ESPECIALIZACIONCPP_API AAeronaves : public AVehicle
{
	GENERATED_BODY()
	

public:
	//Sets default values for this actor's properties

	AAeronaves();

protected:

	virtual void BeginPlay() override;

public:

	virtual void Tick(float DeltaTime)  override;
    
	virtual void Move() override;

public:

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Aeronaves")

	ETipoAeronave TipoAeronave;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Aeronaves")

	FString ModeloAeronave;

	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Aeronaves")
	AActor* VersionAeronave;

};
