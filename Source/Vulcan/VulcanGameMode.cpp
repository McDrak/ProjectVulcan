// Copyright Epic Games, Inc. All Rights Reserved.

#include "VulcanGameMode.h"
#include "VulcanCharacter.h"
#include "UObject/ConstructorHelpers.h"

AVulcanGameMode::AVulcanGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPerson/Blueprints/BP_FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

}
