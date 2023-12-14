// Copyright Epic Games, Inc. All Rights Reserved.

#include "CPP_Trajectory_AMGameMode.h"
#include "CPP_Trajectory_AMCharacter.h"
#include "UObject/ConstructorHelpers.h"

ACPP_Trajectory_AMGameMode::ACPP_Trajectory_AMGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPerson/Blueprints/BP_FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

}
