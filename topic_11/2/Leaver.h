#pragma once
#include <iostream>
#include <Windows.h>

#ifdef MY2_EXPORTS
#define STRING_API __declspec(dllexport)
#else
#define STRING_API __declspec(dllimport)
#endif

class Leaver
{
public:
	STRING_API std::string leave(std::string input);
};