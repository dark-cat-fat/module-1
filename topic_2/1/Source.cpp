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
		std::cout << "Введите номер месяца: ";
		std::cin >> mouth;

		if (mouth < 13 && mouth > -1)
			return static_cast<mouths>(mouth);

		else
			std::cout << "Неправильный номер!" << std::endl;
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
			std::cout << "Январь" << std::endl;
			break;

		case mouths::February:
			std::cout << "Февраль" << std::endl;
			break;

		case mouths::March:
			std::cout << "Март" << std::endl;
			break;

		case mouths::April:
			std::cout << "Апрель" << std::endl;
			break;

		case mouths::May:
			std::cout << "Май" << std::endl;
			break;

		case mouths::June:
			std::cout << "Июнь" << std::endl;
			break;

		case mouths::July:
			std::cout << "Июль" << std::endl;
			break;

		case mouths::August:
			std::cout << "Август" << std::endl;
			break;

		case mouths::September:
			std::cout << "Сентябрь" << std::endl;
			break;

		case mouths::October:
			std::cout << "Октябрь" << std::endl;
			break;

		case mouths::November:
			std::cout << "Ноябрь" << std::endl;
			break;

		case mouths::December:
			std::cout << "Декабрь" << std::endl;
			break;

		default:
			std::cout << "До свидания";
			return 0;

		}
	}
}