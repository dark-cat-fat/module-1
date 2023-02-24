#pragma once
#include "GroundT.h"

class Boots : public GroundT
{

public:
	Boots();
	int time_dist(int distance) override;
};