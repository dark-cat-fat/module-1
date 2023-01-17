#include <iostream>
#include "calc.h"

void print(int x, int y, int result, std::string operation)
{
	std::cout << x << operation << y << " = " << result;
}

void main()
{
	setlocale(LC_ALL, "Russian");

	std::cout << "������� ������ �����: ";
	int x;
	std::cin >> x;

	std::cout << "������� ������ �����: ";
	int y;
	std::cin >> y;

	std::cout << "�������� �������� (1 - ��������, 2 ���������, 3 - ���������, 4 - �������, 5 - ���������� � �������): ";
	int operation;
	std::cin >> operation;

	int result;
	std::string s_operation;
	
	switch (operation)
	{
	case 1:
		result = add(x, y);
		s_operation = " + ";
		break;

	case 2:
		result = sub(x, y);
		s_operation = " - ";
		break;

	case 3:
		result = multi(x, y);
		s_operation = " * ";
		break;

	case 4:
		if (y == 0)
		{
			std::cout << "�� ���� ������ ������!";
			return;
		}
		
		else
		{
			result = divi(x, y);
			s_operation = " / ";
			
		}

		break;

	case 5:
		result = pow(x, y);
		s_operation = " � ������� ";
		break;
	
	default:
		std::cout << "����� �������� ����";
		return;
		break;
	}

	print(x, y, result, s_operation);
}