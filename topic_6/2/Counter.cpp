#include <iostream>
#include "Counter.h"

Counter::Counter(int count){ this->count = count; }
Counter::Counter() { count = 1; }

void Counter::add()
{
	count++;
}

void Counter::subtract()
{
	count--;
}

void Counter::show()
{
	std::cout << count << std::endl;
}