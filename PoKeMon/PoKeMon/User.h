#pragma once
#include "PoKeMon.h"
#include "Item.h"

class User
{
public:
	User() {};
	~User() {};
	void setName(string _name) { name = _name; };
	string getName() { return name; };
	PoKeMon getPoke(int _num) { return pokemon[_num]; };
	PoKeMon getMainPoke() { return pokemon[mainPoke]; };
	int getMoney() { return money; };

	void showInterface();
	void showPoke();
	void catchPoke(PoKeMon poke);
	void changeMain(int num);
private:
	string name;
	int money = 0;

	int have = 0;
	PoKeMon pokemon[6];
	int mainPoke = 0;
};
