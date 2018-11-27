// Fill out your copyright notice in the Description page of Project Settings.

#include "OcclusionCheck.h"


// Sets default values for this component's properties
UOcclusionCheck::UOcclusionCheck()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	// ...
}


// Called when the game starts
void UOcclusionCheck::BeginPlay()
{
	Super::BeginPlay();

	// ...
	
}


// Called every frame
void UOcclusionCheck::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	// ...
}

bool UOcclusionCheck::WasRencentRendered(UPrimitiveComponent* PrimitiveComp, float fTolerance /* = 0.2f */) const
{
	if (PrimitiveComp == nullptr)
		return false;
	else
	{
		UWorld* world = PrimitiveComp->GetWorld();
		return world ? (world->GetTimeSeconds() - PrimitiveComp->LastRenderTimeOnScreen < fTolerance) : false;
	}

}