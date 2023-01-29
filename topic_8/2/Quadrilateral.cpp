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
		throw MyException("Ошибка создания фигуры. Причина: сумма углов не равна 360");
}

void Quadrilateral::check()
{
	std::cout << name << "(стороны " << a << ", " << b << ", " << c << ", " << d;
	std::cout << "; углы: " << A << ", " << B << ", " << C << ", " << D << ") создан" << std::endl;
}

Rectangle::Rectangle(int a, int b, int c, int d, int A, int B, int C, int D, std::string name) :Quadrilateral(a, b, c, d, A, B, C, D, name) 
{
	if (A != 90 || B != 90 || C != 90 || D != 90)
		throw MyException("Ошибка создания фигуры. Причина: углы не равны 90");

	else if (a != c || d != b)
		throw MyException("Ошибка создания фигуры. Причина: стороны попарно не равны");

	check();
}

Square::Square(int a, int b, int c, int d, int A, int B, int C, int D, std::string name) :Quadrilateral(a, b, c, d, A, B, C, D, name) 
{
	if (A != 90 || B != 90 || C != 90 || D != 90)
		throw MyException("Ошибка создания фигуры. Причина: углы не равны 90");

	else if (a != b || b != c || d != c)
		throw MyException("Ошибка создания фигуры. Причина: стороны не равны");
	check();
}

Parallelogram::Parallelogram(int a, int b, int c, int d, int A, int B, int C, int D, std::string name) :Quadrilateral(a, b, c, d, A, B, C, D, name) 
{
	if (a != c || d != b)
		throw MyException("Ошибка создания фигуры. Причина: стороны попарно не равны");

	else if (A != C || D != B)
		throw MyException("Ошибка создания фигуры. Причина: углы попарно не равны");

	check();
}

Rhombus::Rhombus(int a, int b, int c, int d, int A, int B, int C, int D, std::string name) :Quadrilateral(a, b, c, d, A, B, C, D, name) 
{
	 if (a != b || b != c || d != c)
		throw MyException("Ошибка создания фигуры. Причина: стороны не равны");

	else if (A != C || D != B)
		throw MyException("Ошибка создания фигуры. Причина: углы попарно не равны");
	check();
}