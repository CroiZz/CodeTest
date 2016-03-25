// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "Engine/GameInstance.h"
#include "MyGameInstance.generated.h"

/**
 * 
 */
UCLASS()
class TESTPROJECT_API UMyGameInstance : public UGameInstance
{
	GENERATED_BODY()
	
	
public:
	UMyGameInstance(const FObjectInitializer& ObjectInitializer);

	bool isPressed;

	bool GetisPressed();
	void SetisPressed(bool _Flg);
	
};
