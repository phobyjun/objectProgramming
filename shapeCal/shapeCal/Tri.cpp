#include "math.h"
#include "Tri.h"

Tri::Tri(int _base1, int _base2, int _base3)
{
	base1 = _base1;
	base2 = _base2;
	base3 = _base3;
}

Tri::Tri()
{
}

Tri::~Tri()
{
}

float Tri::getPeri()
{
	float peri;
	peri = base1 + base2 + base3;

	return peri;
}

float Tri::getArea()
{
	float area;
	float val;

	val = 4 * pow(base1*base2, 2)
			- pow((base1*base1 + base2*base2 - base3*base3), 2);
	area = sqrt(val) / 4;

	return area;
}
