#include <iostream>

enum class mouths
{
	�����,
	������,
	�������,
	����,
	������,
	���,
	����,
	����,
	������,
	��������,
	�������,
	������,
	�������
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

		switch (static_cast<int>(mouth))
		{
		case 0:
			std::cout << "�� ��������";
			return 0;

		case 1:
			std::cout << "������" << std::endl;
			break;

		case 2:
			std::cout << "�������" << std::endl;
			break;

		case 3:
			std::cout << "����" << std::endl;
			break;

		case 4:
			std::cout << "������" << std::endl;
			break;

		case 5:
			std::cout << "���" << std::endl;
			break;

		case 6:
			std::cout << "����" << std::endl;
			break;

		case 7:
			std::cout << "����" << std::endl;
			break;

		case 8:
			std::cout << "������" << std::endl;
			break;

		case 9:
			std::cout << "��������" << std::endl;
			break;

		case 10:
			std::cout << "�������" << std::endl;
			break;

		case 11:
			std::cout << "������" << std::endl;
			break;

		case 12:
			std::cout << "�������" << std::endl;
			break;
		}
	}
}