#pragma once
#include <iostream>

class MyException : public std::domain_error
{
public:
	MyException(const char* err);
};

