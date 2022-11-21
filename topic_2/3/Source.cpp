#include <iostream>
#include <string>
#include <Windows.h>

struct address
{
	std::string city;
	std::string street;
	int building_num;
	int appartamemt;
	int index;
};


void show(address* locate, int size)
{
	for (int i = 0; i < size; i++)
	{
		std::cout << "Город: " << locate[i].city << std::endl;
		std::cout << "Улица: " << locate[i].street << std::endl;
		std::cout << "Номер Дома: " << locate[i].building_num << std::endl;
		std::cout << "Номер квартиры: " << locate[i].appartamemt << std::endl;
		std::cout << "Индекс: " << locate[i].index << std::endl << std::endl;
	}
}

void main()
{
	SetConsoleOutputCP(1251);
	SetConsoleCP(1251);

	address locate[2];
	locate[0] = {"Москва", "Арбат", 12, 8, 234124};
	locate[1] = {"Белгород", "Садовая", 122, 1, 213124};
	
	show(locate, sizeof(locate) / sizeof(address));
}