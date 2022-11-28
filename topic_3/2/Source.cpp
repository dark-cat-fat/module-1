#include <iostream>
#include <windows.h>

class Counter
{
private:

	int count;

public:
	Counter(int count)
	{
		this->count = count;
	}

	Counter()
	{
		count = 1;
	}

	void add()
	{
		count++;
	}

	void subtract()
	{
		count--;
	}

	void show()
	{
		std::cout << count << std::endl;
	}
};


void operation(Counter &count)
{
	char symb;
	while (true)
	{
		std::cout << "������� ������� ('+', '-', '=' ��� 'x'): ";
		std::cin >> symb;
		
		if (symb == '+')
		{
			count.add();
		}

		else if (symb == '-')
		{
			count.subtract();
		}

		else if (symb == '=')
		{
			count.show();
		}

		else if(symb == 'x')
		{
			std::cout << "�� ��������!";
			return;
		}
	}
}

void main()
{
	SetConsoleOutputCP(1251);
	SetConsoleCP(1251);

	Counter count;

	std::cout << "�� ������ ������� ��������� �������� ��������? ";
	std::string in;
	std::cin >> in;

	if (in == "��")
	{
		std::cout << "������� ��������� �������� ��������: ";
		int number;
		std::cin >> number;

		Counter count(number);

		operation(count);
	}

	else if (in == "���")
	operation(count);
	

}