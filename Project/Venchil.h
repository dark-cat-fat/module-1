#pragma once
#include <iostream>

class Venchil
{
protected:
	bool status = false;
	std::string name;
	int speed;
	int type;
	int distance;
	float time;

public:
	virtual int time_dist(int distance) = 0;

	 friend std::ostream& operator<<(std::ostream& os, const Venchil* obj);

	 bool operator==(Venchil& obj);

	 bool operator!=(int iType);

	 std::string getName();
};