// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"
#include "MenuPlayerController.generated.h"

// Clase para detectar cuando el usuario desea interactuar con el menu
UCLASS()
class TODO_INTERFACES_API AMenuPlayerController : public APlayerController
{
	GENERATED_BODY()

protected:
	AMenuPlayerController();

	// Vincula las acciones de apertura del menu
	virtual void SetupInputComponent() override;


	// Metodo para abrir el menu
	void OpenMenu();
	
};
