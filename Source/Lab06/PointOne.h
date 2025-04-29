// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "PointOne.generated.h"

//forward declaration of user widget class
class UMyUserWidget;

UCLASS()
class LAB06_API APointOne : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	APointOne();

	//Create reference to the sphere static mesh component of the actor
	UStaticMeshComponent* SphereMesh;

	//creates reference to the MyUserWidget class
	UPROPERTY()
	UMyUserWidget* HUD;
	//allows assignment of widget BP in editor
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "UI")
	TSubclassOf<UMyUserWidget> WidgetClass;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	//ufunction definition for the overlap event for POINT increments
	UFUNCTION()
	void OnOverlapBegin(
		class UPrimitiveComponent* OverlappedComp,
		class AActor* OtherActor,
		class UPrimitiveComponent* OtherComp,
		int32 OtherBodyIndex,
		bool bFromSweep,
		const FHitResult& SweepResult);

};
