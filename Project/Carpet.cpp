#include "Carpet.h"

Carpet::Carpet() 
{
	name = "Ковёр-самолёт";
	speed = 10;
	time = 0;
	type = 2;
	coefficient = 0;
}

int Carpet::time_dist(int distance)
{
	if (distance < 1000)
	{
		this->time = distance / speed;
		return this->time;
	}

	else if (distance < 5000)
	{
		this->coefficient = 100 - 3;
		this->coefficient = coefficient / 100;

		float reduction = distance * this->coefficient;
		
		this->time = reduction / this->speed;
		return this->time;
	}

	else if (distance < 10000)
	{
		this->coefficient = 100 - 10;
		this->coefficient = coefficient / 100;

		float reduction = distance * this->coefficient;
		this->time = reduction / this->speed;
		
		return this->time;
	}

	else if (distance >= 10000)
	{
		this->coefficient = 5;
		this->coefficient = coefficient / 100;

		float reduction = distance * this->coefficient;
		this->time = reduction / this->speed;
		
		return this->time;
	}
}