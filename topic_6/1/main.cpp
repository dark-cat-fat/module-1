#include <iostream>
#include "calc.h"

void print(int x, int y, int result, std::string operation)
{
	std::cout << x << operation << y << " = " << result;
}

void main()
{
	setlocale(LC_ALL, "Russian");

	std::cout << "Введите первое число: ";
	int x;
	std::cin >> x;

	std::cout << "Введите второе число: ";
	int y;
	std::cin >> y;

	std::cout << "Выберите операцию (1 - сложение, 2 вычитание, 3 - умножение, 4 - деление, 5 - возведение в степень): ";
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
			std::cout << "На ноль делить нельзя!";
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
		s_operation = " в степени ";
		break;
	
	default:
		std::cout << "Такой операции нету";
		return;
		break;
	}

	print(x, y, result, s_operation);
}