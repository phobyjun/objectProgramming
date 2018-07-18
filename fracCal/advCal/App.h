#pragma once
#include "Fraction.h"
class App
{
public:
	App();
	~App();
	void run();
	void start();
	void getCommand();
	void add();
	void sub();
	void multi();
	void div();

private:
	int command;
	Fraction frac1;
	Fraction frac2;
};
