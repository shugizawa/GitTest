// Copyright Epic Games, Inc. All Rights Reserved.

#include "ForGitTestGameMode.h"
#include "ForGitTestCharacter.h"
#include "UObject/ConstructorHelpers.h"

AForGitTestGameMode::AForGitTestGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
