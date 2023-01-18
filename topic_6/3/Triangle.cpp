#include <iostream>
#include "Triangle.h"

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