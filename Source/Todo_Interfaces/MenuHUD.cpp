// Fill out your copyright notice in the Description page of Project Settings.

#include "MenuHUD.h"
#include "SMainMenuWidget.h"
#include "Widgets/SWeakWidget.h"
#include "Engine/Engine.h"
#include "GameFramework/HUD.h"
#include "GameFramework/PlayerController.h"


void AMenuHUD::BeginPlay()
{
	Super::BeginPlay();
	ShowMenu();
}

void AMenuHUD::ShowMenu()
{

	if (GEngine && GEngine->GameViewport)
	{
		MenuWidget = SNew(SMainMenuWidget).OwningHUD(this);
		GEngine->GameViewport->AddViewportWidgetContent(SAssignNew(MenuWidgetContainer, SWeakWidget).PossiblyNullContent(MenuWidget.ToSharedRef()));
		if (PlayerOwner)
		{
			PlayerOwner->bShowMouseCursor = true;
			PlayerOwner->SetInputMode(FInputModeUIOnly());
		}

	}

}

// Funcion para eleminar la interfaz una vez que se presiono un determindado boton
void AMenuHUD::RemoveMenu()
{
	if (GEngine && GEngine->GameViewport && MenuWidget.IsValid())
	{
		GEngine->GameViewport->RemoveViewportWidgetContent(MenuWidgetContainer.ToSharedRef());
		if (PlayerOwner)
		{
			PlayerOwner->bShowMouseCursor = false;
			FInputModeGameOnly InputMode;
			PlayerOwner->SetInputMode(InputMode);
		}
	}
}


