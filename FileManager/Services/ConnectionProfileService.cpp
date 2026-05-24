#include "ConnectionProfileService.h"
#include <fstream>
#include <iostream>

// Settery

void ConnectionProfileService::SaveProfiles()
{
	std::ofstream ofs(m_connectionsPath, std::ios::binary);
}

void ConnectionProfileService::AddProfile(const Connection& connection)
{
	m_profiles.insert(m_profiles.end(), connection);
}

// Gettery

void ConnectionProfileService::LoadProfiles() 
{

}

// Pøetížení operátorù

// Zápis
std::ofstream& operator << (std::ofstream& ofs, Connection connection)
{
	size_t length = connection.name.size();
	ofs.write(reinterpret_cast<const char*>(&length), sizeof(length));
	ofs.write(connection.name.c_str(), length);

	length = connection.host.size();
	ofs.write(reinterpret_cast<const char*>(&length), sizeof(length));
	ofs.write(connection.host.c_str(), length);

	length = connection.port;
	ofs.write(reinterpret_cast<const char*>(&length), sizeof(length));

	length = connection.username.size();
	ofs.write(reinterpret_cast<const char*>(&length), sizeof(length));
	ofs.write(connection.username.c_str(), length);

	length = connection.password.size();
	ofs.write(reinterpret_cast<const char*>(&length), sizeof(length));
	ofs.write(connection.password.c_str(), length);

	length = connection.note.size();
	ofs.write(reinterpret_cast<const char*>(&length), sizeof(length));
	ofs.write(connection.note.c_str(), length);

	return ofs;
}

// Ètení
std::ifstream& operator >> (std::ifstream& ifs, Connection connection)
{
	size_t length = 0;
	ifs.read(reinterpret_cast<char*>(&length), sizeof(length));
	connection.name.resize(length);
	ifs.read(&connection.name[0], length);

	ifs.read(reinterpret_cast<char*>(&length), sizeof(length));
	connection.host.resize(length);
	ifs.read(&connection.host[0], length);

	ifs.read(reinterpret_cast<char*>(&connection.port), sizeof(connection.port));

	ifs.read(reinterpret_cast<char*>(&length), sizeof(length));
	connection.username.resize(length);
	ifs.read(&connection.username[0], length);

	ifs.read(reinterpret_cast<char*>(&length), sizeof(length));
	connection.password.resize(length);
	ifs.read(&connection.password[0], length);

	ifs.read(reinterpret_cast<char*>(&length), sizeof(length));
	connection.note.resize(length);
	ifs.read(&connection.note[0], length);
}