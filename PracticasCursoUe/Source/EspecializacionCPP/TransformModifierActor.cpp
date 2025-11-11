// Fill out your copyright notice in the Description page of Project Settings.


#include "TransformModifierActor.h"

// Sets default values
ATransformModifierActor::ATransformModifierActor()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

void ATransformModifierActor::OnConstruction(const FTransform& Transform) {
	Super::OnConstruction(Transform);
	DrawDebugSphereMethod();
}

// Called when the game starts or when spawned
void ATransformModifierActor::BeginPlay()
{
	Super::BeginPlay();
	
	if (TargetActor) 
	{
		NewTransform = TargetActor->GetActorTransform();
	}

	else 
	{
		TargetActor = nullptr;
	}

	if (Positions.Num() > 0) 
	{
		MoveToNextPosition();
	}
	
}

// Called every frame
void ATransformModifierActor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	
	ModifyTargetTransform(DeltaTime);

	if (Positions.Num() == 0) 
	{
		return;
	}

	FVector CurrentPosition = TargetActor->GetActorLocation();
	FVector TargetPosition = Positions[CurrentPositionIndex];

	FVector Direction = (TargetPosition - CurrentPosition).GetSafeNormal();
	FVector NewPosition = CurrentPosition + Direction * 100 * DeltaTime;

	TargetActor->SetActorLocation(NewPosition);

	if (FVector::Dist(NewPosition, TargetPosition) < 10.0f) {
		CurrentPositionIndex++;
		ChangeMaterial();
		if (CurrentPositionIndex >= Positions.Num()) {
			CurrentPositionIndex = 0;
		}
	}

}

void ATransformModifierActor::ModifyTargetTransform(float DeltaTime)
{
	/*if (TargetActor) {
		TargetActor->SetActorTransform(NewTransform);
	}*/

	

	

}

void ATransformModifierActor::MoveToNextPosition() {
	if (TargetActor && Positions.IsValidIndex(CurrentPositionIndex)) 
	{
		FVector TargetPosition = Positions[CurrentPositionIndex];
		TargetActor->SetActorLocation(TargetPosition);
	}

}

void ATransformModifierActor::ChangeMaterial() 
{
	if (TargetActor && Materials.IsValidIndex(CurrentPositionIndex))
	{
		UStaticMeshComponent* MeshComponent = Cast <UStaticMeshComponent>(
			TargetActor->GetComponentByClass(UStaticMeshComponent::StaticClass()));
		if (MeshComponent)
		{
			MeshComponent->SetMaterial(0, Materials[CurrentPositionIndex]);
		}
	}

}
 
void ATransformModifierActor::DrawDebugSphereMethod() const 
{
	for (const FVector& Position : Positions)
	{
		DrawDebugSphere(GetWorld(), Position, 50.0f, 12, FColor::Green, false, -1.0f, 0, 5.0f);
	}
}

