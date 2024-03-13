// Copyright Epic Games, Inc. All Rights Reserved.

#include "HOMrwork6GameMode.h"
#include "HOMrwork6PlayerController.h"
#include "HOMrwork6Character.h"
#include "UObject/ConstructorHelpers.h"

AHOMrwork6GameMode::AHOMrwork6GameMode()
{
	// use our custom PlayerController class
	PlayerControllerClass = AHOMrwork6PlayerController::StaticClass();

	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/TopDown/Blueprints/BP_TopDownCharacter"));
	if (PlayerPawnBPClass.Class != nullptr)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}

	// set default controller to our Blueprinted controller
	static ConstructorHelpers::FClassFinder<APlayerController> PlayerControllerBPClass(TEXT("/Game/TopDown/Blueprints/BP_TopDownPlayerController"));
	if(PlayerControllerBPClass.Class != NULL)
	{
		PlayerControllerClass = PlayerControllerBPClass.Class;
	}
}