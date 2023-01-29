#include <iostream>
#include "Triangle.h"
#include "Quadrilateral.h"

void main()
{
	setlocale(LC_ALL, "Russian");

	try
	{
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

	catch (std::exception& err)
	{
		std::cout << err.what();
	}
}	