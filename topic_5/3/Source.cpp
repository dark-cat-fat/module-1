#include <iostream>

class Figure
{
protected:
	int sides;
	std::string name;

public:
	Figure(){}

	Figure(int sides, std::string name)
	{
		this->sides = sides;
		this->name = name;
	}
	
	std::string check()
	{
		if(sides == 0)
		{
			return "Правильная";
		}
		
		else
		{
			return  "Неправильная";
		}
	}

	virtual void print()
	{
		std::cout << name << ':' << std::endl;
		std::cout << check() << std::endl;
		std::cout << "Количество сторон: " << sides << std::endl << std::endl;
	}
};


class Triangle: public Figure
{
protected:
	int a, b, c, A, B, C;
	int angle;

public:
	Triangle(int a, int b, int c, int A, int B, int C, int sides, std::string name)
	{
		this->a = a;
		this->b = b;
		this->c = c;
		this->A = A;
		this->B = B;
		this->C = C;
		this->sides = sides;
		angle = A + B + C;
		this->name = name;
	}

	void print() override
	{
		std::cout << name << ':' << std::endl;
		std::cout << check() << std::endl;
		std::cout << "Стороны:" << " a=" << a << " b=" << b << " c=" << c << std::endl;
		std::cout << "Количество сторон: " << sides << std::endl;
		std::cout << "Углы:" << " A=" << A << " B=" << B << " C=" << C << std::endl << std::endl;
	}
		
	std::string check()
	{
		if (sides == 3 && angle == 180)
		{
			return "Правильная";
		}

		else
		{
			return  "Неправильная";
		}
	}
};

class RightTriangle : public Triangle
{
public:
	RightTriangle(int a, int b, int c, int A, int B, int C, int sides, std::string name) :Triangle(a, b, c, A, B, C, sides, name) {}

	std::string check()
	{
		if (sides == 3 && angle == 180 && C == 90)
		{
			return "Правильная";
		}

		else
		{
			return "Неправильная";
		}
	}

};

class IsoscelesTriangle : public Triangle
{
public:
	IsoscelesTriangle(int a, int b, int c, int A, int B, int C, int sides, std::string name) :Triangle(a, b, c, A, B, C, sides, name) {}

	std::string check()
	{
		if (sides == 3 && angle == 180 && A == C && a == c)
		{
			return "Правильная";
		}

		else
		{
			return "Неправильная";
		}
	}
};

class EquilateralTriangle : public Triangle
{
public:
	EquilateralTriangle(int a, int b, int c, int A, int B, int C, int sides, std::string name) :Triangle(a, b, c, A, B, C, sides, name) {}

	std::string check()
	{
		if (sides == 3 && angle == 180 && C == 60 && A == 60 && B == 60 && a == b && b == c)
		{
			return "Правильная";
		}

		else
		{
			return "Неправильная";
		}
	}
};

class Quadrilateral: public Figure
{
protected:
	int a, b, c, d, A, B, C, D;
	int angle;

public:
	Quadrilateral(int a, int b, int c, int d, int A, int B, int C, int D, int sides, std::string name)
	{
		this->a = a;
		this->b = b;
		this->c = c;
		this->d = d;
		this->A = A;
		this->B = B;
		this->C = C;
		this->D = D;
		angle = A + B + C + D;
		this->sides = sides;
		this->name = name;
	}

	std::string check()
	{
		if (sides == 4 && angle == 360)
		{
			return "Правильная";
		}

		else
		{
			return "Неправильная";
		}
	}

	void print() override
	{
		std::cout << name << ':' << std::endl;
		std::cout << check() << std::endl;
		std::cout << "Количество сторон: " << sides << std::endl;
		std::cout << "Стороны:" << " a=" << a << " b=" << b << " c=" << c << " d=" << d << std::endl;
		std::cout << "Углы:" << " A=" << A << " B=" << B << " C=" << C << " D=" << D << std::endl << std::endl;
	}
};

class Rectangle : public Quadrilateral
{
public:
	Rectangle(int a, int b, int c, int d, int A, int B, int C, int D, int sides, std::string name) :Quadrilateral(a, b, c, d, A, B, C, D, sides, name) {}

	std::string check()
	{
		if (sides == 4 && angle == 360 && a == c && b == d && A == 90 && B == 90 && C == 90 && D == 90)
		{
			return "Правильная";
		}

		else
		{
			return "Неправильная";
		}
	}

};

class Square :public Quadrilateral
{
public:
	Square(int a, int b, int c, int d, int A, int B, int C, int D, int sides, std::string name) :Quadrilateral(a, b, c, d, A, B, C, D, sides, name) {}
	
	std::string check()
	{
		if (sides == 4 && angle == 360 && a == b && b == c && c == d && A == 90 && B == 90 && C == 90 && D == 90)
		{
			return "Правильная";
		}

		else
		{
			return "Неправильная";
		}
	}
};

class Parallelogram : public Quadrilateral
{
public:
	Parallelogram(int a, int b, int c, int d, int A, int B, int C, int D, int sides, std::string name) :Quadrilateral(a, b, c, d, A, B, C, D, sides, name) {}
	
	std::string check()
	{
		if (sides == 4 && angle == 360 && a == c && b == d && A == C && B == D)
		{
			return "Правильная";
		}

		else
		{
			return  "Неправильная";
		}
	}
};

class Rhombus : public Quadrilateral
{
public:
	Rhombus(int a, int b, int c, int d, int A, int B, int C, int D, int sides, std::string name) :Quadrilateral(a, b, c, d, A, B, C, D, sides, name) {}

	std::string check()
	{
		if (sides == 4 && angle == 360 && a == c && b == c && c == d && A == C && B == D)
		{
			return "Правильная";
		}

		else
		{
			return "Неправильная";
		}
	}
};

void main()
{
	setlocale(LC_ALL, "Russian");

	Figure figure(0, "Фигура");
	figure.print();

	Triangle triagle(4, 3, 6, 26, 36, 118, 5, "Треугольник");
	Figure* f_triagle = &triagle;
	f_triagle->print();

	RightTriangle r_triagle(8, 6, 10, 37, 53, 90, 3, "Прямоугольный треугольник");
	Figure* f_r_triagle = &r_triagle;
	f_r_triagle->print();

	IsoscelesTriangle i_triagle(10, 12, 10, 53, 74, 53, 3, "Равнобедренный треугольник");
	Figure* f_i_triagle = &i_triagle;
	f_i_triagle->print();

	EquilateralTriangle e_triagle(80, 80, 80, 60, 60, 60, 3, "Равносторонний треугольник");
	Figure* f_e_triagle = &e_triagle;
	f_e_triagle->print();

	Quadrilateral quadrilateral(2, 3, 4, 3, 63, 116, 109, 72, 4, "Четырёхугольник");
	Figure* f_quadrilateral = &quadrilateral;
	f_quadrilateral->print();

	Rectangle rectangle(2, 3, 2, 3, 90, 90, 90, 90, 4, "Прямоугольник");
	Figure* f_rectangle = &rectangle;
	f_rectangle->print();

	Square square(2, 2, 2, 2, 90, 90, 90, 90, 4, "Квадрат");
	Figure* f_square = &square;
	f_square->print();

	Parallelogram parallelogram(2, 3, 2, 3, 100, 80, 100, 80, 4, "Параллелограмм");
	Figure* f_parallelogram = &parallelogram;
	f_parallelogram->print();

	Rhombus rhombus	(5, 5, 5, 5, 60, 120, 60, 120, 4,"Ромб");
	Figure* f_rhombus = &rhombus;
	f_rhombus->print();
}