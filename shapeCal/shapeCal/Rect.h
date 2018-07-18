#pragma once
#include "Shapes.h"

class Rect
	: public Shapes
{
public:
	Rect(int _base, int _height);
	Rect();
	~Rect();
	float virtual getPeri();
	float virtual getArea();
private:
	int base;
	int height;
};
