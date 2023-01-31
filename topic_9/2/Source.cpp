#include <iostream>
#include <string> 


class Fraction
{
private:
	int numerator_;
	int denominator_;

public:
	Fraction(int numerator, int denominator)
	{
		numerator_ = numerator;
		denominator_ = denominator;
	}

	void fShrink(int &numerator, int &denominator)
	{
		int shrink = 1;

		for (int i = 2; i <= denominator; i++)
		{
			if (denominator % i == 0 && numerator % i == 0)
				shrink = i;
		}

		numerator = numerator / shrink;
		denominator = denominator / shrink;

	}

	std::string operator+(Fraction other) 
	{ 
		int new_num = numerator_ * other.denominator_ + other.numerator_ * denominator_;
		int new_den = other.denominator_ * denominator_;

		fShrink(new_num, new_den);

		return  std::to_string(new_num) + '/' + std::to_string(new_den);
	}

	std::string operator-(Fraction other)
	{
		int new_num = numerator_ * other.denominator_ - other.numerator_ * denominator_;
		int new_den = other.denominator_ * denominator_;

		fShrink(new_num, new_den);

		return  std::to_string(new_num) + '/' + std::to_string(new_den);
	}

	std::string operator*(Fraction other)
	{
		int new_num = numerator_ * other.numerator_;
		int new_den = other.denominator_ * denominator_;

		fShrink(new_num, new_den);

		return  std::to_string(new_num) + '/' + std::to_string(new_den);
	}

	std::string operator/(Fraction other)
	{
		int new_num = numerator_ * other.denominator_;
		int new_den = other.numerator_ * denominator_;

		fShrink(new_num, new_den);

		return  std::to_string(new_num) + '/' + std::to_string(new_den);
	}

	Fraction operator++()
	{

		numerator_ = numerator_ + denominator_;
		fShrink(numerator_, denominator_);

		return *this;
	}

	Fraction operator--(int)
	{
		Fraction tmp = *this;

		numerator_ = numerator_ - denominator_;

		return tmp;
	}
	
	int getNumerator()
	{
		return numerator_;
	}

	int getDenoinator()
	{
		return denominator_;
	}
};

void main()
{
	setlocale(LC_ALL, "Russian");

	int n_1, n_2;
	std::cout << "¬ведите числитель дроби 1: ";
	std::cin >> n_1;

	std::cout << "¬ведите знаменатель дроби 1: ";
	std::cin >> n_2;

	Fraction f1(n_1, n_2);

	std::cout << "¬ведите числитель дроби 2: ";
	std::cin >> n_1;

	std::cout << "¬ведите знаменатель дроби 2: ";
	std::cin >> n_2;

	Fraction f2(n_1, n_2);

	std::cout << f1.getNumerator() << '/' << f1.getDenoinator() << " + " << f2.getNumerator() << "/" << f2.getDenoinator() << " = " << f1 + f2 << std::endl;
	std::cout << f1.getNumerator() << '/' << f1.getDenoinator() << " - " << f2.getNumerator() << "/" << f2.getDenoinator() << " = " << f1 - f2 << std::endl;
	std::cout << f1.getNumerator() << '/' << f1.getDenoinator() << " * " << f2.getNumerator() << "/" << f2.getDenoinator() << " = " << f1 * f2 << std::endl;
	std::cout << f1.getNumerator() << '/' << f1.getDenoinator() << " / " << f2.getNumerator() << "/" << f2.getDenoinator() << " = " << f1 / f2 << std::endl;
	std::cout << "++" << f1.getNumerator() << '/' << f1.getDenoinator() << " * " << f2.getNumerator() << "/" << f2.getDenoinator() << " = ";
	std::cout << ++f1 * f2 << std::endl;
	std::cout << "«начение дроби 1 = " << f1.getNumerator() << '/' << f1.getDenoinator() << std::endl;
	std::cout << f1.getNumerator() << '/' << f1.getDenoinator() << "-- * " << f2.getNumerator() << "/" << f2.getDenoinator() << " = ";
	std::cout << f1-- * f2 << std::endl;
	std::cout << "«начение дроби 1 = " << f1.getNumerator() << '/' << f1.getDenoinator();
}