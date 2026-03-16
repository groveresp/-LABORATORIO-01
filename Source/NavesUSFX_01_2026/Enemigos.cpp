#include "Enemigos.h"
#include "Engine/World.h"

AEnemigos::AEnemigos()
{
    PrimaryActorTick.bCanEverTick = false;
}

void AEnemigos::BeginPlay()
{
    Super::BeginPlay();

    if (!ClaseAInstanciar)
    {
        UE_LOG(LogTemp, Warning, TEXT("No se ha asignado ClaseAInstanciar en AEnemigos"));
        return;
    }

    FVector PosicionBase = GetActorLocation();

    for (int i = 0; i < CantidadEnemigos; i++)
    {
        FVector NuevaPos = PosicionBase + FVector(i * Separacion, 0, 0);


        AEnemigoCuadrado* NuevoEnemigo = GetWorld()->SpawnActor<AEnemigoCuadrado>(
            ClaseAInstanciar,
            NuevaPos,
            FRotator::ZeroRotator
        );

        if (NuevoEnemigo)
        {
            NuevoEnemigo->SetLifeSpan(10.0f);
        }
    }
}



