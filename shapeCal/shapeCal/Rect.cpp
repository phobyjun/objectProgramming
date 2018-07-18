#include "Rect.h"

Rect::Rect(int _base, int _height)
{
	base = _base;
	height = _height;
}

Rect::Rect()
{
}

Rect::~Rect()
{
}

float Rect::getPeri()
{
	float peri;
	peri = (base + height) * 2;

	return peri;
}

float Rect::getArea()
{
	float area;
	area = base * height;

	return area;
}
