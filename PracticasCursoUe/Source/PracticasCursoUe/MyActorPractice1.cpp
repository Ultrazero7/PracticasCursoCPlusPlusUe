// Fill out your copyright notice in the Description page of Project Settings.


#include "MyActorPractice1.h"


// Sets default values
AMyActorPractice1::AMyActorPractice1()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	MyFloatVariable = 50.0f;
	edad = 27;
	esAlumno = true;
	nombre = "Marco";
	DemostrateFundamentals();
}

// Called when the game starts or when spawned
void AMyActorPractice1::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AMyActorPractice1::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AMyActorPractice1::DemostrateFundamentals()
{//Operador Aritmeticos
	int32 sum = edad + 30 ;
	float product = MyFloatVariable * 2.5f;

	//Estructuras de control
	if (esAlumno) {
		
		GEngine->AddOnScreenDebugMessage(-1, 5.0f, FColor::Green, TEXT("Es alumno is false"));
	}

	else {
		

		GEngine->AddOnScreenDebugMessage(-1, 5.0f, FColor::Green, TEXT("Es alumno is true"));
	}

	//Bucles o Ciclos
	for (int32 i = 0; i < 5; i++) {
		FString DEbugMessage = FString::Printf(TEXT("loop interation: %d"), i);
		GEngine->AddOnScreenDebugMessage(-1, 5.0f, FColor::Green, DEbugMessage);
	}


	int32 count = 0;
	while (count < 3) {
		FString WhileMessage = FString::Printf(TEXT("While loop iteration: %d"), count);
		GEngine->AddOnScreenDebugMessage(-1, 5.0f, FColor::Cyan, WhileMessage);
		count++;
	}
}

