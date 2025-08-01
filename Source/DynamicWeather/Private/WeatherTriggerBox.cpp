#include "WeatherTriggerBox.h"
#include "Components/BoxComponent.h"
#include "Kismet/GameplayStatics.h"
#include "WeatherSpawner.h" 
#include "Engine/Engine.h" // For Debug Messages

AWeatherTriggerBox::AWeatherTriggerBox()
{
	TriggerVolume = CreateDefaultSubobject<UBoxComponent>(TEXT("TriggerVolume"));
	RootComponent = TriggerVolume;

	TriggerVolume->SetCollisionEnabled(ECollisionEnabled::QueryOnly);
	TriggerVolume->SetCollisionObjectType(ECollisionChannel::ECC_WorldDynamic);
	TriggerVolume->SetCollisionResponseToAllChannels(ECollisionResponse::ECR_Ignore);
	TriggerVolume->SetCollisionResponseToChannel(ECollisionChannel::ECC_Pawn, ECollisionResponse::ECR_Overlap);
}


void AWeatherTriggerBox::BeginPlay()
{
	Super::BeginPlay();

	WeatherSpawner = Cast<AWeatherSpawner>(UGameplayStatics::GetActorOfClass(GetWorld(), AWeatherSpawner::StaticClass()));
	
	TriggerVolume->OnComponentBeginOverlap.AddDynamic(this, &AWeatherTriggerBox::OnOverlapBegin);
	TriggerVolume->OnComponentEndOverlap.AddDynamic(this, &AWeatherTriggerBox::OnOverlapEnd);
}


void AWeatherTriggerBox::OnOverlapBegin(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	if (GEngine)
	{
		GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Green, TEXT("C++ Trigger Overlap Fired!"));
	}

	if (OtherActor == UGameplayStatics::GetPlayerPawn(this, 0))
	{
		if (WeatherSpawner)
		{
			if (GEngine)
			{
				GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Yellow, TEXT("Weather Spawner Found!"));
			}

			if (bIsStopTrigger)
			{
				WeatherSpawner->ClearWeatherData();
			}
			else
			{
				WeatherSpawner->SetWeatherData(WeatherToSet);
			}
		}
		else
		{
			if (GEngine)
			{
				GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, TEXT("ERROR: Weather Spawner NOT found!"));
			}
		}
	}
}

void AWeatherTriggerBox::OnOverlapEnd(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex)
{

	if (!bIsStopTrigger && OtherActor == UGameplayStatics::GetPlayerPawn(this, 0) && WeatherSpawner)
	{
		if (GEngine)
		{
			GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Orange, TEXT("Exited Trigger, Clearing Weather!"));
		}
		WeatherSpawner->ClearWeatherData();
	}
}

