#include "Circ.h"

Circ::Circ(int _radius)
{
	radius = _radius;
}

Circ::Circ()
{
}

Circ::~Circ()
{
}

float Circ::getPeri()
{
	float peri;
	peri = 2 * 3 * radius;

	return peri;
}

float Circ::getArea()
{
	float area;
	area = 3 * radius * radius;

	return area;
}