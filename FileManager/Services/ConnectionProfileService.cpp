#include "ConnectionProfileService.h"
#include <fstream>
#include <iostream>

// Settery

void ConnectionProfileService::SaveProfiles()
{
	std::ofstream ofs(m_connectionsPath, std::ios::binary);
}

// Gettery

void ConnectionProfileService::LoadProfiles() {

}