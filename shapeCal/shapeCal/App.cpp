#include "App.h"

App::App()
{
}

App::~App()
{
}

void App::getCommand()
{
	cout << "도형 선택" << endl;
	cout << "--------------------------" << endl;
	cout << "1. 직사각형" << endl;
	cout << "2. 정사각형" << endl;
	cout << "3. 삼각형" << endl;
	cout << "4. 정삼각형" << endl;
	cout << "5. 원" << endl;
	cout << "0. 종료" << endl;
	cout << "--------------------------" << endl;

	cout << "입력 :: ";
	cin >> command;
}

void App::run()
{
	while (true)
	{
		system("cls");

		getCommand();

		if (command == 0)
			break;
		else if (command == 1)
		{
			system("cls");
			
			int base;
			int height;
			cout << "현재 도형 :: 직사각형" << endl;
			cout << "--------------------------" << endl;
			cout << "가로 길이 입력 :: ";
			cin >> base;
			cout << "세로 길이 입력 :: ";
			cin >> height;
			shaptr = new Rect(base, height);
			
			system("cls");

			cout << "현재 도형 :: 직사각형" << endl;
			cout << "가로 길이 :: " << base << endl;
			cout << "세로 길이 :: " << height << endl;
			cout << "--------------------------" << endl;
			cout << "1. 둘레" << endl;
			cout << "2. 넓이" << endl;
			cout << "--------------------------" << endl;
			cout << "입력 :: ";
			cin >> command;

			if (command == 1)
			{
				float peri = shaptr->getPeri();
				cout << "둘레는 " << peri << "입니다." << endl;
				system("pause");
			}
			else if (command == 2)
			{
				float area = shaptr->getArea();
				cout << "넓이는 " << area << "입니다." << endl;
				system("pause");
			}
		}
		else if (command == 2)
		{
			system("cls");

			int base;
			cout << "현재 도형 :: 정사각형" << endl;
			cout << "--------------------------" << endl;
			cout << "한 변의 길이 입력 :: ";
			cin >> base;
			shaptr = new Squa(base);

			system("cls");

			cout << "현재 도형 :: 정사각형" << endl;
			cout << "한 변의 길이 :: " << base << endl;
			cout << "--------------------------" << endl;
			cout << "1. 둘레" << endl;
			cout << "2. 넓이" << endl;
			cout << "--------------------------" << endl;
			cout << "입력 :: ";
			cin >> command;

			if (command == 1)
			{
				float peri = shaptr->getPeri();
				cout << "둘레는 " << peri << "입니다." << endl;
				system("pause");
			}
			else if (command == 2)
			{
				float area = shaptr->getArea();
				cout << "넓이는 " << area << "입니다." << endl;
				system("pause");
			}
		}
		else if (command == 3)
		{
			system("cls");

			int base1;
			int base2;
			int base3;
			cout << "현재 도형 :: 삼각형" << endl;
			cout << "--------------------------" << endl;
			cout << "첫번째 변의 길이 입력 :: ";
			cin >> base1;
			cout << "두번째 변의 길이 입력 :: ";
			cin >> base2;
			cout << "세번째 변의 길이 입력 :: ";
			cin >> base3;
			shaptr = new Tri(base1, base2, base3);

			system("cls");

			cout << "현재 도형 :: 삼각형" << endl;
			cout << "첫번째 변의 길이 :: " << base1 << endl;
			cout << "두번째 변의 길이 :: " << base2 << endl;
			cout << "세번째 변의 길이 :: " << base3 << endl;
			cout << "--------------------------" << endl;
			cout << "1. 둘레" << endl;
			cout << "2. 넓이" << endl;
			cout << "--------------------------" << endl;
			cout << "입력 :: ";
			cin >> command;

			if (command == 1)
			{
				float peri = shaptr->getPeri();
				cout << "둘레는 " << peri << "입니다." << endl;
				system("pause");
			}
			else if (command == 2)
			{
				float area = shaptr->getArea();
				cout << "넓이는 " << area << "입니다." << endl;
				system("pause");
			}
		}
		else if (command == 4)
		{
			system("cls");

			int base;
			cout << "현재 도형 :: 정삼각형" << endl;
			cout << "--------------------------" << endl;
			cout << "한 변의 길이 입력 :: ";
			cin >> base;
			shaptr = new ETri(base);

			system("cls");

			cout << "현재 도형 :: 정삼각형" << endl;
			cout << "한 변의 길이 :: " << base << endl;
			cout << "--------------------------" << endl;
			cout << "1. 둘레" << endl;
			cout << "2. 넓이" << endl;
			cout << "--------------------------" << endl;
			cout << "입력 :: ";
			cin >> command;

			if (command == 1)
			{
				float peri = shaptr->getPeri();
				cout << "둘레는 " << peri << "입니다." << endl;
				system("pause");
			}
			else if (command == 2)
			{
				float area = shaptr->getArea();
				cout << "넓이는 " << area << "입니다." << endl;
				system("pause");
			}
		}
		else if (command == 5)
		{
			system("cls");

			int base;
			cout << "현재 도형 :: 원" << endl;
			cout << "--------------------------" << endl;
			cout << "반지름의 길이 입력 :: ";
			cin >> base;
			shaptr = new Circ(base);

			system("cls");

			cout << "현재 도형 :: 원" << endl;
			cout << "반지름의 길이 :: " << base << endl;
			cout << "--------------------------" << endl;
			cout << "1. 둘레" << endl;
			cout << "2. 넓이" << endl;
			cout << "--------------------------" << endl;
			cout << "입력 :: ";
			cin >> command;

			if (command == 1)
			{
				float peri = shaptr->getPeri();
				cout << "둘레는 " << peri << "입니다." << endl;
				system("pause");
			}
			else if (command == 2)
			{
				float area = shaptr->getArea();
				cout << "넓이는 " << area << "입니다." << endl;
				system("pause");
			}
		}
	}
}
