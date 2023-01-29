#include <iostream>
#include "Quadrilateral.h"
#include "MyException.h"

Quadrilateral::Quadrilateral(int a, int b, int c, int d, int A, int B, int C, int D, std::string name)
{
	this->a = a;
	this->b = b;
	this->c = c;
	this->d = d;
	this->A = A;
	this->B = B;
	this->C = C;
	this->D = D;
	this->name = name;
	

	if ((A+B+C+D) != 360)
		throw MyException("������ �������� ������. �������: ����� ����� �� ����� 360");
}

void Quadrilateral::check()
{
	std::cout << name << "(������� " << a << ", " << b << ", " << c << ", " << d;
	std::cout << "; ����: " << A << ", " << B << ", " << C << ", " << D << ") ������" << std::endl;
}

Rectangle::Rectangle(int a, int b, int c, int d, int A, int B, int C, int D, std::string name) :Quadrilateral(a, b, c, d, A, B, C, D, name) 
{
	if (A != 90 || B != 90 || C != 90 || D != 90)
		throw MyException("������ �������� ������. �������: ���� �� ����� 90");

	else if (a != c || d != b)
		throw MyException("������ �������� ������. �������: ������� ������� �� �����");

	check();
}

Square::Square(int a, int b, int c, int d, int A, int B, int C, int D, std::string name) :Quadrilateral(a, b, c, d, A, B, C, D, name) 
{
	if (A != 90 || B != 90 || C != 90 || D != 90)
		throw MyException("������ �������� ������. �������: ���� �� ����� 90");

	else if (a != b || b != c || d != c)
		throw MyException("������ �������� ������. �������: ������� �� �����");
	check();
}

Parallelogram::Parallelogram(int a, int b, int c, int d, int A, int B, int C, int D, std::string name) :Quadrilateral(a, b, c, d, A, B, C, D, name) 
{
	if (a != c || d != b)
		throw MyException("������ �������� ������. �������: ������� ������� �� �����");

	else if (A != C || D != B)
		throw MyException("������ �������� ������. �������: ���� ������� �� �����");

	check();
}

Rhombus::Rhombus(int a, int b, int c, int d, int A, int B, int C, int D, std::string name) :Quadrilateral(a, b, c, d, A, B, C, D, name) 
{
	 if (a != b || b != c || d != c)
		throw MyException("������ �������� ������. �������: ������� �� �����");

	else if (A != C || D != B)
		throw MyException("������ �������� ������. �������: ���� ������� �� �����");
	check();
}