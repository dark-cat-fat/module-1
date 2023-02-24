#include "Eagle.h"

Eagle::Eagle()
{
	name = "Îð¸ë";
	speed = 8;
	time = 0;
	type = 2;
	coefficient = 100 - 6;
	coefficient = coefficient / 100;
}

int Eagle::time_dist(int distance)
{
	float reduction = distance * this->coefficient;
	this->time = reduction / this->speed;

	return this->time;
}