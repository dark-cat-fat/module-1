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
		std::cout << "������� ����� ������: ";
		std::cin >> input;

		if (input > 12 || input < 0)
			std::cout << "������������ �����!" << std::endl;

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
			std::cout << "�� ��������";
			break;
		}

		else if (mouth == mouths::january)
			std::cout << "������" << std::endl;

		else if (mouth == mouths::february)
			std::cout << "�������" << std::endl;

		else if (mouth == mouths::march)
			std::cout << "����" << std::endl;

		else if (mouth == mouths::april)
			std::cout << "������" << std::endl;

		else if (mouth == mouths::may)
			std::cout << "���" << std::endl;

		else if (mouth == mouths::june)
			std::cout << "����" << std::endl;

		else if (mouth == mouths::jule)
			std::cout << "����" << std::endl;

		else if (mouth == mouths::august)
			std::cout << "������" << std::endl;

		else if (mouth == mouths::september)
			std::cout << "��������" << std::endl;

		else if (mouth == mouths::ocotber)
			std::cout << "�������" << std::endl;

		else if (mouth == mouths::november)
			std::cout << "������" << std::endl;

		else if (mouth == mouths::december)
			std::cout << "�������" << std::endl;

	}
}