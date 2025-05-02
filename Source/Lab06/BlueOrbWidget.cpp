// Fill out your copyright notice in the Description page of Project Settings.


#include "BlueOrbWidget.h"
#include "Components/TextBlock.h"

//function for changing the text in the widget UI
void UBlueOrbWidget::ChangeText() {


	if (UpdateText) {
		UpdateText->SetText(FText::FromString(TEXT("Blue Orb: Obtained!")));
	}
}