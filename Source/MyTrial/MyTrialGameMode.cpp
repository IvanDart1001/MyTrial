// Copyright Epic Games, Inc. All Rights Reserved.

#include "MyTrialGameMode.h"
#include "MyTrialCharacter.h"
#include "UObject/ConstructorHelpers.h"

AMyTrialGameMode::AMyTrialGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPerson/Blueprints/BP_FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

}
