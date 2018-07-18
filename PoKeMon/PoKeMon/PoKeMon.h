#pragma once
#include <string>
#include <iostream>
#include "Windows.h"
using namespace std;

class PoKeMon
{
public:
	PoKeMon() {};
	~PoKeMon() {};
	void setName(string _name) { name = _name; };
	void setType(string _type) { type = _type; };
	void setLv(int _lv) { lv = _lv; };
	void setDmg() { dmg = lv * 17; };
	void setHp() { hp = lv * 70; };
	void setHpC() { hpC = lv * 70; };
	void setExpC() { expC = 0; };
	void setExp() { exp = lv * 40; };
	string getName() { return name; };
	string getType() { return type; };
	int getLv() { return lv; };
	int getDmg() { return dmg; };
	int getHp() { return hp; };
	int getHpC() { return hpC; };
	int getExpC() { return expC; };
	int getExp() { return exp; };

	void healHp() { hpC = hp; };
private:
	string name;
	string type;
	int lv;
	int dmg;
	int hp;
	int hpC;
	int exp;
	int expC;
};

class Kkobugi
	:
	public PoKeMon
{
public:
	Kkobugi();
	~Kkobugi() {};
};

class Pairi
	:
	public PoKeMon
{
public:
	Pairi();
	~Pairi() {};
};

class Isanghaessi
	:
	public PoKeMon
{
public:
	Isanghaessi();
	~Isanghaessi() {};
};