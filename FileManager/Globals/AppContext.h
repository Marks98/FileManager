#pragma once
#include "../ConnectionManager.h"
#include "../Services/FtpService.h"
#include "../Services/ConnectionProfileService.h"

struct AppContext 
{
	ConnectionManager connectionManager;
	FtpService ftpService { connectionManager };
	ConnectionProfileService connectionProfileService;
};