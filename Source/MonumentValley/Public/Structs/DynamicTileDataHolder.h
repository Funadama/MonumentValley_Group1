#pragma once

#include "CoreMinimal.h"
#include "DynamicTileDataRotatable.h"
#include "DynamicTileDataMovable.h"

#include "DynamicTileDataHolder.generated.h"

USTRUCT(BlueprintType)
struct FDynamicTileDataHolder
{
	GENERATED_USTRUCT_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadWrite, DisplayName = "Movable Links")
	TArray<FDynamicTileData_Movable> MovableLinks;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, DisplayName = "Rotatable Links")
	TArray<FDynamicTileData_Rotatable> RotatableLinks;
};

