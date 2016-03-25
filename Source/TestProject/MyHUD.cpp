// Fill out your copyright notice in the Description page of Project Settings.

#include "TestProject.h"
#include "MyHUD.h"



AMyHUD::AMyHUD(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer)
{
	ConstructorHelpers::FObjectFinder<UTexture2D> LogoTextureObj(TEXT("/Game/StarterContent/Textures/T_Logo1"));

	LogoTexture = LogoTextureObj.Object;

	ConstructorHelpers::FObjectFinder<UTexture2D> LogoTextureObj2(TEXT("/Game/StarterContent/Textures/T_Logo2"));

	LogoTexture2 = LogoTextureObj2.Object;
}


void AMyHUD::DrawHUD()
{
	Super::DrawHUD();

	float ScreenX = 0;
	float ScreenY = 0;
	float ScreenW = 0;
	float ScreenH = 0;

	ScreenW = 300;
	ScreenH = 300;

	//	if (!MGI->GetisPressed())
//	{
		Canvas->DrawTile(LogoTexture, ScreenX, ScreenY, LogoTexture->GetSurfaceWidth(), LogoTexture->GetSurfaceHeight(),
			0, 0, LogoTexture->GetSurfaceWidth(), LogoTexture->GetSurfaceHeight(), BLEND_Translucent);
//	}

	Canvas->DrawTile(LogoTexture2, 100, 100, 100, 100, 0, 0, LogoTexture2->GetSurfaceWidth(), LogoTexture2->GetSurfaceHeight(), BLEND_Translucent);
}