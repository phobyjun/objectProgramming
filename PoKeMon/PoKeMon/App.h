#pragma once
#include "User.h"

class App
{
public:
	App() {};
	~App() {};
	void start();
	void main();
	void battle();
	void shopInterface();
	void pokecenInterface();
	void run();
private:
	User user;
	int command;
	string mobArr[3] = { "꼬부기", "파이리", "이상해씨" };
	PoKeMon* pokemon;
};
