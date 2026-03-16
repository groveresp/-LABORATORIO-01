#pragma once
#include "CoreMinimal.h"
#include "Enemigo.h"
#include "EnemigoCuadrado.generated.h"

UCLASS()
class NAVESUSFX_01_2026_API AEnemigoCuadrado : public AEnemigo
{
    GENERATED_BODY()

protected:
    virtual void Move(float DeltaTime) override;

    int Direccion = 0;
    float Distancia = 0.0f;
    float Velocidad = 100.0f;
    float MaxDistancia = 400.0f;
};
