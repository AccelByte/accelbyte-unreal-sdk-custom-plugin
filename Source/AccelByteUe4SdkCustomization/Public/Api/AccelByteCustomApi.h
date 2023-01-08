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
				FAccelByteCustomModelRequest const& Param,
				FVoidHandler const& OnSuccess,
				FErrorHandler const& OnError);

			void ExampleRetrieveFunction(
				EAccelByteCustomModelOptionEnum Option,
				THandler<FAccelByteCustomModelRetrieve> const& OnSuccess,
				FErrorHandler const& OnError);
		};
	}
}