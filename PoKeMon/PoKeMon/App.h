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
	string mobArr[3] = { "���α�", "���̸�", "�̻��ؾ�" };
	PoKeMon* pokemon;
};
