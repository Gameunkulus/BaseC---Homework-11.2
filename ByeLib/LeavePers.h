#pragma once
#include <iostream>
#include <string>

#ifdef BYELIB_EXPORTS
#define BYELIB_API__declspec(dllexport)
#else
#define BYELIB_API_declspec(dllimport)
#endif

class Leaver {

public:
	void leave(std::string name);
};

