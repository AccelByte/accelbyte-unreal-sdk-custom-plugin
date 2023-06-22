// Copyright (c) 2021 AccelByte Inc. All Rights Reserved.
// This is licensed software from AccelByte Inc, for limitations
// and restrictions contact your company contract manager.

#pragma once

#include "CoreMinimal.h"

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
	FString Name{};
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "AccelByte | Category | Models | Custom ")
	int32 Age{INDEX_NONE};
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "AccelByte | Category | Models | Custom ")
	EAccelByteCustomModelOptionEnum PayloadOption{};
};

USTRUCT(BlueprintType)
struct ACCELBYTEUE4SDKCUSTOMIZATION_API FAccelByteCustomModelResponse
{
	GENERATED_BODY()
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "AccelByte | Category | Models | Custom ")
	FString Method{};
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "AccelByte | Category | Models | Custom ")
	FString Url{};
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "AccelByte | Category | Models | Custom ")
	TMap<FString, FString> Args{};
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "AccelByte | Category | Models | Custom ")
	TMap<FString, FString> Headers{};
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "AccelByte | Category | Models | Custom ")
	TMap<FString, FString> Form{};
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "AccelByte | Category | Models | Custom ")
	FAccelByteCustomModelRequest Json{};
};
