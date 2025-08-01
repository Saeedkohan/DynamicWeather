#pragma once

#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "WeatherTypes.generated.h"

// Forward declarations
class UNiagaraSystem;
class USoundCue;

USTRUCT(BlueprintType)
struct FWeatherData : public FTableRowBase
{
	GENERATED_BODY()

public:
	// The Niagara particle system for the weather effect (e.g., rain, snow)
	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	UNiagaraSystem* ParticleSystem;

	// The ambient sound to play for this weather
	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	USoundCue* Sound;

	// A value to control the spawn rate of particles
	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	float Amount;

	// How quickly the spawner should follow the player
	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	float FollowingSpeed;
};