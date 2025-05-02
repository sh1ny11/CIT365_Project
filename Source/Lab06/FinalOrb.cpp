// Fill out your copyright notice in the Description page of Project Settings.


#include "FinalOrb.h"
#include "WinWidget.h"

// Sets default values
AFinalOrb::AFinalOrb()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AFinalOrb::BeginPlay()
{
	Super::BeginPlay();

	//gets the sphere mesh component and sets it to do overlap events with other actors
	SphereMesh = FindComponentByClass<UStaticMeshComponent>();
	SphereMesh->OnComponentBeginOverlap.AddDynamic(this, &AFinalOrb::OnOverlapBegin);
	SphereMesh->SetGenerateOverlapEvents(true);

	//adds the widget to the viewport, allows it to be accessed
	if (WidgetClass) {
		HUD = CreateWidget<UWinWidget>(GetWorld(), WidgetClass);
		if (HUD) {
			HUD->AddToViewport();
		}
	}
	
}

// Called every frame
void AFinalOrb::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

//overlap event function, activates when the player touvhes the actor - updates the widget and destroys THIS actor
void AFinalOrb::OnOverlapBegin(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult) {

	HUD->ChangeText();

	OtherActor->Destroy();
	Destroy();

}

