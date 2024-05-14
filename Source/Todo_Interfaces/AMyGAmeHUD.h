#pragma once

#include "CoreMinimal.h"
#include "GameFramework/HUD.h"
#include "Widgets/SWeakWidget.h"
#include "Todo_InterfacesPawn.h"  // Incluye tu clase de nave
#include "SSLiteBarWidget.h" 
#include "AMyGameHUD.generated.h"

UCLASS()
class TODO_INTERFACES_API AMyGameHUD : public AHUD
{
    GENERATED_BODY()

public:
	virtual void BeginPlay() override;
	virtual void Tick(float DeltaTime) override;  // Asegúrate de implementar Tick
	AMyGameHUD();

protected:
	TSharedPtr<SSLiteBarWidget> LifeBarWidget; // Asegúrate de que esto concuerde con la definición de clase

private:
	ATodo_InterfacesPawn* PlayerPawn;  // Puntero a la nave
};
