#include <iostream>

class Triangle
{
protected:
	int a, b, c, A, B, C;
	std::string name;

public:
	Triangle(int a, int b, int c, int A, int B, int C, std::string name)
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
};

class RightTriangle : public Triangle
{
	public:
	RightTriangle(int a, int b, int c, int A, int B, int C, std::string name) :Triangle(a, b, c, A, B, C, name){}
};

class IsoscelesTriangle : public Triangle
{
public:
	IsoscelesTriangle(int a, int b, int c, int A, int B, int C, std::string name) :Triangle(a, b, c, A, B, C, name) {}
};

class EquilateralTriangle : public Triangle
{
public:
	EquilateralTriangle(int a, int b, int c, int A, int B, int C, std::string name) :Triangle(a, b, c, A, B, C, name) {}
};

class Quadrilateral
{
protected:
	int a, b, c, d, A, B, C, D;
	std::string name;

public:
	Quadrilateral(int a, int b, int c, int d, int A, int B, int C, int D, std::string name)
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
};

class Rectangle : public Quadrilateral
{
public:
	Rectangle(int a, int b, int c, int d, int A, int B, int C, int D, std::string name) :Quadrilateral(a, b, c, d, A, B, C, D, name) {}
};

class Square :public Quadrilateral
{
public:
	Square(int a, int b, int c, int d, int A, int B, int C, int D, std::string name) :Quadrilateral(a, b, c, d, A, B, C, D, name) {}
};

class Parallelogram : public Quadrilateral
{
public:
	Parallelogram(int a, int b, int c, int d, int A, int B, int C, int D, std::string name) :Quadrilateral(a, b, c, d, A, B, C, D, name) {}
};

class Rhombus : public Quadrilateral
{
public:
	Rhombus(int a, int b, int c, int d, int A, int B, int C, int D, std::string name) :Quadrilateral(a, b, c, d, A, B, C, D, name) {}
};

void main()
{
	setlocale(LC_ALL, "Russian");

	Triangle triagle(4, 3, 6, 26, 36, 118, "Треугольник");
	RightTriangle r_triagle(8, 6, 10, 37, 53, 90, "Прямоугольный треугольник");
	IsoscelesTriangle i_triagle(10, 12, 10, 53, 74, 53, "Равнобедренный треугольник");
	EquilateralTriangle e_triagle(80, 80, 80, 60, 60, 60, "Равносторонний треугольник");
	Quadrilateral quadrilateral(2, 3, 4, 3, 63, 116, 109, 72, "Четырёхугольник");
	Rectangle rectangle(2, 3, 2, 3, 90, 90, 90, 90, "Прямоугольник");
	Square square(2, 2, 2, 2, 90, 90, 90, 90, "Квадрат");
	Parallelogram parallelogram(2, 3, 2, 3, 100, 80, 100, 80, "Параллелограмм");
	Rhombus rhombus(5, 5, 5, 5, 60, 120, 60, 120, "Ромб");
}