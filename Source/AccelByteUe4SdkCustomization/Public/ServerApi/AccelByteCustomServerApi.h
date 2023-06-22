#pragma once

#include "Core/AccelByteMultiRegistry.h"
#include "Core/AccelByteHttpRetryScheduler.h"

namespace AccelByte
{
	namespace Api
	{
		class ACCELBYTEUE4SDKCUSTOMIZATION_API CustomServerApi : FServerApiBase
		{
		public:
			CustomServerApi(ServerCredentials const& CredentialsRef, ServerSettings const& SettingsRef, FHttpRetryScheduler& HttpRef);
			~CustomServerApi();
		};
	}
}