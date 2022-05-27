#include <iostream>
#include "OperatorOverload.h"

Fraction::Fraction()
{
}

Fraction::Fraction(int uNumerator, int uDenominator): numerator(uNumerator), denominator(uDenominator)
{
	while (denominator == 0)
	{
		std::cout << "Re-enter denominator, it has to be an integer that is more or less then zero: " << std::endl;
		std::cin >> denominator;
	}

	std::cout << "Fraction is " << numerator << "\\" << denominator << std::endl;
}

int Fraction::GetNumerator() const
{
	return numerator;
}

int Fraction::GetDenominator() const
{
	return denominator;
}

void Fraction::SetNumerator(int uNumerator)
{
	numerator = uNumerator;
}

void Fraction::SetDenominator(int uDenominator)
{
	denominator = uDenominator;
}


 Fraction operator+(const Fraction& f1, const Fraction& f2)
 {
	 int NewNumerator = f1.GetNumerator() * f2.GetDenominator() + f2.GetNumerator() * f1.GetDenominator();

	 int NewDenominator = f1.GetDenominator() * f2.GetDenominator();
	 Fraction FractionSum(NewNumerator, NewDenominator);
	 return FractionSum;
 }
