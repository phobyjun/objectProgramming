#include <iostream>
#include <fstream>
#include <string>

using namespace std;

struct Node
{
	int info;
	Node* next = nullptr;
};

int getNum()
{
	cout << "------------------------------------" << endl;
	cout << "1. �߰�" << endl;
	cout << "2. ����(���ڷ�)" << endl;
	cout << "3. ����(�ε�����)" << endl;
	cout << "4. ���Ϸ� ����(�������� ����)" << endl;
	cout << "5. ���Ͽ��� �ҷ�����(�������� ����,���������ϸ� ������ ���Ϸ� ����)" << endl;
	cout << "0. ����" << endl;
	cout << "------------------------------------" << endl;

	cout << "�Է� :: ";
	int inputNum;
	cin >> inputNum;

	return inputNum;
}

int main()
{
	int inputNum, val;

	Node* list = nullptr;
	Node* temp0;
	Node* temp1;
	Node* temp2;
	Node* temp3;

	while (true)
	{
		temp0 = list;
		temp1 = list;
		temp2 = list;
		temp3 = list;

		while (temp0 != nullptr)
		{
			cout << temp0->info << " ";
			temp0 = temp0->next;
		}
		cout << endl;

		inputNum = getNum();

		if (inputNum == 0)
		{
			break;
		}
		else if (inputNum == 1)
		{
			cout << "�߰��� ��: ";
			cin >> val;
			if (list == nullptr)
			{
				list = new Node;
				list->info = val;
			}
			else
			{
				while (temp1->next != nullptr)
				{
					temp1 = temp1->next;
				}
				temp1->next = new Node;
				temp1->next->info = val;
				cout << "�߰� �Ϸ�" << endl;
			}
		}
		else if (inputNum == 2)
		{
			cout << "������ ��: ";
			cin >> val;
			if (list->info == val)
			{
				list = list->next;
			}
			else
			{
				while (temp2->next->info != val)
				{
					temp2 = temp2->next;
				}
				temp2->next = temp2->next->next;
			}
			cout << "���� �Ϸ�" << endl;
		}
		else if (inputNum == 3)
		{
			int idx = 0;
			cout << "������ ���� �ε���: ";
			cin >> val;
			if (val == 0)
			{
				list = list->next;
			}
			else
			{
				while (idx + 1 != val)
				{
					temp3 = temp3->next;
					idx++;
				}
				temp3->next = temp3->next->next;
			}
			cout << "���� �Ϸ�" << endl;
		}
		else if (inputNum == 4)
		{
			ofstream outFile("list.txt");
			temp0 = list;
			while (temp0 != nullptr)
			{
				outFile << temp0->info;
				if (temp0->next != nullptr)
					outFile << endl;
				temp0 = temp0->next;
			}
			outFile.close();
			cout << "���� �Ϸ�" << endl;
		}
		else if (inputNum == 5)
		{
			while (list != nullptr)
				list = list->next;

			ifstream inFile("list.txt");
			while (!inFile.eof())
			{
				inFile >> val;
				if (list == nullptr)
				{
					list = new Node;
					list->info = val;
				}
				else
				{
					temp1 = list;
					while (temp1->next != nullptr)
					{
						temp1 = temp1->next;
					}
					temp1->next = new Node;
					temp1->next->info = val;
				}
			}
			cout << "�߰� �Ϸ�" << endl;
			inFile.close();
		}
	}
}
