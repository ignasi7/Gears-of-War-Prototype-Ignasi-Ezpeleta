// Copyright Epic Games, Inc. All Rights Reserved.

#include "TechnicalExerciseGameMode.h"
#include "TechnicalExerciseCharacter.h"
#include "UObject/ConstructorHelpers.h"

ATechnicalExerciseGameMode::ATechnicalExerciseGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
