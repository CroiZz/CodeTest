// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "GameFramework/HUD.h"
#include "MyHUD.generated.h"

/**
 * 
 */
UCLASS()
class TESTPROJECT_API AMyHUD : public AHUD
{
	GENERATED_BODY()
	
	
public:
	AMyHUD(const FObjectInitializer& ObjectInitializer);

	UTexture2D* LogoTexture;
	UTexture2D* LogoTexture2;

	virtual void AMyHUD::DrawHUD() override;
	
};