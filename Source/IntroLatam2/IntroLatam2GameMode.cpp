// Copyright Epic Games, Inc. All Rights Reserved.

#include "IntroLatam2GameMode.h"
#include "IntroLatam2Character.h"
#include "UObject/ConstructorHelpers.h"

AIntroLatam2GameMode::AIntroLatam2GameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPersonCPP/Blueprints/ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
