#include <iostream>

#define MODE -1

#ifdef MODE 1
float add(float num_1, float num_2)
{
	return num_1 + num_2;
}
#endif

void main()
{
	setlocale(LC_ALL, "Russian");
#if MODE == 1
	std::cout << "������� � ������ ������" << std::endl;

	std::cout << "������� ����� 1: ";
	float num_1;
	std::cin >> num_1;

	std::cout << "������� ����� 2: ";
	float num_2;
	std::cin >> num_2;

	std::cout << "��������� ��������: " << add(num_1, num_2);

#elif MODE == 0
	std::cout << "������� � ������ ����������" << std::endl;

#else 
	std::cout << "����������� �����.���������� ������" << std::endl;

#endif 
}