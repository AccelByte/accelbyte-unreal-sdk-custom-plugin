// Copyright (c) 2021 AccelByte Inc. All Rights Reserved.
// This is licensed software from AccelByte Inc, for limitations
// and restrictions contact your company contract manager.

#pragma once

#include "CoreMinimal.h"
#include "JsonObjectWrapper.h"
#include "Models/AccelByteGeneralModels.h"

#include "AccelByteCustomModels.generated.h"

UENUM(BlueprintType)
enum class EAccelByteCustomModelOptionEnum : uint8
{
	NONE = 0,
	FIRST_OPTION,
	SECOND_OPTION
};

USTRUCT(BlueprintType)
struct ACCELBYTEUE4SDKCUSTOMIZATION_API FAccelByteCustomModelRequest
{
	GENERATED_BODY()
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "AccelByte | Category | Models | Custom ")
		FString Payload {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "AccelByte | Category | Models | Custom ")
		EAccelByteCustomModelOptionEnum PayloadOption {};
};

USTRUCT(BlueprintType)
struct ACCELBYTEUE4SDKCUSTOMIZATION_API FAccelByteCustomModelRetrieve
{
	GENERATED_BODY()
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "AccelByte | Category | Models | Custom ")
		FString Payload {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "AccelByte | Category | Models | Custom ")
		EAccelByteCustomModelOptionEnum PayloadOption {};
};