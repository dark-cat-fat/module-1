#include "Greeter.h"

void main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	Greeter c_name;
	std::string name;

	std::cout << "¬ведите им€ : ";
	std::cin >> name;

	std::cout << c_name.greet(name) << std::endl;
}