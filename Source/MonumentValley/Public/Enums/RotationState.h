#pragma once

#include "RotationState.generated.h"

UENUM(BlueprintType)
enum ERotationState : uint8
{
	RS_NONE =		0 UMETA(DisplayName = "None"),
	RS_0 =			1 UMETA(DisplayName = "0"),
	RS_90 =			2 UMETA(DisplayName = "90"),
	RS_180 =		3 UMETA(DisplayName = "180"),
	RS_NEG_90 =		4 UMETA(DisplayName = "-90"),
};