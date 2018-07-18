#include "App.h"

App::App()
{
}

App::~App()
{
}

void App::getCommand()
{
	cout << "���� ����" << endl;
	cout << "--------------------------" << endl;
	cout << "1. ���簢��" << endl;
	cout << "2. ���簢��" << endl;
	cout << "3. �ﰢ��" << endl;
	cout << "4. ���ﰢ��" << endl;
	cout << "5. ��" << endl;
	cout << "0. ����" << endl;
	cout << "--------------------------" << endl;

	cout << "�Է� :: ";
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
			cout << "���� ���� :: ���簢��" << endl;
			cout << "--------------------------" << endl;
			cout << "���� ���� �Է� :: ";
			cin >> base;
			cout << "���� ���� �Է� :: ";
			cin >> height;
			shaptr = new Rect(base, height);
			
			system("cls");

			cout << "���� ���� :: ���簢��" << endl;
			cout << "���� ���� :: " << base << endl;
			cout << "���� ���� :: " << height << endl;
			cout << "--------------------------" << endl;
			cout << "1. �ѷ�" << endl;
			cout << "2. ����" << endl;
			cout << "--------------------------" << endl;
			cout << "�Է� :: ";
			cin >> command;

			if (command == 1)
			{
				float peri = shaptr->getPeri();
				cout << "�ѷ��� " << peri << "�Դϴ�." << endl;
				system("pause");
			}
			else if (command == 2)
			{
				float area = shaptr->getArea();
				cout << "���̴� " << area << "�Դϴ�." << endl;
				system("pause");
			}
		}
		else if (command == 2)
		{
			system("cls");

			int base;
			cout << "���� ���� :: ���簢��" << endl;
			cout << "--------------------------" << endl;
			cout << "�� ���� ���� �Է� :: ";
			cin >> base;
			shaptr = new Squa(base);

			system("cls");

			cout << "���� ���� :: ���簢��" << endl;
			cout << "�� ���� ���� :: " << base << endl;
			cout << "--------------------------" << endl;
			cout << "1. �ѷ�" << endl;
			cout << "2. ����" << endl;
			cout << "--------------------------" << endl;
			cout << "�Է� :: ";
			cin >> command;

			if (command == 1)
			{
				float peri = shaptr->getPeri();
				cout << "�ѷ��� " << peri << "�Դϴ�." << endl;
				system("pause");
			}
			else if (command == 2)
			{
				float area = shaptr->getArea();
				cout << "���̴� " << area << "�Դϴ�." << endl;
				system("pause");
			}
		}
		else if (command == 3)
		{
			system("cls");

			int base1;
			int base2;
			int base3;
			cout << "���� ���� :: �ﰢ��" << endl;
			cout << "--------------------------" << endl;
			cout << "ù��° ���� ���� �Է� :: ";
			cin >> base1;
			cout << "�ι�° ���� ���� �Է� :: ";
			cin >> base2;
			cout << "����° ���� ���� �Է� :: ";
			cin >> base3;
			shaptr = new Tri(base1, base2, base3);

			system("cls");

			cout << "���� ���� :: �ﰢ��" << endl;
			cout << "ù��° ���� ���� :: " << base1 << endl;
			cout << "�ι�° ���� ���� :: " << base2 << endl;
			cout << "����° ���� ���� :: " << base3 << endl;
			cout << "--------------------------" << endl;
			cout << "1. �ѷ�" << endl;
			cout << "2. ����" << endl;
			cout << "--------------------------" << endl;
			cout << "�Է� :: ";
			cin >> command;

			if (command == 1)
			{
				float peri = shaptr->getPeri();
				cout << "�ѷ��� " << peri << "�Դϴ�." << endl;
				system("pause");
			}
			else if (command == 2)
			{
				float area = shaptr->getArea();
				cout << "���̴� " << area << "�Դϴ�." << endl;
				system("pause");
			}
		}
		else if (command == 4)
		{
			system("cls");

			int base;
			cout << "���� ���� :: ���ﰢ��" << endl;
			cout << "--------------------------" << endl;
			cout << "�� ���� ���� �Է� :: ";
			cin >> base;
			shaptr = new ETri(base);

			system("cls");

			cout << "���� ���� :: ���ﰢ��" << endl;
			cout << "�� ���� ���� :: " << base << endl;
			cout << "--------------------------" << endl;
			cout << "1. �ѷ�" << endl;
			cout << "2. ����" << endl;
			cout << "--------------------------" << endl;
			cout << "�Է� :: ";
			cin >> command;

			if (command == 1)
			{
				float peri = shaptr->getPeri();
				cout << "�ѷ��� " << peri << "�Դϴ�." << endl;
				system("pause");
			}
			else if (command == 2)
			{
				float area = shaptr->getArea();
				cout << "���̴� " << area << "�Դϴ�." << endl;
				system("pause");
			}
		}
		else if (command == 5)
		{
			system("cls");

			int base;
			cout << "���� ���� :: ��" << endl;
			cout << "--------------------------" << endl;
			cout << "�������� ���� �Է� :: ";
			cin >> base;
			shaptr = new Circ(base);

			system("cls");

			cout << "���� ���� :: ��" << endl;
			cout << "�������� ���� :: " << base << endl;
			cout << "--------------------------" << endl;
			cout << "1. �ѷ�" << endl;
			cout << "2. ����" << endl;
			cout << "--------------------------" << endl;
			cout << "�Է� :: ";
			cin >> command;

			if (command == 1)
			{
				float peri = shaptr->getPeri();
				cout << "�ѷ��� " << peri << "�Դϴ�." << endl;
				system("pause");
			}
			else if (command == 2)
			{
				float area = shaptr->getArea();
				cout << "���̴� " << area << "�Դϴ�." << endl;
				system("pause");
			}
		}
	}
}
