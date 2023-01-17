#include <iostream>
#include "Figure.h"

Triangle::Triangle(int a, int b, int c, int A, int B, int C, std::string name)
{
	this->a = a;
	this->b = b;
	this->c = c;
	this->A = A;
	this->B = B;
	this->C = C;
	this->name = name;

	std::cout << name << ':' << std::endl;
	std::cout << "Стороны:" << " a=" << a << " b=" << b << " c=" << c << std::endl;
	std::cout << "Углы:" << " A=" << A << " B=" << B << " C=" << C << std::endl << std::endl;
}

RightTriangle::RightTriangle(int a, int b, int c, int A, int B, int C, std::string name) :Triangle(a, b, c, A, B, C, name) {}

IsoscelesTriangle::IsoscelesTriangle(int a, int b, int c, int A, int B, int C, std::string name) :Triangle(a, b, c, A, B, C, name) {}

EquilateralTriangle::EquilateralTriangle(int a, int b, int c, int A, int B, int C, std::string name) :Triangle(a, b, c, A, B, C, name) {}


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

	std::cout << name << ':' << std::endl;
	std::cout << "Стороны:" << " a=" << a << " b=" << b << " c=" << c << " d=" << d << std::endl;
	std::cout << "Углы:" << " A=" << A << " B=" << B << " C=" << C << " D=" << D << std::endl << std::endl;
}

Rectangle::Rectangle(int a, int b, int c, int d, int A, int B, int C, int D, std::string name) :Quadrilateral(a, b, c, d, A, B, C, D, name) {}

Square::Square(int a, int b, int c, int d, int A, int B, int C, int D, std::string name) :Quadrilateral(a, b, c, d, A, B, C, D, name) {}

Parallelogram::Parallelogram(int a, int b, int c, int d, int A, int B, int C, int D, std::string name) :Quadrilateral(a, b, c, d, A, B, C, D, name) {}

Rhombus::Rhombus(int a, int b, int c, int d, int A, int B, int C, int D, std::string name) :Quadrilateral(a, b, c, d, A, B, C, D, name) {}