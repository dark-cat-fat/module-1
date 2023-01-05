#include <iostream>
#include <fstream>
#include <string>
#include <Windows.h>

class address
{
private:
	std::string city;
	std::string street;
	int building;
	int apartment;

public:
	address()
	{
		city = "None";
		street = "None";
		building = 0;
		apartment = 0;
	}

	void set_city(std::string city)
	{
		this->city = city;
	}

	void set_street(std::string street)
	{
		this->street = street;
	}

	void set_building(std::string building)
	{
		this->building = stoi(building);
	}

	void set_apartment(std::string apartment)
	{
		this->apartment = stoi(apartment);
	}

	std::string get_city()
	{
		return city;
	}

	std::string get_street()
	{
		return street;
	}

	int get_building()
	{
		return building;
	}

	int get_apartment()
	{
		return apartment;
	}
};

void sort(address* adrs, int size)
{
	address buffer;
	bool truth = true;

	for (int i = 1; i < size; i++)
	{
		std::string word_1 = adrs[i - 1].get_city();
		std::string word_2 = adrs[i].get_city();

		if (word_1.compare(word_2) > 0)
		{
			buffer = adrs[i - 1];
			adrs[i - 1] = adrs[i];
			adrs[i] = buffer;
			truth = false;

			if(i + 1 == size)
			{
				i = 0;
				truth = true;
			}
		}

		else if(i + 1 == size && truth == false)
		{
			i = 0;
			truth = true;
		}
	}
}

void set_address(std::fstream& infile, address* adrs, int size)
{
	std::string s;

	for (int i = 0; i < size; i++)
	{
		infile >> s;
		adrs[i].set_city(s);
		infile >> s;
		adrs[i].set_street(s);
		infile >> s;
		adrs[i].set_building(s);
		infile >> s;
		adrs[i].set_apartment(s);
	}
}

void set_on_file(address* adrs, int size)
{
	std::ofstream outfile("out.txt");

	outfile << size << std::endl;

	for (int i = 0; i < size; i++)
	{
		outfile << adrs[i].get_city() << ", " << adrs[i].get_street() << ", " << adrs[i].get_building() << ", " << adrs[i].get_apartment() << std::endl;
	}
	outfile.close();
}


void main()
{
	setlocale(LC_ALL, "Russian");

	std::fstream infile("in.txt");
	int size_arr;

	infile >> size_arr;

	address* adrs = new address[size_arr];

	set_address(infile, adrs, size_arr);
	infile.close();

	sort(adrs, size_arr);
	set_on_file(adrs, size_arr);

	delete[] adrs;
}