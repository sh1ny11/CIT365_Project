// Fill out your copyright notice in the Description page of Project Settings.


#include "WinWidget.h"
#include "Components/TextBlock.h"

//function for changing the text in the widget UI
void UWinWidget::ChangeText() {


	if (UpdateText) {
		UpdateText->SetText(FText::FromString(TEXT("You reached the end! Congratulations.")));
	}
}

