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
	cout << "1. 덧셈" << endl;
	cout << "2. 뺄셈" << endl;
	cout << "3. 곱셈" << endl;
	cout << "4. 나눗셈" << endl;
	cout << "0. 종료" << endl;
	cout << "------------------" << endl; 

	cout << "입력 :: ";
	cin >> command;
}

void App::start()
{
	int ja1, ja2, mo1, mo2;
	while (true)
	{
		cout << "1번 분수를 입력하시오(분자 분모 순서)::";
		cin >> ja1;
		cin >> mo1;
		if (mo1 == 0)
			cout << "분모에 0이 아닌 수를 입력하시오" << endl;
		else
			break;
	}
	while (true)
	{
		cout << "2번 분수를 입력하시오(분자 분모 순서)::";
		cin >> ja2;
		cin >> mo2;
		if (mo2 == 0)
			cout << "분모에 0이 아닌 수를 입력하시오" << endl;
		else
			break;
	}
	frac1 = Fraction(ja1, mo1);
	frac2 = Fraction(ja2, mo2);
}

void App::add()
{
	Fraction frac3 = frac1 + frac2;
	cout << "결과 -> " << frac3 << endl;
	system("pause");
}

void App::sub()
{
	Fraction frac3 = frac1 - frac2;
	cout << "결과 -> " << frac3 << endl;
	system("pause");
}

void App::multi()
{
	Fraction frac3 = frac1 * frac2;
	cout << "결과 -> " << frac3 << endl;
	system("pause");
}

void App::div()
{
	Fraction frac3 = frac1 / frac2;
	cout << "결과 -> " << frac3 << endl;
	system("pause");
}

void App::run()
{
	start();

	while (true)
	{
		system("cls");

		cout << "1번 분수 :: " << frac1;
		cout << "2번 분수 :: " << frac2;

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
