// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/HUD.h"
#include "MenuHUD.generated.h"

UCLASS()
class TODO_INTERFACES_API AMenuHUD : public AHUD
{
    GENERATED_BODY()

public:
    // Prepara la interfaz para ser mostrada
    void ShowMenu();

    // Oculta y desactiva el menu
    void RemoveMenu();

protected:
    
    TSharedPtr<class SMainMenuWidget> MenuWidget;
    TSharedPtr<class SWidget> MenuWidgetContainer;

    virtual void BeginPlay() override;
};
