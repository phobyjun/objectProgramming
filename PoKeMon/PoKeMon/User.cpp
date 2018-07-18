#include "User.h"

void User::showInterface()
{
	string pokeName = getMainPoke().getName();
	string pokeType = getMainPoke().getType();
	int pokeLv = getMainPoke().getLv();
	int pokeExp = getMainPoke().getExp();
	int pokeExpC = getMainPoke().getExpC();

	cout << "유저 이름 : " << name << "    " << "보유 금액 : " << money << "원" << endl;
	cout << "대표 캐릭터 : " << "LV" << pokeLv << "-" << pokeName << "[" << pokeType << "] ";
	cout << "  EXP : " << pokeExpC / pokeExp * 100 << "%" << "[" << pokeExpC << "/";
	cout << pokeExp << "]" << endl;
}

void User::showPoke()
{
	for (int i = 0; i < have; i++)
	{
		cout << "-------------------------------------------------";
		string pokeName = pokemon[i].getName();
		string pokeType = pokemon[i].getType();
		int pokeLv = pokemon[i].getLv();
		int pokeHp = pokemon[i].getHp();
		int pokeHpC = pokemon[i].getHpC();
		int pokeExp = pokemon[i].getExp();
		int pokeExpC = pokemon[i].getExpC();
		cout << i+1 << ". " << "LV" << pokeLv << " " << pokeName << "[" << pokeType << "]  ";
		cout << "HP " << "[" << pokeHpC << "/" << pokeHp << "]  ";
		cout << "EXP " << pokeExpC / pokeExp * 100 << "%" << "[" << pokeExpC << "/";
		cout << pokeExp << "]" << endl;
		cout << "-------------------------------------------------";
	}
}

void User::catchPoke(PoKeMon poke)
{
	pokemon[have] = poke;
	have++;
}

void User::changeMain(int num)
{
	mainPoke = num - 1;
}
