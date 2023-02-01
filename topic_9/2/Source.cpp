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
		int shrink = 1, max_num, min_num, tmp;
		
		if (numerator > denominator)
		{
			 max_num = numerator;
			 min_num = denominator;
		}

		else
		{
			 max_num = denominator;
			 min_num = numerator;
		}

		while (max_num % min_num != 0)
		{
			tmp = max_num;
			max_num = min_num;
			min_num = tmp % min_num;
		}

		shrink = min_num;

		numerator = numerator / shrink;
		denominator = denominator / shrink;

	}

	Fraction operator+(Fraction other)
	{ 
		Fraction tmp(numerator_, denominator_);
		tmp.numerator_= numerator_ * other.denominator_ + other.numerator_ * denominator_;
		tmp.denominator_= other.denominator_ * denominator_;

		fShrink(tmp.numerator_, tmp.denominator_);

		return tmp;
	}

	Fraction operator-(Fraction other)
	{
		Fraction tmp(numerator_, denominator_);
		tmp.numerator_ = numerator_ * other.denominator_ - other.numerator_ * denominator_;
		tmp.denominator_ = other.denominator_ * denominator_;

		fShrink(tmp.numerator_, tmp.denominator_);

		return  tmp;
	}

	Fraction operator*(Fraction other)
	{
		Fraction tmp(numerator_, denominator_);
		tmp.numerator_ = numerator_ * other.numerator_;
		tmp.denominator_ = other.denominator_ * denominator_;

		fShrink(tmp.numerator_, tmp.denominator_);

		return  tmp;
	}

	Fraction operator/(Fraction other)
	{
		Fraction tmp(numerator_, denominator_);
		tmp.numerator_ = numerator_ * other.denominator_;
		tmp.denominator_ = other.numerator_ * denominator_;

		fShrink(tmp.numerator_, tmp.denominator_);

		return  tmp;
	}

	Fraction operator++()
	{
		numerator_ = numerator_ + denominator_;
		fShrink(numerator_, denominator_);

		return *this;
	}

	Fraction operator--(int)
	{
		numerator_ = numerator_ - denominator_;

		return *this;
	}
	
	friend std::ostream& operator<<(std::ostream& out, const Fraction& output);

	int getNumerator()
	{
		return numerator_;
	}

	int getDenoinator()
	{
		return denominator_;
	}
};

std::ostream& operator<<(std::ostream& out, const Fraction& output)
{
	return out << output.numerator_ << '/' << output.denominator_;
}

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