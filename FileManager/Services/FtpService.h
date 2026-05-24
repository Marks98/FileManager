#pragma once
#include <string>
#include "../ConnectionManager.h"

class FtpService
{
public:
	// callbacky
	FtpService(ConnectionManager& connectionManager) {};
	
	void LoadFolder(const std::string& url, const std::string& credentials);
};