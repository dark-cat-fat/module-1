#include <iostream>

enum class mouths
{
	January = 1,
	February,
	March,
	April,
	May,
	June,
	July,
	August,
	September,
	October,
	November,
	December
};


mouths input_num()
{
	int mouth;
	while(true)
	{
		std::cout << "������� ����� ������: ";
		std::cin >> mouth;

		if (mouth < 13 && mouth > -1)
			return static_cast<mouths>(mouth);

		else
			std::cout << "������������ �����!" << std::endl;
	} 
}

int main()
{
	setlocale(LC_ALL, "Russian");

	mouths mouth;

	while (true) {
		mouth = input_num();

		switch (mouth)
		{

		case mouths::January:
			std::cout << "������" << std::endl;
			break;

		case mouths::February:
			std::cout << "�������" << std::endl;
			break;

		case mouths::March:
			std::cout << "����" << std::endl;
			break;

		case mouths::April:
			std::cout << "������" << std::endl;
			break;

		case mouths::May:
			std::cout << "���" << std::endl;
			break;

		case mouths::June:
			std::cout << "����" << std::endl;
			break;

		case mouths::July:
			std::cout << "����" << std::endl;
			break;

		case mouths::August:
			std::cout << "������" << std::endl;
			break;

		case mouths::September:
			std::cout << "��������" << std::endl;
			break;

		case mouths::October:
			std::cout << "�������" << std::endl;
			break;

		case mouths::November:
			std::cout << "������" << std::endl;
			break;

		case mouths::December:
			std::cout << "�������" << std::endl;
			break;

		default:
			std::cout << "�� ��������";
			return 0;

		}
	}
}