// Fill out your copyright notice in the Description page of Project Settings.

#include "TestProject.h"
#include "MyGameInstance.h"




UMyGameInstance::UMyGameInstance(const FObjectInitializer& ObjectInitializer) :
	Super(ObjectInitializer),
	isPressed(false)
{

}

bool UMyGameInstance::GetisPressed()
{
	return isPressed;
}

void UMyGameInstance::SetisPressed(bool _Flg)
{
	isPressed = _Flg;
}