// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "FunkyMaths.generated.h"

/**
 * 
 */
UCLASS()
class MYPROJECT2_API UFunkyMaths : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()
	UFUNCTION(BlueprintCallable, BlueprintPure)
		static FVector GetDangerousReflectionVector(const FVector& Direction, const FVector& SurfaceNormal) {return (Direction - 2 * (Direction | SurfaceNormal) * SurfaceNormal);};
};
