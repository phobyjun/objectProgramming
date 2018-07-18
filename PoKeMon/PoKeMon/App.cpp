#include "App.h"

void App::start()
{
	system("mode con:cols=49 lines=15");
	string name;
	cout << endl << endl << "         _____     _                     " << endl;
	cout << "        |  _  |___| |_ ___ _____ ___ ___ " << endl;
	cout << "        |   __| . | '_| -_|     | . |   |" << endl;
	cout << "        |__|  |___|_,_|___|_|_|_|___|_|_|" << endl << endl << endl;
	cout << "                                     @jun_seok" << endl << endl;
	cout << endl << "                  1. 시작한다" << endl;
	cout <<  "                  0. 종료한다" << endl << endl;
	cin >> command;
	system("cls");
	
	if (command == 1)
	{
		cout << "                     이름은?" << endl;
		cout << endl << "                  -> ";
		cin >> name;
		user.setName(name);
		cout << endl << "           함께 모험할 포켓몬을 골라라" << endl << endl;
		cout <<  " (1) 꼬부기[물] (2) 파이리[불] (3) 이상해씨[풀]" << endl;
		cin >> command;
		if (command == 1)
		{
			pokemon = new Kkobugi;
			user.catchPoke(*pokemon);
		}
		else if (command == 2)
		{
			pokemon = new Pairi;
			user.catchPoke(*pokemon);
		}
		else if (command == 3)
		{
			pokemon = new Isanghaessi;
			user.catchPoke(*pokemon);
		}
	}
	else if (command == 0)
		exit(0);
}

void App::main()
{
	system("cls");
	user.showInterface();
	cout << "-------------------------------------------------";
	cout << "1. 야생으로 떠난다" << endl;
	cout << "2. 나의 포켓몬들을 확인한다" << endl;
	cout << "3. 포켓몬 상점에 들린다" << endl;
	cout << "4. 포켓몬센터에 들린다" << endl;
	cout << "0. 종료한다" << endl;
	cout << "-------------------------------------------------";
	cout << "=> ";
	cin >> command;
}

void App::battle()
{
	string ranMob = mobArr[rand() % 3];
	if (ranMob == "꼬부기")
	{
		pokemon = new Kkobugi;
	}
	else if (ranMob == "파이리")
	{
		pokemon = new Pairi;
	}
	else if (ranMob == "이상해씨")
	{
		pokemon = new Isanghaessi;
	}
	int lv = user.getMainPoke().getLv();
	pokemon->setLv(lv + rand()%2);

	string pokeName = user.getMainPoke().getName();
	string pokeType = user.getMainPoke().getType();
	int pokeLv = user.getMainPoke().getLv();
	int pokeDmg = user.getMainPoke().getDmg();
	int pokeHp = user.getMainPoke().getHp();
	int pokeHpC = user.getMainPoke().getHpC();
	int pokeExp = user.getMainPoke().getExp();
	int pokeExpC = user.getMainPoke().getExpC();

	string mobName = pokemon->getName();
	string mobType = pokemon->getType();
	int mobLv = pokemon->getLv();
	int mobDmg = pokemon->getDmg();
	int mobHp = pokemon->getHp();
	int mobHpC = pokemon->getHpC();
	int mobExp = pokemon->getExp();
	int mobExpC = pokemon->getExpC();

	cout << "앗! 야생의 " << mobName << "(이)가 튀어나왔다!" << endl;
	Sleep(800);
	cout << "-------------------------------------------------" << endl;
	cout << "                    LV" << mobLv << " " << mobName << "[" << mobType << "]  ";
	cout << "HP " << "[" << mobHpC << "/" << mobHp << "]" << endl << endl;
	cout << "-------------------------------------------------";
	Sleep(800);
	cout << "가랏! " << pokeName << "!" << endl;
	Sleep(800);
	cout << "-------------------------------------------------" << endl;
	cout << "LV" << pokeLv << " " << pokeName << "[" << pokeType << "]  ";
	cout << "HP " << "[" << pokeHpC << "/" << pokeHp << "]  ";
	cout << "EXP " << pokeExpC / pokeExp * 100 << "%" << "[" << pokeExpC << "/";
	cout << pokeExp << "]" << endl << endl;
	cout << "-------------------------------------------------";
	cout << "1. 싸우다        2. 가방" << endl;
	cout << "3. 포켓몬        4. 도망치다" << endl;
	cout << "=>";
	cin >> command;
	cout << endl << endl;

	while (mobHpC > 0 || pokeHpC > 0)
	{
		if (command == 1)
		{
			int realDmg = (rand() % 200) * pokeDmg / 200;
			cout << pokeName << "의 공격!" << endl;
			mobHpC -= realDmg;
			Sleep(800);
			realDmg = (rand() % 200) * mobDmg / 200;
			cout << "적 " << mobName << "의 공격!" << endl;
			pokeHpC -= realDmg;
			Sleep(800);
			system("cls");
		}
		else if (command == 2)
		{

		}
		else if (command == 3)
		{
			system("cls");
			user.showPoke();
			cout << "1. 대표 포켓몬 설정" << endl;
			cout << "0. 떠난다." << endl << "=> ";
			cin >> command;
			if (command == 1)
			{
				cout << "대표로 설정할 포켓몬의 번호를 입력하라" << endl;
				cout << "=> ";
				cin >> command;
				user.changeMain(command);
				cout << endl << endl << "가랏! " << pokeName << "!" << endl;
				Sleep(800);
				system("cls");
			}
			else if (command == 0)
				system("cls");
		}
		else if (command == 4)
		{
			int randint = (rand() % 30);
			if (randint > 0 && randint < 6)
			{
				cout << "성공적으로 도망쳤다!" << endl;
				system("pause");
				break;
			}
			else
			{
				int realDmg = (rand() % 200) * pokeDmg / 200;
				cout << "도망치지 못했다!" << endl;
				Sleep(800);
				realDmg = (rand() % 200) * mobDmg / 200;
				cout << "적 " << mobName << "의 공격!" << endl;
				pokeHpC -= realDmg;
				Sleep(800);
				system("cls");
			}
		}
		cout << "-------------------------------------------------" << endl;
		cout << "                    LV" << mobLv << " " << mobName << "[" << mobType << "]  ";
		cout << "HP " << "[" << mobHpC << "/" << mobHp << "]" << endl << endl;
		cout << "-------------------------------------------------";
		cout << "-------------------------------------------------" << endl;
		cout << "LV" << pokeLv << " " << pokeName << "[" << pokeType << "]  ";
		cout << "HP " << "[" << pokeHpC << "/" << pokeHp << "]  ";
		cout << "EXP " << pokeExpC / pokeExp * 100 << "%" << "[" << pokeExpC << "/";
		cout << pokeExp << "]" << endl << endl;
		cout << "-------------------------------------------------";
		cout << "1. 싸우다        2. 가방" << endl;
		cout << "3. 포켓몬        4. 도망치다" << endl;
		cout << "=>";
		cin >> command;
		cout << endl << endl;
	}
}

