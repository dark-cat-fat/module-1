#include "MyException.h"

MyException::MyException(const char* err) : std::domain_error(err) {};