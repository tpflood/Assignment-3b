
#include "stdafx.h"
#include "fraction.h"

using namespace std; 

//default constructor
fraction::fraction()
{
	numerator = 0;
	denominator = 1;
}

//constructor with parameters numerator and denominator
fraction::fraction(int num, int den)
{
	numerator = num;
	denominator = den;
}

void fraction::print() const
{
	int num, den;

	num = numerator;
	den = denominator;

	if ((num != 0) && den != 0)
	{
		while (num != den)
		{
			if (num < den) den -= num;
			else num -= den;
		}
		num = numerator / den;
		den = denominator / den;
	}
	cout << num;
	cout << " / ";
	cout << den;
	
};

fraction fraction::AddedTo(fraction f)
{
	int CommonDenominator;

	CommonDenominator = denominator * f.denominator;
	f.numerator = (numerator * CommonDenominator / denominator) + (f.numerator * CommonDenominator / f.denominator);
	f.denominator = CommonDenominator;
	return (f);
};

fraction fraction::Subtract(fraction f)
{
	int CommonDenominator;

	CommonDenominator = denominator * f.denominator;
	f.numerator = (numerator * CommonDenominator / denominator) - (f.numerator * CommonDenominator / f.denominator);
	f.denominator = CommonDenominator;
	return (f);
};

fraction fraction::MultipliedBy(fraction f)
{

	f.numerator = numerator * f.numerator;
	f.denominator = denominator * f.denominator;
	
	return (f);
};

fraction fraction::DividedBy(fraction f) const
{
	fraction fTemp;

	fTemp.numerator = numerator * f.denominator;
	fTemp.denominator = denominator * f.numerator;

	return (fTemp);
};

bool fraction::isGreaterThan(fraction f)
{
	return((numerator*f.denominator) > (f.numerator*denominator));
}

bool fraction::isEqualTo(fraction f)
{
	return((numerator*f.denominator) == (f.numerator*denominator));
}