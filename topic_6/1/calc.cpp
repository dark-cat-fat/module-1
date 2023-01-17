#include "calc.h"

float pow(int x, int y)
{
	int result = 1;

	while (y > 0)
	{
		result *= x;
		y--;
	}

	return result;
}

float add(int x, int y)
{
	return x + y;
}

float sub(int x, int y)
{
	return x - y;
}

float divi(int x, int y)
{
	return x / y;
}

float multi(int x, int y)
{
	return x * y;
}
