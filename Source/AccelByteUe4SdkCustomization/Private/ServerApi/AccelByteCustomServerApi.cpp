#include "ServerApi/AccelByteCustomServerApi.h"

namespace AccelByte
{
	namespace Api
	{
		CustomServerApi::CustomServerApi(ServerCredentials const& CredentialsRef, ServerSettings const& SettingsRef, FHttpRetryScheduler& HttpRef) :
			FServerApiBase(CredentialsRef, SettingsRef, HttpRef)
		{}
		
		CustomServerApi::~CustomServerApi() {}
	}
}