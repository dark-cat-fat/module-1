#include <iostream>
#include <string>
#include <Windows.h>

struct account
{
	int account_num;
	std::string name;
	int balance;
};

void show_account(account& user)
{
	std::cout << "��� ����: " << user.name << ", " << user.account_num << ", " << user.balance;
}

void newBalance(account &user)
{
	std::cout << "������� ����� ������: ";

	std::cin >> user.balance;
}

void main()
{
	SetConsoleOutputCP(1251);
	SetConsoleCP(1251);

	account user_1;

	std::cout << "������� ����� �����: ";
	std::cin >> user_1.account_num;
	std::cout << "������� ��� ���������: ";
	std::cin >> user_1.name;
	std::cout << "������� ������: ";
	std::cin >> user_1.balance;

	newBalance(user_1);

	show_account(user_1);
}