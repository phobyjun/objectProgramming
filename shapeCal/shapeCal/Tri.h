#pragma once
#include "Shapes.h"

class Tri
	: public Shapes
{
public:
	Tri(int _base1, int _base2, int _base3);
	Tri();
	~Tri();
	float virtual getPeri();
	float virtual getArea();
private:
	int base1;
	int base2;
	int base3;
};
