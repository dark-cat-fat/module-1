#include <iostream>
#include "Triangle.h"
#include "Quadrilateral.h"

void main()
{
	setlocale(LC_ALL, "Russian");

	try
	{
		Triangle triagle(4, 3, 6, 26, 36, 118, "�����������");
		RightTriangle r_triagle(8, 6, 10, 37, 53, 90, "������������� �����������");
		IsoscelesTriangle i_triagle(10, 12, 10, 53, 74, 53, "�������������� �����������");
		EquilateralTriangle e_triagle(80, 80, 80, 60, 60, 60, "�������������� �����������");
		Quadrilateral quadrilateral(2, 3, 4, 3, 63, 116, 109, 72, "��������������");
		Rectangle rectangle(2, 3, 2, 3, 90, 90, 90, 90, "�������������");
		Square square(2, 2, 2, 2, 90, 90, 90, 90, "�������");
		Parallelogram parallelogram(2, 3, 2, 3, 100, 80, 100, 80, "��������������");
		Rhombus rhombus(5, 5, 5, 5, 60, 120, 60, 120, "����");
	}

	catch (std::exception& err)
	{
		std::cout << err.what();
	}
}	