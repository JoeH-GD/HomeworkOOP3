#pragma once
class Fraction {

private: 
	int numerator;
	int denominator;

public:

	Fraction();
	Fraction(int uNumerator, int uDenominator);

	int GetNumerator() const;
	int GetDenominator() const;
	void SetNumerator(int uNumerator);
	void SetDenominator(int uDenominator);

	friend Fraction operator+ (const Fraction& f1, const Fraction& f2);
	friend Fraction operator- (const Fraction& f1, const Fraction& f2);
	friend Fraction operator* (const Fraction& f1, const Fraction& f2);
	friend Fraction operator/ (const Fraction& f1, const Fraction& f2);

	 Fraction operator-() const;
	
	friend bool operator== (const Fraction& f1, const Fraction& f2);
	friend bool operator!= (const Fraction& f1, const Fraction& f2);
	friend bool operator>(const Fraction& f1, const Fraction& f2);
	friend bool operator >= (const Fraction& f1, const Fraction& f2);
	friend bool operator< (const Fraction& f1, const Fraction& f2);
	friend bool operator<= (const Fraction& f1, const Fraction& f2);
};