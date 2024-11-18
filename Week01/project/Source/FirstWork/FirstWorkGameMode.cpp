// Copyright Epic Games, Inc. All Rights Reserved.

#include "FirstWorkGameMode.h"
#include "FirstWorkCharacter.h"
#include "UObject/ConstructorHelpers.h"

AFirstWorkGameMode::AFirstWorkGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
