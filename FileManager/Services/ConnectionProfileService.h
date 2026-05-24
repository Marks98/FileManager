#pragma once
#include <string>
#include <vector>
#include "../Globals/Global.h"

class ConnectionProfileService
{
	friend std::ofstream& operator << (std::ofstream& ofs, ConnectionProfileService& file);
	friend std::ifstream& operator >> (std::ifstream& ifs, ConnectionProfileService& file);

	friend std::ofstream& operator << (std::ofstream& ofs, Connection connection);
	friend std::ifstream& operator >> (std::istream& ifs, Connection connection);

public:
	void SaveProfiles();
	void LoadProfiles();
	void AddProfile(const Connection connection);
	void UpdateProfile(int index, const Connection& connection);
	void DeleteProfile(int index);

private:
	std::vector<Connection> m_profiles;
	const std::string m_connectionsPath = "connections.dat";
};