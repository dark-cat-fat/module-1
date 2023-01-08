#include <iostream>

class figure
{
protected:
	int sides;

public:
	figure() {}

	figure(int sides)
	{
		this->sides = sides;
		std::cout << "������: " << sides <<std::endl;
	}
};

class triangle : public figure
{
public:
	triangle() {};

	triangle(int sides)
	{
		this->sides = sides;
		std::cout << "�����������: " << sides << std::endl;
	}
};

class quadrilateral : public triangle
{
public:
	quadrilateral() {};

	quadrilateral(int sides)
	{
		this->sides = sides;
		std::cout << "���������������: " << sides << std::endl;
	}
};

void main()
{
	setlocale(LC_ALL, "Russian");

	figure figure(0);
	triangle triangle(3);
	quadrilateral quadrilateral(4);
}