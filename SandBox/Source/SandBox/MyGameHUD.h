// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "MyGameHUD.generated.h"

/**
 * 
 */
UCLASS()
class SANDBOX_API UMyGameHUD : public UUserWidget
{
	GENERATED_BODY()

public:
	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable, Category = "UpdateHUD")
	void UpdateHUDLives(const int Lives);
	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable, Category = "UpdateHUD")
	void UpdateHUDScore(const int score);

};
