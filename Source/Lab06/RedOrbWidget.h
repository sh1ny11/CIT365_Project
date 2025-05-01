// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "RedOrbWidget.generated.h"

/**
 * 
 */
UCLASS()
class LAB06_API URedOrbWidget : public UUserWidget
{
	GENERATED_BODY()

public:

	UFUNCTION(BlueprintCallable)
	void ChangeText();

	UPROPERTY(meta = (BindWidget))
	class UTextBlock* UpdateText;

	
};
