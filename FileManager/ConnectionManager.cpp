#ifdef _MSC_VER
#define _CRT_SECURE_NO_WARNINGS
#endif

#include <curl/curl.h>
#include "ConnectionManager.h"
#include "Main.h"
#include <string>// Musíme si vložit knihovnu pro string, výchoze jen char
#include <sstream>
#include <fstream>
#include <regex>
#include <unordered_map>
#include "Globals/Global.h"

// Settery

void ConnectionManager::SetCredentials()
{

}

// Gettery

void ConnectionManager::LoadFolderContent()
{
	/*CURL* curl;
	CURLcode response;
	std::unique_ptr<std::string> httpData(new std::string());

	curl_global_init(CURL_GLOBAL_DEFAULT);

	curl = curl_easy_init();

	if (curl) {
		curl_easy_setopt(curl, CURLOPT_URL, "");
	}*/
}