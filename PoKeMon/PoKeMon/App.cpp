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
	cout << endl << "                  1. �����Ѵ�" << endl;
	cout <<  "                  0. �����Ѵ�" << endl << endl;
	cin >> command;
	system("cls");
	
	if (command == 1)
	{
		cout << "                     �̸���?" << endl;
		cout << endl << "                  -> ";
		cin >> name;
		user.setName(name);
		cout << endl << "           �Բ� ������ ���ϸ��� ����" << endl << endl;
		cout <<  " (1) ���α�[��] (2) ���̸�[��] (3) �̻��ؾ�[Ǯ]" << endl;
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
	cout << "1. �߻����� ������" << endl;
	cout << "2. ���� ���ϸ���� Ȯ���Ѵ�" << endl;
	cout << "3. ���ϸ� ������ �鸰��" << endl;
	cout << "4. ���ϸ��Ϳ� �鸰��" << endl;
	cout << "0. �����Ѵ�" << endl;
	cout << "-------------------------------------------------";
	cout << "=> ";
	cin >> command;
}

void App::battle()
{
	string ranMob = mobArr[rand() % 3];
	if (ranMob == "���α�")
	{
		pokemon = new Kkobugi;
	}
	else if (ranMob == "���̸�")
	{
		pokemon = new Pairi;
	}
	else if (ranMob == "�̻��ؾ�")
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

	cout << "��! �߻��� " << mobName << "(��)�� Ƣ��Դ�!" << endl;
	Sleep(800);
	cout << "-------------------------------------------------" << endl;
	cout << "                    LV" << mobLv << " " << mobName << "[" << mobType << "]  ";
	cout << "HP " << "[" << mobHpC << "/" << mobHp << "]" << endl << endl;
	cout << "-------------------------------------------------";
	Sleep(800);
	cout << "����! " << pokeName << "!" << endl;
	Sleep(800);
	cout << "-------------------------------------------------" << endl;
	cout << "LV" << pokeLv << " " << pokeName << "[" << pokeType << "]  ";
	cout << "HP " << "[" << pokeHpC << "/" << pokeHp << "]  ";
	cout << "EXP " << pokeExpC / pokeExp * 100 << "%" << "[" << pokeExpC << "/";
	cout << pokeExp << "]" << endl << endl;
	cout << "-------------------------------------------------";
	cout << "1. �ο��        2. ����" << endl;
	cout << "3. ���ϸ�        4. ����ġ��" << endl;
	cout << "=>";
	cin >> command;
	cout << endl << endl;

	while (mobHpC > 0 || pokeHpC > 0)
	{
		if (command == 1)
		{
			int realDmg = (rand() % 200) * pokeDmg / 200;
			cout << pokeName << "�� ����!" << endl;
			mobHpC -= realDmg;
			Sleep(800);
			realDmg = (rand() % 200) * mobDmg / 200;
			cout << "�� " << mobName << "�� ����!" << endl;
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
			cout << "1. ��ǥ ���ϸ� ����" << endl;
			cout << "0. ������." << endl << "=> ";
			cin >> command;
			if (command == 1)
			{
				cout << "��ǥ�� ������ ���ϸ��� ��ȣ�� �Է��϶�" << endl;
				cout << "=> ";
				cin >> command;
				user.changeMain(command);
				cout << endl << endl << "����! " << pokeName << "!" << endl;
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
				cout << "���������� �����ƴ�!" << endl;
				system("pause");
				break;
			}
			else
			{
				int realDmg = (rand() % 200) * pokeDmg / 200;
				cout << "����ġ�� ���ߴ�!" << endl;
				Sleep(800);
				realDmg = (rand() % 200) * mobDmg / 200;
				cout << "�� " << mobName << "�� ����!" << endl;
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
		cout << "1. �ο��        2. ����" << endl;
		cout << "3. ���ϸ�        4. ����ġ��" << endl;
		cout << "=>";
		cin >> command;
		cout << endl << endl;
	}
}

void App::shopInterface()
{
	while (true)
	{
		cout << endl << "------------------�� �� �� �� ��-----------------" << endl;
		cout << "                                  �����ݾ� : " << user.getMoney() << endl;
		cout << "-------------------------------------------------";
		cout << "1. ���" << endl;
		cout << "2. �Ǵ�" << endl;
		cout << "0. ������." << endl << "=> ";
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
		cout << endl << "------------------�� �� �� �� ��-----------------" << endl;
		user.showPoke();
		cout << "1. ���ϸ� ġ��" << endl;
		cout << "0. ������." << endl << "=> ";
		cin >> command;
		if (command == 1)
		{
			cout << "ġ���� ���ϸ��� ��ȣ�� �Է��϶�" << endl;
			cout << "=> ";
			cin >> command;
			user.getPoke(command).healHp();
			cout << endl << "ġ���� ";
			for (int i = 0; i < 41; i++)
			{
				cout << "=";
				Sleep(70);
			}
			cout << "ġ�� �Ϸ�";
			Sleep(800);
			system("cls");
		}
		else if (command == 0)
			break;
	}
}

void App::run()
{
	system("title ���ϸ���");
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
			cout << "1. ��ǥ ���ϸ� ����" << endl;
			cout << "0. ������." << endl << "=> ";
			cin >> command;
			if (command == 1)
			{
				cout << "��ǥ�� ������ ���ϸ��� ��ȣ�� �Է��϶�" << endl;
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
