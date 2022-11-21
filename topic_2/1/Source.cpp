#include <iostream>

enum class mouths
{
	exit_prog,
	january,
	february,
	march,
	april,
	may,
	june,
	jule,
	august,
	september,
	ocotber,
	november,
	december
};


mouths input_num()
{
	int input;

	while(true)
	{
		std::cout << "Введите номер месяца: ";
		std::cin >> input;

		if (input > 12 || input < 0)
			std::cout << "Неправильный номер!" << std::endl;

		else
			break;
	} 

	return static_cast<mouths>(input);
}

void main()
{
	setlocale(LC_ALL, "Russian");

	mouths mouth;

	while (true)
	{
		mouth = input_num();

		if (mouth == mouths::exit_prog)
		{
			std::cout << "До свидания";
			break;
		}

		else if (mouth == mouths::january)
			std::cout << "Январь" << std::endl;

		else if (mouth == mouths::february)
			std::cout << "Февраль" << std::endl;

		else if (mouth == mouths::march)
			std::cout << "Март" << std::endl;

		else if (mouth == mouths::april)
			std::cout << "Апрель" << std::endl;

		else if (mouth == mouths::may)
			std::cout << "Май" << std::endl;

		else if (mouth == mouths::june)
			std::cout << "Июнь" << std::endl;

		else if (mouth == mouths::jule)
			std::cout << "Июль" << std::endl;

		else if (mouth == mouths::august)
			std::cout << "Август" << std::endl;

		else if (mouth == mouths::september)
			std::cout << "Сентябрь" << std::endl;

		else if (mouth == mouths::ocotber)
			std::cout << "Октябрь" << std::endl;

		else if (mouth == mouths::november)
			std::cout << "Ноябрь" << std::endl;

		else if (mouth == mouths::december)
			std::cout << "Декабрь" << std::endl;

	}
}