// Fill out your copyright notice in the Description page of Project Settings.


#include "RedOrbWidget.h"
#include "Components/TextBlock.h"

void URedOrbWidget::ChangeText() {
	

	if (UpdateText) {
		UpdateText->SetText(FText::FromString(TEXT("Red Orb: Obtained!")));
	}
}

