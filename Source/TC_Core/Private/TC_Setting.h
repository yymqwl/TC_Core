// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "TC_Setting.generated.h"

/**
 *
 * Core内部配置文件
 */
UCLASS(Config=TC_Setting,Defaultconfig)//Defaultconfig
class TC_CORE_API UTC_Setting : public UObject
{
	GENERATED_BODY()
public:
	/*UPROPERTY(config)
	FString Name;
	UPROPERTY(Config)
	ELog_Type Log_Type;*/
};
