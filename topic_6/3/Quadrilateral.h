#pragma once
#include <iostream>

class Quadrilateral
{
protected:
	int a, b, c, d, A, B, C, D;
	std::string name;

public:
	Quadrilateral(int a, int b, int c, int d, int A, int B, int C, int D, std::string name);
};

class Rectangle : public Quadrilateral
{
public:
	Rectangle(int a, int b, int c, int d, int A, int B, int C, int D, std::string name);
};

class Square :public Quadrilateral
{
public:
	Square(int a, int b, int c, int d, int A, int B, int C, int D, std::string name);
};

class Parallelogram : public Quadrilateral
{
public:
	Parallelogram(int a, int b, int c, int d, int A, int B, int C, int D, std::string name);
};

class Rhombus : public Quadrilateral
{
public:
	Rhombus(int a, int b, int c, int d, int A, int B, int C, int D, std::string name);
};