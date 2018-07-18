#pragma once
#include "Shapes.h"

class ETri
	: public Shapes
{
public:
	ETri(int _base);
	ETri();
	~ETri();
	float virtual getPeri();
	float virtual getArea();
private:
	int base;
};
