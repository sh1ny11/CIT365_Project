// Fill out your copyright notice in the Description page of Project Settings.


#include "RedOrb.h"
#include "RedOrbWidget.h"

// Sets default values
ARedOrb::ARedOrb()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ARedOrb::BeginPlay()
{
	Super::BeginPlay();

	//gets the sphere mesh component and sets it to do overlap events with other actors
	SphereMesh = FindComponentByClass<UStaticMeshComponent>();
	SphereMesh->OnComponentBeginOverlap.AddDynamic(this, &ARedOrb::OnOverlapBegin);
	SphereMesh->SetGenerateOverlapEvents(true);

	if (WidgetClass) {
		HUD = CreateWidget<URedOrbWidget>(GetWorld(), WidgetClass);
		if (HUD) {
			HUD->AddToViewport();
		}
	}
	
}

// Called every frame
void ARedOrb::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

//function for overlap events with Actor
void ARedOrb::OnOverlapBegin(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult) {
	UE_LOG(LogTemp, Warning, TEXT("COLLISION DETECTED"));

	HUD->ChangeText();

	Destroy();
}

