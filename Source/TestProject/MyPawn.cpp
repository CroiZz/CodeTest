// Fill out your copyright notice in the Description page of Project Settings.

#include "TestProject.h"
#include "MyPawn.h"


// Sets default values
AMyPawn::AMyPawn()
{
 	// Set this pawn to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AMyPawn::BeginPlay()
{
	Super::BeginPlay();
	
	GEngine->AddOnScreenDebugMessage((uint64)-1, 2.f, FLinearColor::Red.ToFColor(true), "BeginPlay");

	this->InitializeBind();
}

// Called every frame
void AMyPawn::Tick( float DeltaTime )
{
	Super::Tick( DeltaTime );

}

// Called to bind functionality to input
void AMyPawn::SetupPlayerInputComponent(class UInputComponent* InputComponent)
{
	Super::SetupPlayerInputComponent(InputComponent);

	GEngine->AddOnScreenDebugMessage((uint64)-1, 2.f, FLinearColor::Red.ToFColor(true), "SetupPlayerInputComponent");

	InputComponent->BindAction("DisplayLeftAltKey", EInputEvent::IE_Pressed, this, &AMyPawn::PressedLeftAltKey);
}


// バインドの初期化
void AMyPawn::InitializeBind()
{
	static bool bBindingAdded = false;

	if (!bBindingAdded)
	{
		GEngine->AddOnScreenDebugMessage((uint64)-1, 2.f, FLinearColor::Red.ToFColor(true), "KeyBind");

		bBindingAdded = true;

		UPlayerInput::AddEngineDefinedActionMapping(FInputActionKeyMapping("DisplayLeftAltKey", EKeys::LeftAlt));
	}
}

// 左Altキーが押されたときの処理
void AMyPawn::PressedLeftAltKey()
{
	GEngine->AddOnScreenDebugMessage((uint64)-1, 2.f, FLinearColor::Red.ToFColor(true), "PressedLeftAlt");
}