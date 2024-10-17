// Fill out your copyright notice in the Description page of Project Settings.


#include "OpenAIConnector.h"
#include "Http.h"
#include "Misc/OutputDevice.h"

UOpenAIConnector::UOpenAIConnector()
{
}

UOpenAIConnector::~UOpenAIConnector()
{
}

void UOpenAIConnector::OnResponseReceived(FHttpRequestPtr Request, FHttpResponse Response, bool bWasSuccessful)
{
    PrintHelloWorld();
}

void UOpenAIConnector::PrintHelloWorld()
{
    UE_LOG(LogTemp, Log, TEXT("Hello World!"));
}