#pragma once
#include "Shapes.h"

class Squa
	: public Shapes
{
public:
	Squa(int _base);
	Squa();
	~Squa();
	float virtual getPeri();
	float virtual getArea();
private:
	int base;
};
