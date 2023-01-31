#include <iostream>

class Fraction
{
private:
	int numerator_;
	int denominator_;
	double number;

public:
	Fraction(int numerator, int denominator)
	{
		numerator_ = numerator;
		denominator_ = denominator;
		number = numerator_ / denominator_;
	}
	bool operator==(Fraction other) { return this->number == other.number; }
	bool operator!=(Fraction other) { return this->number != other.number; }
	bool operator>(Fraction other) { return this->number > other.number; }
	bool operator<(Fraction other) { return this->number < other.number; }
	bool operator>=(Fraction other) { return this->number >= other.number; }
	bool operator<=(Fraction other) { return this->number <= other.number; }
};

int main()
{
	Fraction f1(4, 3);
	Fraction f2(6, 11);

	std::cout << "f1" << ((f1 == f2) ? " == " : " not == ") << "f2" << '\n';
	std::cout << "f1" << ((f1 != f2) ? " != " : " not != ") << "f2" << '\n';
	std::cout << "f1" << ((f1 < f2) ? " < " : " not < ") << "f2" << '\n';
	std::cout << "f1" << ((f1 > f2) ? " > " : " not > ") << "f2" << '\n';
	std::cout << "f1" << ((f1 <= f2) ? " <= " : " not <= ") << "f2" << '\n';
	std::cout << "f1" << ((f1 >= f2) ? " >= " : " not >= ") << "f2" << '\n';
	return 0;
}