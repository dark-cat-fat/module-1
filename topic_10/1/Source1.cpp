#include <iostream>
#include <windows.h>

void main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	std::cout << "Введите имя: ";
	std::string name;
	std::cin >> name;

	std::cout << "Здравствуйте, " << name << '!' << std::endl;

	system("pause");
}