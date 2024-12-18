// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "MyGameModeBase.generated.h"

class AMyPlayer;
class UMyGameHUD;

UCLASS()
class SANDBOX_API AMyGameModeBase : public AGameModeBase
{
	GENERATED_BODY()

public:
	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable, Category = "Health")
	void UpdateLives(const float Damage);
	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable, Category = "Score")
	void UpdateScore(const int Value);
	
private:
	UPROPERTY(BlueprintReadWrite, Category = "Reference", meta = (AllowPrivateAccess = true))
	UMyGameHUD* GameHUDRef;
	UPROPERTY(BlueprintReadWrite, Category = "Health", meta = (AllowPrivateAccess = true))
	int Lives = 7;
	UPROPERTY(BlueprintReadWrite, Category = "Score", meta = (AllowPrivateAccess = true))
	int Score = 0;
};
