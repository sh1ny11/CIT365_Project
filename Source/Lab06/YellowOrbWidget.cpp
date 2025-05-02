// Fill out your copyright notice in the Description page of Project Settings.


#include "YellowOrbWidget.h"
#include "Components/TextBlock.h"

//function for changing the text in the widget UI
void UYellowOrbWidget::ChangeText() {


	if (UpdateText) {
		UpdateText->SetText(FText::FromString(TEXT("Yellow Orb: Obtained!")));
	}
}

