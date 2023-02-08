#pragma once
#include <iostream>

#ifdef STRING_EXPORTS
#define STRING_RETURN __declspec(dllexport)
#else
#define STRING_RETURN __declspec(dllimport)
#endif

class Leaver
{
	STRING_RETURN std::string leave(std::string input);
};