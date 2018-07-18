#pragma once
#include <iostream>

using namespace std;

class Shapes
{
public:
	Shapes();
	~Shapes();
	float virtual getPeri() = 0;
	float virtual getArea() = 0;
};
