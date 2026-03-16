#include "EnemigoCuadrado.h"

void AEnemigoCuadrado::Move(float DeltaTime)
{
    FVector Direcciones[4] =
    {
        FVector(1,0,0),
        FVector(0,1,0),
        FVector(-1,0,0),
        FVector(0,-1,0)
    };

    FVector Mov = Direcciones[Direccion] * Velocidad * DeltaTime;
    SetActorLocation(GetActorLocation() + Mov);

    Distancia += Mov.Size();
    if (Distancia >= MaxDistancia)
    {
        Distancia = 0;
        Direccion = (Direccion + 1) % 4;
    }
}

