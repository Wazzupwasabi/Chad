// Copyright Epic Games, Inc. All Rights Reserved.

#include "ChadGameMode.h"
#include "ChadCharacter.h"
#include "UObject/ConstructorHelpers.h"

AChadGameMode::AChadGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPersonCPP/Blueprints/ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
