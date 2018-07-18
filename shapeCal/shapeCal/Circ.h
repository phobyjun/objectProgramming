#pragma once
#include "Shapes.h"

class Circ
	: public Shapes
{
public:
	Circ(int _radius);
	Circ();
	~Circ();
	float virtual getPeri();
	float virtual getArea();

private:
	int radius;
};
