// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "DLCLoader.h"
#include "MapInfoAsset.h"
#include "Engine/GameInstance.h"
#include "PakPracticeGameInstance.generated.h"

/**
 * 
 */
UCLASS()
class UE4_PAKPRACTICE_DLC_API UPakPracticeGameInstance : public UGameInstance
{
	GENERATED_BODY()

protected:
	UPROPERTY()
	UDLCLoader * _DLCLoader;
public:
	UFUNCTION(BlueprintCallable)
	TArray<FMapInfo> GetMapsInfo();
protected:
	void Init() override;
	
};
