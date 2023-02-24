#include "Centaur.h"

Centaur::Centaur()
{
	name = "Кентавр";
	speed = 15;
	time = 0;
	type = 1;
	timeToRest = 8;
}

int Centaur::time_dist(int distance)
{
	this->time = distance / this->speed;

	if (distance / this->speed * this->timeToRest == 1 && distance % this->speed * this->timeToRest == 0)
		return this->time;

	else
	{
		if (distance % (this->speed * this->timeToRest) == 0)
			this->countRest = this->time / this->timeToRest - 1;

		else
			this->countRest = this->time / this->timeToRest;

		rest = countRest * 2;

		this->time += rest;

		return this->time;
	}
}