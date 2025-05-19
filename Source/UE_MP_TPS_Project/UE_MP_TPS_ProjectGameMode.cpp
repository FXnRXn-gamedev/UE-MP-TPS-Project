// Copyright Epic Games, Inc. All Rights Reserved.

#include "UE_MP_TPS_ProjectGameMode.h"
#include "UE_MP_TPS_ProjectCharacter.h"
#include "UObject/ConstructorHelpers.h"

AUE_MP_TPS_ProjectGameMode::AUE_MP_TPS_ProjectGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
