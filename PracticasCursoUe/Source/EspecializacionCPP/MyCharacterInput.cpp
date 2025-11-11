// Fill out your copyright notice in the Description page of Project Settings.


#include "MyCharacterInput.h"
#include "EnhancedInputComponent.h"
#include "EnhancedInputSubsystems.h"
#include "InputActionValue.h"
// Sets default values
//AMyCharacterInput::AMyCharacterInput()
//{
// 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
//	PrimaryActorTick.bCanEverTick = true;

//}

// Called when the game starts or when spawned
void AMyCharacterInput::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AMyCharacterInput::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime); 

}

// Called to bind functionality to input
//void AMyCharacterInput::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
//{
//	Super::SetupPlayerInputComponent(PlayerInputComponent);
//
//}

//void AMyCharacterInput::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
//{
//	if(UEnhancedInputComponent* EnhancedInputCompent = Cast < UEnhancedInputComponent>(PlayerInputComponent))
//	{
//		EnhancedInputCompent->BindAction(InteractAction, ETriggerEvent::Triggered, this, &AMyCharacterInput::Interact);
//		EnhancedInputCompent->BindAction(InteractAction, ETriggerEvent::Started, this, &AMyCharacterInput::Interact);
//
//	}
//
//	else
//	{
//		UE_LOG(LogTemplateCharacter, Error,
//			TEXT("%s Failed To find an Enhanced Input component! This template is built to use the Enhanced Input System. If you ,intent to use the legacy sytem, then you will need to"))
//	}
//}

//void AMyCharacterInput::Interact(const FInputActionValue& Value)
//{
//	GEngine->AddOnScreenDebugMessage(-1, 15.0f,
//		FColor::Green,
//		TEXT("Boton de interaccion presionada"));
//}

