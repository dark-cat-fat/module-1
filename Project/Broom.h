#pragma once
#include "AirT.h"

class Broom : public AirT
{
public:
	Broom();
	int time_dist(int distance) override;
};

