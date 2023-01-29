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
			throw MyException("Ошибка создания фигуры. Причина: сумма углов не равна 180");

}

void Triangle::check()
{
	std::cout << name << "(стороны " << a << ", " << b << ", " << c;
	std::cout << "; углы " << A << ", " << B << ", " << C << ") создан" << std::endl;
}

RightTriangle::RightTriangle(int a, int b, int c, int A, int B, int C, std::string name) :Triangle(a, b, c, A, B, C, name) 
{
	if ((A + B + C) != 180)
		throw MyException("Ошибка создания фигуры. Причина: сумма углов не равна 180");

	else if (C != 90)
		throw MyException("Ошибка создания фигуры. Причина: Угол С не равен 90");

	check();
}

IsoscelesTriangle::IsoscelesTriangle(int a, int b, int c, int A, int B, int C, std::string name) :Triangle(a, b, c, A, B, C, name) 
{
	if ((A + B + C) != 180)
		throw MyException("Ошибка создания фигуры. Причина: сумма углов не равна 180");

	else if (a != c)
		throw MyException("Ошибка создания фигуры. Причина: стороны a и c не равны");

	else if (A != C)
		throw MyException("Ошибка создания фигуры. Причина: углы A и C не равны");

	check();
}

EquilateralTriangle::EquilateralTriangle(int a, int b, int c, int A, int B, int C, std::string name) :Triangle(a, b, c, A, B, C, name)
{

	if (A != B || A != C)
		throw MyException("Ошибка создания фигуры. Причина: углы не равны");

	else if (a != c || a != b)
		throw MyException("Ошибка создания фигуры. Причина: стороны не равны");

	check();
}