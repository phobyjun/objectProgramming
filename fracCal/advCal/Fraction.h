#pragma once
#include <iostream>
#include <Windows.h>

using namespace std;

class Fraction
{
public:
	Fraction(int _ja, int _mo);
	Fraction();
	~Fraction();
	void makeFraction();
	friend ostream& operator<<(ostream& os, Fraction& frac);
	Fraction & operator+(Fraction& frac);
	Fraction & operator-(Fraction& frac);
	Fraction & operator*(Fraction& frac);
	Fraction & operator/(Fraction& frac);
	int ja;
	int mo;
};
