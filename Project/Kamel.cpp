#include "Kamel.h"

Kamel::Kamel()
{
	name = "Верблюд";
	speed = 10;
	type = 1;
	time = 0;
	timeToRest = 30;
}

int Kamel::time_dist(int distance)
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

			else
				this->rest += 8;
		}

		this->time += rest;

		std::cout << name << ' ' << name << ' ' << time;

		return this->time;
	}
}