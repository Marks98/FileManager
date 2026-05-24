#pragma once
#include "string"

//Definice globální struktury File pro odpovìdi ze serveru
struct FtpFile 
{
	bool folder = false;// Ano / Ne
	std::string changedAt;//string, kdy byl soubor naposledy upraven
	int size = 0;//velikost souboru
	std::string name;//název souboru
};

//Definice globální struktury pro konkrétní pøipojení
struct Connection 
{
	std::string name;
	std::string host;
	int port = 21;
	std::string username;
	std::string password;
	std::string note;
};

enum class FileType
{
	Uknown,
	Text,
	Image,
	Video,
	Audio,
};