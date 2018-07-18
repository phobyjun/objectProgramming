#include "App.h"
#include "Fraction.h"

App::App()
{
}

App::~App()
{
}

void App::getCommand()
{
	cout << "------------------" << endl;
	cout << "1. ����" << endl;
	cout << "2. ����" << endl;
	cout << "3. ����" << endl;
	cout << "4. ������" << endl;
	cout << "0. ����" << endl;
	cout << "------------------" << endl; 

	cout << "�Է� :: ";
	cin >> command;
}

void App::start()
{
	int ja1, ja2, mo1, mo2;
	while (true)
	{
		cout << "1�� �м��� �Է��Ͻÿ�(���� �и� ����)::";
		cin >> ja1;
		cin >> mo1;
		if (mo1 == 0)
			cout << "�и� 0�� �ƴ� ���� �Է��Ͻÿ�" << endl;
		else
			break;
	}
	while (true)
	{
		cout << "2�� �м��� �Է��Ͻÿ�(���� �и� ����)::";
		cin >> ja2;
		cin >> mo2;
		if (mo2 == 0)
			cout << "�и� 0�� �ƴ� ���� �Է��Ͻÿ�" << endl;
		else
			break;
	}
	frac1 = Fraction(ja1, mo1);
	frac2 = Fraction(ja2, mo2);
}

void App::add()
{
	Fraction frac3 = frac1 + frac2;
	cout << "��� -> " << frac3 << endl;
	system("pause");
}

void App::sub()
{
	Fraction frac3 = frac1 - frac2;
	cout << "��� -> " << frac3 << endl;
	system("pause");
}

void App::multi()
{
	Fraction frac3 = frac1 * frac2;
	cout << "��� -> " << frac3 << endl;
	system("pause");
}

void App::div()
{
	Fraction frac3 = frac1 / frac2;
	cout << "��� -> " << frac3 << endl;
	system("pause");
}

void App::run()
{
	start();

	while (true)
	{
		system("cls");

		cout << "1�� �м� :: " << frac1;
		cout << "2�� �м� :: " << frac2;

		getCommand();

		if (command == 0)
			break;
		else if (command == 1)
		{
			add();
		}
		else if (command == 2)
		{
			sub();
		}
		else if (command == 3)
		{
			multi();
		}
		else if (command == 4)
		{
			div();
		}
	}
}
