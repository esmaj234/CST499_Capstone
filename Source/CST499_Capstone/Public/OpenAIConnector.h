// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Http.h"
#include "OpenAIConnector.generated.h"

/**
 * OpenAIConnector handles the callouts to OpenAI
 */
UCLASS()
class CST499_CAPSTONE_API UOpenAIConnector : public UObject
{
	GENERATED_BODY()

public:
	UOpenAIConnector();
	~UOpenAIConnector();

	void OnResponseReceived(FHttpRequestPtr Request, FHttpResponsePtr Response, bool bWasSuccessful);
	void PrintHelloWorld();
};
