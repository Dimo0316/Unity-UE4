// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "OcclusionCheck.generated.h"


UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class INTFOLIAGEDEMO_API UOcclusionCheck : public UActorComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	UOcclusionCheck();

protected:
	// Called when the game starts
	virtual void BeginPlay() override;

	UFUNCTION(BlueprintCallable)
	bool WasRencentRendered(UPrimitiveComponent* PrimitiveComp, float fTolerance = 0.2f) const;

public:	
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

		
	
};
