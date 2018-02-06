// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.

#include "CPlusPlusDriftTestGameMode.h"
#include "CPlusPlusDriftTestPawn.h"
#include "CPlusPlusDriftTestHud.h"

ACPlusPlusDriftTestGameMode::ACPlusPlusDriftTestGameMode()
{
	DefaultPawnClass = ACPlusPlusDriftTestPawn::StaticClass();
	HUDClass = ACPlusPlusDriftTestHud::StaticClass();
}
