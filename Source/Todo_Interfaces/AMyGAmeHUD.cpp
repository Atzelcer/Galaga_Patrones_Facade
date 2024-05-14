// Fill out your copyright notice in the Description page of Project Settings.


#include "AMyGAmeHUD.h"
#include "SlateBasics.h"
#include "SlateExtras.h"
#include "SlateOptMacros.h"
#include "Engine/Engine.h"

void AMyGameHUD::BeginPlay()
{
    Super::BeginPlay();

    if (GEngine && GEngine->GameViewport)
    {
        LifeBarWidget = SNew(SSLiteBarWidget)
            .CurrentHealth(75.0f)  // Salud inicial
            .MaxHealth(100.0f);    // Salud máxima

        GEngine->GameViewport->AddViewportWidgetContent(
            SNew(SWeakWidget).PossiblyNullContent(LifeBarWidget.ToSharedRef())
        );

        // Log para confirmar la creación
        if (LifeBarWidget.IsValid())
        {
            UE_LOG(LogTemp, Warning, TEXT("Widget de barra de vida creado y añadido correctamente."));
        }
        else
        {
            UE_LOG(LogTemp, Error, TEXT("No se pudo crear el widget de barra de vida."));
        }
    }
    else
    {
        UE_LOG(LogTemp, Error, TEXT("Game engine o viewport no disponibles."));
    }

    PlayerPawn = Cast<ATodo_InterfacesPawn>(GetWorld()->GetFirstPlayerController()->GetPawn());
}



void AMyGameHUD::Tick(float DeltaTime)
{
    Super::Tick(DeltaTime);

    // Actualiza la barra de vida solo si el Pawn es válido y el widget está creado
    if (PlayerPawn && LifeBarWidget.IsValid())
    {
        float CurrentHealth = PlayerPawn->Health;  // Obtén la salud actual
        float MaxHealth = 1000.0f;  // Suponemos que este es el máximo de salud
        float HealthPercentage = CurrentHealth / MaxHealth;  // Calcula el porcentaje
        LifeBarWidget->SetCurrentHealth(HealthPercentage);  // Actualiza la barra
    }
}

AMyGameHUD::AMyGameHUD()
{
    PrimaryActorTick.bCanEverTick = true;
}
