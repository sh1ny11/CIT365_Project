// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "WinWidget.generated.h"

/**
 * 
 */
UCLASS()
class LAB06_API UWinWidget : public UUserWidget
{
	GENERATED_BODY()

public:

	UFUNCTION(BlueprintCallable)
	void ChangeText();
	//get reference to the UpdateText variable
	UPROPERTY(meta = (BindWidget))
	class UTextBlock* UpdateText;
	
};
