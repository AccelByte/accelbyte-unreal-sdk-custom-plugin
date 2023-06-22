#include "Api/AccelByteCustomApi.h"
#include "Core/AccelByteCustomizationSettings.h"

namespace AccelByte
{
	namespace Api
	{
		CustomApi::CustomApi(Credentials const& CredentialsRef, Settings const& SettingsRef, FHttpRetryScheduler& HttpRef) :
			FApiBase(CredentialsRef, SettingsRef, HttpRef)
		{}
		
		CustomApi::~CustomApi() {}

		void CustomApi::ExampleSubmitFunction(FAccelByteCustomModelRequest const& Struct, THandler<FAccelByteCustomModelResponse> const& OnSuccess, FErrorHandler const& OnError)
		{
			FReport::Log(FString(__FUNCTION__));
			
			FString Url = FString::Printf(TEXT("%s/public/namespace/%s/<submitEndpointUrl>"), *CustomizationSettings::Get().CustomizationUrlExample, *CredentialsRef.GetNamespace());
			FString Verb = TEXT("POST"); // Verb : [ POST, GET, PUT, PATCH, DELETE ]

			HttpClient.ApiRequest(Verb, Url, {}, Struct, OnSuccess, OnError);
		}

		void CustomApi::ExampleRetrieveFunction(EAccelByteCustomModelOptionEnum Option, THandler<FAccelByteCustomModelResponse> const& OnSuccess, FErrorHandler const& OnError)
		{
			FReport::Log(FString(__FUNCTION__));
			
			FString Url = FString::Printf(TEXT("%s/public/namespace/%s/<retrieveEndpointUrl>"), *CustomizationSettings::Get().CustomizationUrlExample, *CredentialsRef.GetNamespace());
			FString Verb = TEXT("GET"); // Verb : [ POST, GET, PUT, PATCH, DELETE ]
			
			const TMap<FString, FString> QueryParams = {
				{ TEXT("option"), Option != EAccelByteCustomModelOptionEnum::NONE ? FAccelByteUtilities::GetUEnumValueAsString(Option): ""}
			};

			HttpClient.ApiRequest(Verb, Url, QueryParams, OnSuccess, OnError);
		}
	}
}