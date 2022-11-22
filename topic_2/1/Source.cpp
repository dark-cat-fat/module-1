#include <iostream>

enum class mouths
{
	Выход,
	Январь,
	Февраль,
	Март,
	Апрель,
	Май,
	Июнь,
	Июль,
	Август,
	Сентябрь,
	Октябрь,
	Ноябрь,
	Декабрь
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

		switch (static_cast<int>(mouth))
		{
		case 0:
			std::cout << "До свидания";
			return 0;

		case 1:
			std::cout << "Январь" << std::endl;
			break;

		case 2:
			std::cout << "Февраль" << std::endl;
			break;

		case 3:
			std::cout << "Март" << std::endl;
			break;

		case 4:
			std::cout << "Апрель" << std::endl;
			break;

		case 5:
			std::cout << "Май" << std::endl;
			break;

		case 6:
			std::cout << "Июнь" << std::endl;
			break;

		case 7:
			std::cout << "Июль" << std::endl;
			break;

		case 8:
			std::cout << "Август" << std::endl;
			break;

		case 9:
			std::cout << "Сентябрь" << std::endl;
			break;

		case 10:
			std::cout << "Октябрь" << std::endl;
			break;

		case 11:
			std::cout << "Ноябрь" << std::endl;
			break;

		case 12:
			std::cout << "Декабрь" << std::endl;
			break;
		}
	}
}