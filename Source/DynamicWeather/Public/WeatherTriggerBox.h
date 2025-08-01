#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "WeatherTypes.h" 
#include "WeatherTriggerBox.generated.h"

class UBoxComponent;
class AWeatherSpawner; // Forward Declaration

UCLASS()
class DYNAMICWEATHER_API AWeatherTriggerBox : public AActor
{
	GENERATED_BODY()

public:
	AWeatherTriggerBox();

protected:
	virtual void BeginPlay() override;

	UFUNCTION()
	void OnOverlapBegin(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
	UFUNCTION()
	void OnOverlapEnd(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
	UBoxComponent* TriggerVolume;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Weather Settings")
	FWeatherData WeatherToSet;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Weather Settings")
	bool bIsStopTrigger = false;

private:
	UPROPERTY()
	AWeatherSpawner* WeatherSpawner;
};