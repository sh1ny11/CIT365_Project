// Fill out your copyright notice in the Description page of Project Settings.


#include "PointOne.h"
#include "MyUserWidget.h"

// Sets default values
APointOne::APointOne()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void APointOne::BeginPlay()
{
	Super::BeginPlay();

	//gets the sphere mesh component and sets it to do overlap events with other actors
	SphereMesh = FindComponentByClass<UStaticMeshComponent>();
	SphereMesh->OnComponentBeginOverlap.AddDynamic(this, &APointOne::OnOverlapBegin);
	SphereMesh->SetGenerateOverlapEvents(true);
	
}

// Called every frame
void APointOne::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

//function for overlap events with Actor
void APointOne::OnOverlapBegin(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult) {
	UE_LOG(LogTemp, Warning, TEXT("COLLISION DETECTED"));

	//HUD->UpdateScore(8);
}

