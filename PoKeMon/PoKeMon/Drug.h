#pragma once
#include "Item.h"

class Drug
	:public Item
{
public:
	Drug() {};
	~Drug() {};
	void setVal(int _val) { val = _val; };
	int getVal() { return val; };
private:
	int val;
};

class SDrug
	:public Drug
{
	SDrug();
	~SDrug() {};
};

class MDrug
	:public Drug
{
	MDrug();
	~MDrug() {};
};

class LDrug
	:public Drug
{
	LDrug();
	~LDrug() {};
};
