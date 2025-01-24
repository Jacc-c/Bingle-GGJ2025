// Copyright Epic Games, Inc. All Rights Reserved.

#include "Bingle_GGJ2025GameMode.h"
#include "Bingle_GGJ2025Character.h"
#include "UObject/ConstructorHelpers.h"

ABingle_GGJ2025GameMode::ABingle_GGJ2025GameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
