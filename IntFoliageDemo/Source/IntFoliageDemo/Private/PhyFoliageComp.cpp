// Fill out your copyright notice in the Description page of Project Settings.

#include "PhyFoliageComp.h"


// Sets default values for this component's properties
UPhyFoliageComp::UPhyFoliageComp()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	// ...
}


// Called when the game starts
void UPhyFoliageComp::BeginPlay()
{
	Super::BeginPlay();

	// ...
	
}

bool UPhyFoliageComp::CheckSpawn(TArray<AActor*> Dyns, FVector WorldLoc) const
{
	bool bRet = true;	

	for (int i = 0; i < Dyns.Num(); ++i)
	{
		if (Dyns[i] != nullptr)
		{
			if (!CanPass(Dyns[i]->GetActorLocation(), WorldLoc))
			{
				bRet = false;
				break;
			}				
		}
	}

	return bRet;
}

FORCEINLINE bool UPhyFoliageComp::CanPass(FVector pos1, FVector pos2, float tolerance) const
{
	return FMath::Abs(pos1.X - pos2.X) < tolerance ? (FMath::Abs(pos1.Y - pos2.Y) < tolerance ? (FMath::Abs(pos1.Z - pos2.Z) < tolerance ? false : true) : true): true;
}


// Called every frame
void UPhyFoliageComp::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	// ...
}

