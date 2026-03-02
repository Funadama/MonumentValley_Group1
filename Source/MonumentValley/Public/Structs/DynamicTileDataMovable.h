#pragma once

#include "GameFramework/Actor.h"

#include "DynamicTileDataMovable.generated.h"

USTRUCT(BlueprintType)
struct FDynamicTileData_Movable
{
	GENERATED_USTRUCT_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int State;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, DisplayName = "Tile to Link")
	AActor* TileToLink;
};