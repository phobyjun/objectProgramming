#pragma once
#include "Windows.h"
#include "Shapes.h"
#include "Circ.h"
#include "ETri.h"
#include "Rect.h"
#include "Squa.h"
#include "Tri.h"

class App
{
public:
	App();
	~App();
	void run();
	void getCommand();
private:
	int command;
	Shapes* shaptr;
};
