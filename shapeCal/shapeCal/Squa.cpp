#include "Squa.h"

Squa::Squa(int _base)
{
	base = _base;
}

Squa::Squa()
{
}

Squa::~Squa()
{
}

float Squa::getPeri()
{
	float peri;
	peri = 4 * base;

	return peri;
}

float Squa::getArea()
{
	float area;
	area = base * base;

	return area;
}
