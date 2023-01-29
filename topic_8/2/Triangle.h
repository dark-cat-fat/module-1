#pragma once
#include <iostream>

class Triangle
{
protected:
	int a, b, c, A, B, C;
	std::string name;

public:
	Triangle(int a, int b, int c, int A, int B, int C, std::string name);
	void check();
};

class RightTriangle : public Triangle
{
public:
	RightTriangle(int a, int b, int c, int A, int B, int C, std::string name);
};

class IsoscelesTriangle : public Triangle
{
public:
	IsoscelesTriangle(int a, int b, int c, int A, int B, int C, std::string name);
};

class EquilateralTriangle : public Triangle
{
public:
	EquilateralTriangle(int a, int b, int c, int A, int B, int C, std::string name);
};