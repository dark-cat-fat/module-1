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
	std::cout << "¬аш счет: " << user.name << ", " << user.account_num << ", " << user.balance;
}

void newBalance(account &user)
{
	std::cout << "¬ведите новый баланс: ";

	std::cin >> user.balance;
}

void main()
{
	SetConsoleOutputCP(1251);
	SetConsoleCP(1251);

	account user_1;

	std::cout << "¬ведите номер счЄта: ";
	std::cin >> user_1.account_num;
	std::cout << "¬ведите им€ владельца: ";
	std::cin >> user_1.name;
	std::cout << "¬ведите баланс: ";
	std::cin >> user_1.balance;

	newBalance(user_1);

	show_account(user_1);
}