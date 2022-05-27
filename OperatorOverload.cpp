#include <iostream>
#include "OperatorOverload.h"

Fraction::Fraction(int uNumerator, int uDenominator): numerator(uNumerator), denominator(uDenominator)
{
	while (denominator == 0)
	{
		std::cout << "Re-enter denominator, it has to be an integer that is more or less then zero: " << std::endl;
		std::cin >> denominator;
	}

	std::cout << "Fraction is " << numerator << "\\" << denominator << std::endl;
}
