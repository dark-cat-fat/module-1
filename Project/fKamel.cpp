#include "fKamel.h"

fKamel::fKamel()
{
	name = "Верблюд-быстроход";
	speed = 40;
	type = 1;
	rest = 0;
	time = 0;
	timeToRest = 10;
}

int fKamel::time_dist(int distance)
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
				this->rest += 5;

			else if (i == 2)
				this->rest += 6.5;

			else
				this->rest += 5;
		}

		this->time += rest;

		return this->time;
	}
}