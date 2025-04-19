// Copyright Epic Games, Inc. All Rights Reserved.

#include "Lab06GameMode.h"
#include "Lab06Character.h"
#include "UObject/ConstructorHelpers.h"

ALab06GameMode::ALab06GameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
