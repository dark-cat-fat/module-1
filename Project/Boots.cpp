#include "Boots.h"

Boots::Boots()
{
	name = "Ботинки-вездеходы";
	speed = 6;
	type = 1;
	timeToRest = 60;
	number = 1;
	time = 0;
	rest = 0;
}

int Boots::time_dist(int distance)
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



		for (int i = 1; i <= this->countRest; i++)
		{
			if (i == 1)
				this->rest += 10;

			else
				this->rest += 5;
		}

		this->time += rest;

		return this->time;
	}
}