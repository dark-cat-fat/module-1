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

	std::cout << "������� ��������� �����: ";
	int forbidden_length;
	std::cin >> forbidden_length;

	try 
	{
		while (true)
		{
			std::cout << "������� �����: ";
			std::string str;
			std::cin >> str;

			int str_length = function(str, forbidden_length);

			std::cout << "����� ����� \"" << str << "\" ����� " << str_length << std::endl;
		}
	}

	catch (const char*)
	{
		std::cout << "�� ����� ����� ��������� �����! �� ��������";
	}
}