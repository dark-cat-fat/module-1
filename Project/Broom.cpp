#include "Broom.h"

Broom::Broom()
{
	name = "Метла";
	speed = 20;
	time = 0;
	type = 2;
	coefficient = 1;
}

int Broom::time_dist(int distance)
{
	this->coefficient = distance / 1000;

	
	if (this->coefficient >= 1 && this->coefficient <= 100)
	{
		this->coefficient = 100 - this->coefficient;
		this->coefficient = coefficient / 100;

		float reduction = distance * this->coefficient;

		this->time = reduction / this->speed;
		
		return this->time;
	}

	else
	{
		this->time = distance / this->speed;
		return this->time;
	}
}