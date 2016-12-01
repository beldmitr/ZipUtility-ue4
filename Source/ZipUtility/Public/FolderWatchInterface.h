// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "FolderWatchInterface.generated.h"

UINTERFACE(MinimalAPI)
class UFolderWatchInterface : public UInterface
{
	GENERATED_UINTERFACE_BODY()
};

class ZIPUTILITY_API IFolderWatchInterface
{
	GENERATED_IINTERFACE_BODY()

public:

	/**
	* Called when a file inside the folder has changed
	* @param FilePath Path of the file that has changed
	*/
	UFUNCTION(BlueprintNativeEvent, Category = FolderWatchEvent)
	void OnFileChanged(const FString& FilePath);

	UFUNCTION(BlueprintNativeEvent, Category = FolderWatchEvent)
	void OnDirectoryChanged(const FString& FilePath);
};