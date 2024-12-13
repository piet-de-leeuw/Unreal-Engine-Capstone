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
	
protected:
	UPROPERTY(BlueprintReadWrite, Category = "Reference", meta = (BlueprintProtected))
	AMyPlayer* PlayerRef;
	UPROPERTY(BlueprintReadWrite, Category = "Reference", meta = (BlueprintProtected))
	UMyGameHUD* GameHUDRef;
	UPROPERTY(BlueprintReadWrite, Category = "Lives", meta = (BlueprintProtected))
	int Lives = 3;
	UPROPERTY(BlueprintReadWrite, Category = "Score", meta = (BlueprintProtected))
	int Score = 0;
};
