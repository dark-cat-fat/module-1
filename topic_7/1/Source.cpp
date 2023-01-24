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
	std::cout << "Рабоатю в боевом режиме" << std::endl;

	std::cout << "Введите число 1: ";
	float num_1;
	std::cin >> num_1;

	std::cout << "Введите число 2: ";
	float num_2;
	std::cin >> num_2;

	std::cout << "Результат сложения: " << add(num_1, num_2);

#elif MODE == 0
	std::cout << "Работаю в режиме тренировки" << std::endl;

#else 
	std::cout << "Неизвестный режим.Завершение работы" << std::endl;

#endif 
}