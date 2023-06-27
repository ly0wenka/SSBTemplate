// Copyright Epic Games, Inc. All Rights Reserved.

#include "SSBTemplateGameMode.h"
#include "SSBTemplateCharacter.h"
#include "UObject/ConstructorHelpers.h"

ASSBTemplateGameMode::ASSBTemplateGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/SideScrollerCPP/Blueprints/SideScrollerCharacter"));
	if (PlayerPawnBPClass.Class != nullptr)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
