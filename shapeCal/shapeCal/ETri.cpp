#include "math.h"
#include "ETri.h"

ETri::ETri(int _base)
{
	base = _base;
}

ETri::ETri()
{
}

ETri::~ETri()
{
}

float ETri::getPeri()
{
	float peri;
	peri = 3 * base;

	return peri;
}

float ETri::getArea()
{
	float area;
	area = sqrt(3) / 4 * base * base;

	return area;
}