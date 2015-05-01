#include <iostream>
using namespace std;

class fraction
{
public:
	fraction();	
	fraction(int num, int den);
	void print() const;

	int numerator;
	int denominator;

	fraction AddedTo(fraction f);
	fraction Subtract(fraction f);
	fraction MultipliedBy(fraction f);
	fraction DividedBy(fraction f) const;
	bool isGreaterThan(fraction f);
	bool isEqualTo(fraction f);
};