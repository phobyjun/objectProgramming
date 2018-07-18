#pragma once
#include <iostream>
#include <string>

using namespace std;

class Item
{
public:
	Item() {};
	~Item() {};
	void setName(string _name) { name = _name; };
	void setCost(int _cost) { cost = _cost; };
	void setCnt(int _num) { cnt += _num; };
	string getName() { return name; };
	int getCost() { return cost; };
	int getCnt() { return cnt; };

private:
	string name;
	int cost;
	int cnt = 0;
};
