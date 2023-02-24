#pragma once
#include "GroundT.h"

class Centaur : public GroundT
{

public:
	Centaur();
	int time_dist(int distance) override;
};

