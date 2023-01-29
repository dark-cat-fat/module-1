#include <iostream>
#include "Triangle.h"
#include "MyException.h"

Triangle::Triangle(int a, int b, int c, int A, int B, int C, std::string name)
{

		this->a = a;
		this->b = b;
		this->c = c;
		this->A = A;
		this->B = B;
		this->C = C;
		this->name = name;

		if ((A + B + C) != 180)
			throw MyException("������ �������� ������. �������: ����� ����� �� ����� 180");

}

void Triangle::check()
{
	std::cout << name << "(������� " << a << ", " << b << ", " << c;
	std::cout << "; ���� " << A << ", " << B << ", " << C << ") ������" << std::endl;
}

RightTriangle::RightTriangle(int a, int b, int c, int A, int B, int C, std::string name) :Triangle(a, b, c, A, B, C, name) 
{
	if ((A + B + C) != 180)
		throw MyException("������ �������� ������. �������: ����� ����� �� ����� 180");

	else if (C != 90)
		throw MyException("������ �������� ������. �������: ���� � �� ����� 90");

	check();
}

IsoscelesTriangle::IsoscelesTriangle(int a, int b, int c, int A, int B, int C, std::string name) :Triangle(a, b, c, A, B, C, name) 
{
	if ((A + B + C) != 180)
		throw MyException("������ �������� ������. �������: ����� ����� �� ����� 180");

	else if (a != c)
		throw MyException("������ �������� ������. �������: ������� a � c �� �����");

	else if (A != C)
		throw MyException("������ �������� ������. �������: ���� A � C �� �����");

	check();
}

EquilateralTriangle::EquilateralTriangle(int a, int b, int c, int A, int B, int C, std::string name) :Triangle(a, b, c, A, B, C, name)
{

	if (A != B || A != C)
		throw MyException("������ �������� ������. �������: ���� �� �����");

	else if (a != c || a != b)
		throw MyException("������ �������� ������. �������: ������� �� �����");

	check();
}