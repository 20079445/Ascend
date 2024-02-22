// Copyright Epic Games, Inc. All Rights Reserved.

#include "GameMode.h"
#include "Character.h"
#include "UObject/ConstructorHelpers.h"

AtestingMigrateGameMode::AtestingMigrateGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_Character"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
