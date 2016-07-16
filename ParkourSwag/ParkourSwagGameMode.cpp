// Copyright 1998-2016 Epic Games, Inc. All Rights Reserved.

#include "ParkourSwag.h"
#include "ParkourSwagGameMode.h"
#include "ParkourSwagHUD.h"
#include "ParkourSwagCharacter.h"

AParkourSwagGameMode::AParkourSwagGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPersonCPP/Blueprints/FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

	// use our custom HUD class
	HUDClass = AParkourSwagHUD::StaticClass();
}
