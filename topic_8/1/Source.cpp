#include <iostream>

int function(std::string str, int forbidden_length)
{
	int size_str = str.length();

		if (forbidden_length == size_str)
			throw "bad_length";

		return size_str;
}

void main()
{
	setlocale(LC_ALL, "Russian");

	std::cout << "Введите запретную длину: ";
	int forbidden_length;
	std::cin >> forbidden_length;

	try 
	{
		while (true)
		{
			std::cout << "Введите слово: ";
			std::string str;
			std::cin >> str;

			int str_length = function(str, forbidden_length);

			std::cout << "Длина слова \"" << str << "\" равна " << str_length << std::endl;
		}
	}

	catch (const char*)
	{
		std::cout << "Вы ввели слово запретной длины! До свидания";
	}
}