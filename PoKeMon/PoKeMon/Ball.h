#pragma once
#include "Item.h"

class Ball
	:public Item
{
public:
	Ball() {};
	~Ball() {};
	void setProb(int _prob) { prob = _prob; };
	int getProb() { return prob; };
private:
	int prob;
};

class monBall
	:public Ball
{
	monBall();
	~monBall() {};
};

class sBall
	:public Ball
{
	sBall();
	~sBall() {};
};

class maBall
	:public Ball
{
	maBall();
	~maBall() {};
};