void App::shopInterface()
{
	while (true)
	{
		cout << endl << "------------------포 켓 몬 상 점-----------------" << endl;
		cout << "                                  보유금액 : " << user.getMoney() << endl;
		cout << "-------------------------------------------------";
		cout << "1. 산다" << endl;
		cout << "2. 판다" << endl;
		cout << "0. 떠난다." << endl << "=> ";
		cin >> command;
		if (command == 1)
		{

		}
		else if (command == 2)
		{

		}
		else if (command == 0)
			break;
	}
}

void App::pokecenInterface()
{
	while (true)
	{
		cout << endl << "------------------포 켓 몬 센 터-----------------" << endl;
		user.showPoke();
		cout << "1. 포켓몬 치료" << endl;
		cout << "0. 떠난다." << endl << "=> ";
		cin >> command;
		if (command == 1)
		{
			cout << "치료할 포켓몬의 번호를 입력하라" << endl;
			cout << "=> ";
			cin >> command;
			user.getPoke(command).healHp();
			cout << endl << "치료중 ";
			for (int i = 0; i < 41; i++)
			{
				cout << "=";
				Sleep(70);
			}
			cout << "치료 완료";
			Sleep(800);
			system("cls");
		}
		else if (command == 0)
			break;
	}
}

void App::run()
{
	system("title 포켓몬스터");
	start();
	system("mode con:cols=49 lines=20");
	while (true)
	{
		main();
		system("cls");
		if (command == 0)
			exit(0);
		else if (command == 1)
		{
			battle();
		}
		else if (command == 2)
		{
			user.showPoke();
			cout << "1. 대표 포켓몬 설정" << endl;
			cout << "0. 떠난다." << endl << "=> ";
			cin >> command;
			if (command == 1)
			{
				cout << "대표로 설정할 포켓몬의 번호를 입력하라" << endl;
				cout << "=> ";
				cin >> command;
				user.changeMain(command);
			}
			else if (command == 0) {}
		}
		else if (command == 3)
		{
			shopInterface();
		}
		else if (command == 4)
		{
			pokecenInterface();
		}
	}
}
