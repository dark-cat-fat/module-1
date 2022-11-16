#include <iostream>
#include <fstream>

void left(int* arr, std::ofstream& output, int size)
{
	int last_first = 0;

	output << size << '\n';
	

	for (int i = 1; i < size; i++)
	{
		output << arr[i] << ' ';
	}

	output << arr[last_first];

	output << '\n';
}

void right(int* arr, std::ofstream& output, int size)
{
	int first_last = size - 1;

	output << size << '\n';

	output << arr[first_last] << ' ';

	for (int i = 0; i < first_last; i++)
	{
		output << arr[i];

		if (first_last - 1 != i)
			output << ' ';
	}

	output << '\n';
}

void add_arr(int* arr, std::ifstream& input, int size)
{
	for (int i = 0; i < size; i++)
	{
		input >> arr[i];
	}
}

void del_arr(int* arr)
{
	delete[] arr;
}


int main()
{
	setlocale(LC_ALL, "Russian");

	std::ifstream input("in.txt");
	std::ofstream output("out.txt");

	if (!input.is_open())
	{
		std::cout << "Файла нету!";
		return 1;
	}

	if (!output.is_open())
	{
		std::cout << "Файла нету!";
		return 1;
	}

	int size_1;
	input >> size_1;
	int* arr_1 = new int[size_1];
	add_arr(arr_1, input, size_1);

	int size_2;
	input >> size_2;
	int* arr_2 = new int[size_2];
	add_arr(arr_2, input, size_2);

	input.close();

	right(arr_2, output, size_2);
	left(arr_1, output, size_1);

	output.close();

	del_arr(arr_1);
	del_arr(arr_2);


	return 0;
}