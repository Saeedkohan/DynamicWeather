#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "WeatherTypes.h" 
#include "WeatherSpawner.generated.h"

// Forward declarations
class USphereComponent;
class UNiagaraComponent;
class UAudioComponent;

UCLASS()
class DYNAMICWEATHER_API AWeatherSpawner : public AActor
{
	GENERATED_BODY()

public:
	AWeatherSpawner();
	virtual void Tick(float DeltaTime) override;

	// This function will be called by our trigger boxes to start a weather effect
	UFUNCTION(BlueprintCallable)
	void SetWeatherData(const FWeatherData& NewWeatherData);

	// This function clears the current weather effect
	UFUNCTION(BlueprintCallable)
	void ClearWeatherData();

protected:
	virtual void BeginPlay() override;

private:
	UPROPERTY(VisibleAnywhere)
	USceneComponent* Root;

	UPROPERTY(VisibleAnywhere)
	USphereComponent* CollisionSphere;

	UPROPERTY(VisibleAnywhere)
	UNiagaraComponent* ParticleComponent;

	UPROPERTY(VisibleAnywhere)
	UAudioComponent* AudioComponent;

	// Reference to the player character to follow
	UPROPERTY()
	APawn* PlayerPawn;

	// Current speed for following the player
	float CurrentFollowingSpeed;
};