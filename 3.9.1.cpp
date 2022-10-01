#include <iostream>
using namespace std;

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
	
	bool operator==(Fraction other) {
		if ((numerator_ * other.denominator_ - denominator_ * other.numerator_) == 0) {
			return true;
		}
	}
	bool operator!=(Fraction other) {
		if (*this == other) { return false; }
		else return true;
	}
	bool operator>(Fraction other) { if ((numerator_ * other.denominator_ - denominator_ * other.numerator_) > 0) { return true; }
	}
	bool operator<(Fraction other) { 
		if (*this > other) { return false; }
		else if (*this == other) { return false; }
		else return true;
	}
	bool operator>=(Fraction other) {
		if (*this > other || *this == other) { return true; }
		else return false;
	}
	bool operator<=(Fraction other) {
		if (*this < other || *this == other) { return true; }
		else return false;
	}
};

int main()
{
	Fraction f1(4, 3);
	Fraction f2(6, 11);

	cout << "f1" << ((f1 == f2) ? " == " : " not == ") << "f2" << '\n';
	cout << "f1" << ((f1 != f2) ? " != " : " not != ") << "f2" << '\n';
	cout << "f1" << ((f1 < f2) ? " < " : " not < ") << "f2" << '\n';
	cout << "f1" << ((f1 > f2) ? " > " : " not > ") << "f2" << '\n';
	cout << "f1" << ((f1 <= f2) ? " <= " : " not <= ") << "f2" << '\n';
	cout << "f1" << ((f1 >= f2) ? " >= " : " not >= ") << "f2" << '\n';

	return 0;
}