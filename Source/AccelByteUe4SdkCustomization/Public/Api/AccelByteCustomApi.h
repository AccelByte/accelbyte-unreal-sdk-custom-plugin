#pragma once

#include "Core/AccelByteMultiRegistry.h"
#include "Core/AccelByteHttpRetryScheduler.h"
#include "Models/AccelByteCustomModels.h"

namespace AccelByte
{
	namespace Api
	{
		class ACCELBYTEUE4SDKCUSTOMIZATION_API CustomApi : FApiBase
		{
		public:
			CustomApi(Credentials const& CredentialsRef, Settings const& SettingsRef, FHttpRetryScheduler& HttpRef);
			~CustomApi();

			void ExampleSubmitFunction(
				FAccelByteCustomModelRequest const& Struct,
				THandler<FAccelByteCustomModelResponse> const& OnSuccess,
				FErrorHandler const& OnError);

			void ExampleRetrieveFunction(
				EAccelByteCustomModelOptionEnum Option,
				THandler<FAccelByteCustomModelResponse> const& OnSuccess,
				FErrorHandler const& OnError);
		};
	}
}