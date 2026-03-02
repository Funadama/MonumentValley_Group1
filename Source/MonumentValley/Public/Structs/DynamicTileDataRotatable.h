#pragma once

#include "GameFramework/Actor.h"
#include "Enums/RotationState.h"

#include "DynamicTileDataRotatable.generated.h"

USTRUCT(BlueprintType)
struct FDynamicTileData_Rotatable
{
	GENERATED_USTRUCT_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TEnumAsByte<ERotationState> State;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, DisplayName = "Tile to Link")
	AActor* TileToLink;
};