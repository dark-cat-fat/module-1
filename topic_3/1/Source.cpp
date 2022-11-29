#include <iostream>

class Calculator
{
private:
	float num_1;
	float num_2;

public:

	double add() {return num_1 + num_2;}
	double subtract_1_2() {return num_1 - num_2;}
	double subtract_2_1(){return num_2 - num_1;}
	double multiply() { return num_1 * num_2; }
	double divide_1_2(){return num_1 / num_2;}
	double divide_2_1() {return num_2 / num_1;}

	bool set_num_1(float num_1)
	{
		if (num_1 != 0)
		{
			this->num_1 = num_1;
			return true;
		}

		else
		{
			return false;
		}
	}

	bool set_num_2(float num_2)
	{
		if (num_2 != 0)
		{
			this->num_2 = num_2;
			return true;
		}

		else
		{
			return false;
		}
	}

};

void show(Calculator& numbers)
{
	std::cout << "num1 + num2 = " << numbers.add() << std::endl;
	std::cout << "num1 - num2 = " << numbers.subtract_1_2() << std::endl;
	std::cout << "num2 - num1 = " << numbers.subtract_2_1() << std::endl;
	std::cout << "num1 * num2 = " << numbers.multiply() << std::endl;
	std::cout << "num1 / num2 = " << numbers.divide_1_2() << std::endl;
	std::cout << "num2 / num2 = " << numbers.divide_2_1() << std::endl;
}

void input(Calculator &numbers)
{
	double number;

	bool isTrue;

	std::cout << "Введите num_1: ";
	std::cin >> number;
	isTrue = numbers.set_num_1(number);

	while (isTrue == false)
	{
		std::cout << "Неверный ввод!" << std::endl;
		std::cout << "Введите num_1: ";
		std::cin >> number;
		isTrue = numbers.set_num_1(number);
	}

	std::cout << "Введите num_2: ";
	std::cin >> number;
	isTrue = numbers.set_num_2(number);

	while (isTrue == false)
	{
		std::cout << "Неверный ввод!" << std::endl;
		std::cout << "Введите num_2: ";
		std::cin >> number;
		isTrue = numbers.set_num_2(number);
	}
}

void main()
{
	setlocale(LC_ALL, "Russian");

	Calculator numbers;
	
	while (true)
	{
		input(numbers);
		show(numbers);
	}
}