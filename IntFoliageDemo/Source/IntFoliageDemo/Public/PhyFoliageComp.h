// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "PhyFoliageComp.generated.h"


UCLASS( ClassGroup=(Custom), DefaultToInstanced, BlueprintType, Blueprintable, meta=(BlueprintSpawnableComponent) )
class INTFOLIAGEDEMO_API UPhyFoliageComp : public UActorComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	UPhyFoliageComp();

protected:
	// Called when the game starts
	virtual void BeginPlay() override;

	UFUNCTION(BlueprintCallable)
	bool CheckSpawn(TArray<AActor*> Dyns, FVector WorldLoc) const;


	bool CanPass(FVector pos1, FVector pos2, float tolerance = 0.0001) const;


public:	
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

		
	
};
