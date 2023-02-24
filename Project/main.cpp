#include "Venchil.h"
#include "Kamel.h"
#include "fKamel.h"
#include "Centaur.h"
#include "Boots.h"
#include "Eagle.h"
#include "Broom.h"
#include "Carpet.h"
#include "GroundT.h"


bool check(Venchil* transports[], int i, int type)
{ 

	if (type == 1)
	{
		if (*transports[i] != type)
		{
			std::cout << "������� ���������������� ������������ ��� ������������� ��������! " << std::endl;
			delete transports[i];
			return 1;
		}
	}

	else if (type == 2)
	{
		if (*transports[i] != type)
		{
			std::cout << "������� ���������������� ������������ ��� ������������� ��������! " << std::endl;
			delete transports[i];
			return 1;
		}
	}


	for (int j = 0; j < i; j++)
	{
		if (*transports[j] == *transports[i])
		{
			std::cout << transports[i]->getName() << " ��� ���������������!" << std::endl;
			delete transports[i];
			
			return 1;
		}
	}

	std::cout << transports[i]->getName() << " ������� ���������������!" << std::endl;
	return 0;
}

bool race(Venchil* transport[], int size, int distance)
{
	int choice = 0;

	std::cout << "��������� �����: " << std::endl;

	for (int i = 0; i < size; i++)
	{
		transport[i]->time_dist(distance);
		std::cout << i + 1 << ". " << transport[i];
	}

	for (int i = size - 1; i > 0; i--)
		delete transport[i];

	std::cout << std::endl;

	while (choice == 0)
	{
		std::cout << "1. �������� ��� ���� �����" << std::endl;
		std::cout << "2. �����" << std::endl;
		std::cout << "�������� ��������: ";
		std::cin >> choice;
		
		if (choice > 2 && choice < 1)
			std::cout << "���� ������ ��������!" << std::endl;
		
		else if (choice == 2)
		{
			return 0;
		}

		else if (choice == 1)
		{
			std::cout << std::endl;
			return 1;
		}
	}
}

bool venchil(int type, int distance)
{
	int choice;
	const int SIZE = 7;
	std::string stype;

	Venchil* transports[SIZE];

	if (type == 1)
		stype = "���������";

	else if (type == 2)
		stype = "����������";

	else if (type == 3)
		stype = "��������� � ����������";

	for (int i = 0; i <= SIZE;)
	{


		std::cout << "����� ��� " << stype << " ����������. ����������: " << distance << std::endl;

		if (i > 0)
			std::cout << "������������������ ������������ ��������: ";

		for (int j = 0; j < i; j++)
		{
			if (j == 0)
				std::cout << transports[j]->getName();

			else
				std::cout << ", " << transports[j]->getName();

			if (j + 1 == i)
				std::cout << std::endl;
		}

		while (i == 7)
		{
			std::cout << "1. ������ �����" << std::endl;
			std::cout << "�������� ��������: ";
			std::cin >> choice;

			switch (choice)

			case 1:
				std::cout << std::endl;
				return race(transports, i, distance);
		}

		std::cout << "1. �������-���������" << std::endl;
		std::cout << "2. �����" << std::endl;
		std::cout << "3. �������" << std::endl;
		std::cout << "4. �������" << std::endl;
		std::cout << "5. ���" << std::endl;
		std::cout << "6. �������-���������" << std::endl;
		std::cout << "7. ����-������" << std::endl;
		std::cout << "0. ��������� �����������" << std::endl;
		std::cout << "�������� ��������� ��� 0 ��� ��������� �������� �����������: ";

		std::cin >> choice;
		std::cout << std::endl;

		switch (choice)
		{

		case 1:
			transports[i] = new Boots;
			break;

		case 2:
			transports[i] = new Broom;
			break;

		case 3:
			transports[i] = new Kamel;
			break;

		case 4:
			transports[i] = new Centaur;
			break;

		case 5:
			transports[i] = new Eagle;
			break;

		case 6:
			transports[i] = new fKamel;
			break;

		case 7:
			transports[i] = new Carpet;
			break;

		case 0:

			if (i > 1 && i < 7)
			{
				std::cout << "1. ���������������� ���������" << std::endl;
				std::cout << "2. ������ �����" << std::endl;
				std::cout << "�������� ��������: ";
				std::cin >> choice;
				std::cout << std::endl;

				switch (choice)
				{
				case 1:
					continue;

				case 2:
						return race(transports, i, distance);
				}
			}

			else
			{
				std::cout << "������ ���� ���������������� ���� �� 2 ������������ ��������" << std::endl;
				std::cout << "1. ���������������� ���������" << std::endl;
				std::cout << "�������� ��������: ";
				std::cin >> choice;
				std::cout << std::endl;

				switch (choice)
				{
				case 1:
					continue;
				}
			}

		default:
			std::cout << "������ ���������� ����!" << std::endl;
			continue;
		}

		if (i == 0)
		{
			if (check(transports, i, type) == 1)
				continue;

			else
				i++;
		}

		else
			if (check(transports, i, type) == 1)
				continue;

			else
				i++;
	}
}

bool menu()
{
	int num;
	int distance = -1;

	while (true)
	{
		std::cout << "1. ����� ��� ��������� ����������" << std::endl;
		std::cout << "2. ����� ��� ���������� ����������" << std::endl;
		std::cout << "3. ����� ��� ��������� � ���������� ����������" << std::endl;
		std::cout << "�������� ��� �����: ";
		std::cin >> num;

		if (num >= 1 && num <= 3)
		{
			while (distance < 1)
			{
				std::cout << std::endl;
				std::cout << "������� ����� ��������� (������ ���� ������������): ";
				std::cin >> distance;
				std::cout << std::endl;
			}

			return venchil(num, distance);
		}

		else
			std::cout << "������ �������� ����!" << std::endl << std::endl;
	}
}

int main()
{
	setlocale(LC_ALL, "Russian");
	std::cout << "����� ���������� � �������� ���������!" << std::endl;

	bool exit = 1;

	while(exit)
		exit = menu();
		
	return 0;
}