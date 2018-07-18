#include "Fraction.h"

Fraction::Fraction(int _ja, int _mo)
{
	ja = _ja;
	mo = _mo;
	makeFraction();
}

Fraction::Fraction()
{
}

Fraction::~Fraction()
{
}

void Fraction::makeFraction()
{
	for (int i = mo; i > 1; i--)
	{
		if (ja%i == 0)
			if (mo%i == 0)
			{
				ja = ja / i;
				mo = mo / i;
			}
	}
}

Fraction & Fraction::operator+(Fraction & frac)
{
	int tempJa;
	int tempMo;
	tempJa = (ja * frac.mo + mo * frac.ja);
	tempMo = (mo * frac.mo);
	
	Fraction frac3(tempJa, tempMo);
	return frac3;
}

Fraction & Fraction::operator-(Fraction & frac)
{
	int tempJa;
	int tempMo;
	tempJa = (ja * frac.mo - mo * frac.ja);
	tempMo = (mo * frac.mo);

	Fraction frac3(tempJa, tempMo);
	return frac3;
}

Fraction & Fraction::operator*(Fraction & frac)
{
	int tempJa;
	int tempMo;
	tempJa = (ja * frac.ja);
	tempMo = (mo * frac.mo);

	Fraction frac3(tempJa, tempMo);
	return frac3;
}

Fraction & Fraction::operator/(Fraction & frac)
{
	int tempJa;
	int tempMo;
	tempJa = (ja * frac.mo);
	tempMo = (mo * frac.ja);

	Fraction frac3(tempJa, tempMo);
	return frac3;
}

ostream & operator<<(ostream & os, Fraction & frac)
{
	os << frac.ja << " / " << frac.mo << endl;
	return os;
}
