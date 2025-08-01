#include "WeatherSpawner.h"
#include "Components/SphereComponent.h"
#include "NiagaraComponent.h"
#include "Components/AudioComponent.h"
#include "Kismet/GameplayStatics.h"
#include "Sound/SoundCue.h"
#include "Engine/Engine.h" // For Debug Messages

AWeatherSpawner::AWeatherSpawner()
{
	PrimaryActorTick.bCanEverTick = true;

	Root = CreateDefaultSubobject<USceneComponent>(TEXT("RootComponent"));
	RootComponent = Root;

	CollisionSphere = CreateDefaultSubobject<USphereComponent>(TEXT("CollisionSphere"));
	CollisionSphere->SetupAttachment(RootComponent);
	CollisionSphere->SetCollisionProfileName("NoCollision"); 

	ParticleComponent = CreateDefaultSubobject<UNiagaraComponent>(TEXT("ParticleComponent"));
	ParticleComponent->SetupAttachment(RootComponent);

	AudioComponent = CreateDefaultSubobject<UAudioComponent>(TEXT("AudioComponent"));
	AudioComponent->SetupAttachment(RootComponent);
}

void AWeatherSpawner::BeginPlay()
{
	Super::BeginPlay();
	PlayerPawn = UGameplayStatics::GetPlayerPawn(this, 0);
	ClearWeatherData();
}

void AWeatherSpawner::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	if (PlayerPawn && CurrentFollowingSpeed > 0.f)
	{
		FVector TargetLocation = PlayerPawn->GetActorLocation();
		FVector NewLocation = FMath::VInterpTo(GetActorLocation(), TargetLocation, DeltaTime, CurrentFollowingSpeed);
		SetActorLocation(NewLocation);
	}
}

void AWeatherSpawner::SetWeatherData(const FWeatherData& NewWeatherData)
{
	if (GEngine)
	{
		GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Cyan, TEXT("SetWeatherData function was called!"));
	}

	ParticleComponent->SetAsset(NewWeatherData.ParticleSystem);
	ParticleComponent->Activate(true);
	ParticleComponent->SetNiagaraVariableFloat(FString("User.SpawnRate"), NewWeatherData.Amount);

	AudioComponent->SetSound(NewWeatherData.Sound);
	AudioComponent->Play();

	CurrentFollowingSpeed = NewWeatherData.FollowingSpeed;
}

void AWeatherSpawner::ClearWeatherData()
{
	ParticleComponent->Deactivate();
	AudioComponent->FadeOut(1.0f, 0.0f);
	CurrentFollowingSpeed = 0.f;
}