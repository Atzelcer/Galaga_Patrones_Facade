// Copyright Epic Games, Inc. All Rights Reserved.

#include "Todo_InterfacesGameMode.h"
#include "Todo_InterfacesPawn.h"
#include "UObject/ConstructorHelpers.h"
#include "MenuHUD.h" 
#include "AMyGAmeHUD.h"
#include "MenuPlayerController.h"


ATodo_InterfacesGameMode::ATodo_InterfacesGameMode()
{
	// set default pawn class to our character class
	DefaultPawnClass = ATodo_InterfacesPawn::StaticClass();

	//Para controlar las entradas del jugador con la interfaz del menu
	PlayerControllerClass = AMenuPlayerController::StaticClass();

	// Para que se llegue a mostrar el menu
	HUDClass = AMenuHUD::StaticClass();
	//HUDClass = AMyGameHUD::StaticClass();
}

