// Fill out your copyright notice in the Description page of Project Settings.

#include "TestProject.h"
#include "TestProjectGameMode.h"




ATestProjectGameMode::ATestProjectGameMode(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer)
{
	ConstructorHelpers::FClassFinder<AHUD> TheHUDObj(TEXT("/Game/Default/Blueprint/MyHUDBlueprint"));
	if (TheHUDObj.Class != NULL)
	{
		HUDClass = TheHUDObj.Class;
	}

	ConstructorHelpers::FClassFinder<APawn> ThePawnObj(TEXT("/Game/Default/Blueprint/MyPawnBlueprint"));
	if (ThePawnObj.Class != NULL)
	{
		DefaultPawnClass = ThePawnObj.Class;
	}
}