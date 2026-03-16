#pragma once
#include "CoreMinimal.h"
#include "Enemigo.h" 
#include "GameFramework/Actor.h"
#include "EnemigoCuadrado.h"
#include "Enemigos.generated.h"

UCLASS()
class NAVESUSFX_01_2026_API AEnemigos : public AEnemigo
{
    GENERATED_BODY()

public:
    AEnemigos();

protected:
    virtual void BeginPlay() override;

private:

    UPROPERTY(EditAnywhere, Category = "Spawning")
    int CantidadEnemigos = 5;


    UPROPERTY(EditAnywhere, Category = "Spawning")
    float Separacion = 400.0f;


    UPROPERTY(EditAnywhere, Category = "Spawning")
    TSubclassOf<AEnemigoCuadrado> ClaseAInstanciar;
};
