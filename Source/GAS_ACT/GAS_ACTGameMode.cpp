// Copyright Epic Games, Inc. All Rights Reserved.

#include "GAS_ACTGameMode.h"
#include "GAS_ACTCharacter.h"
#include "UObject/ConstructorHelpers.h"

AGAS_ACTGameMode::AGAS_ACTGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
