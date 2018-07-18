#include <iostream>
#include <Windows.h>

using namespace std;

int** gen_arr(int size)
{
	int cnt = 0;

	int** arr = new int*[size];
	for (int i = 0; i < size; i++)
		arr[i] = new int[size];

	return arr;
}

void printArr(int** arr, int size)
{
	cout << "I---I---I---I" << endl;
	for (int i = 0; i < size; i++)
	{
		cout << "I";
		for (int j = 0; j < size; j++)
			switch (arr[i][j])
			{
			case 10:
				cout << "   " << "I";
				break;
			case 1:
				cout << " O " << "I";
				break;
			case 2:
				cout << " X " << "I";
			}
		cout << endl << "I---I---I---I" << endl;
	}
}

bool winLose(int** arr, int size)
{
	int row = 0;
	int col = 0;

	for (int i = 0; i < size; i++)
	{
		for (int j = 0; j < size; j++)
		{
			row = row + arr[i][j];
		}
		if (row == 3 || row == 6)
			return true;
	}
		
	for (int i = 0; i < size; i++)
	{
		for (int j = 0; j < size; j++)
		{
			col = col + arr[j][i];
		}
		if (col == 3 || col == 6)
			return true;
	}
		
	if ((arr[0][0] + arr[1][1] + arr[2][2]) == 3 || (arr[0][0] + arr[1][1] + arr[2][2]) == 6)
		return true;
	else if ((arr[0][2] + arr[1][1] + arr[2][0]) == 3 || (arr[0][2] + arr[1][1] + arr[2][0]) == 6)
		return true;
}

int sumArr(int** arr, int size, int sum)
{
	for (int i = 0; i < size; i++)
		for (int j = 0; j < size; j++)
			sum = sum + arr[i][j];
	return sum;
}

int main()
{
	int** arr = gen_arr(3);
	for (int i = 0; i < 3; i++)
		for (int j = 0; j < 3; j++)
			arr[i][j] = 10;

	int x;
	int y;
	int teamO = 1;
	int teamX = 2;
	int sum = 0;

	while (true)
	{
		printArr(arr, 3);
		while (true)
		{
			cout << "O 좌표 입력 <종료 -1, -1> : ";
			cin >> x;
			cin >> y;
			if ((x < -1 || x > 2 || y < -1 || y > 2) == true)
				cout << "범위 초과" << endl;
			else if (x == -1 && y == -1)
				exit(0);
			else if (arr[x][y] != 10)
			{
				cout << "중복된 자리" << endl;
			}
			else
			{
				arr[x][y] = 1;
				printArr(arr, 3);
				break;
			}
		}
		if (winLose(arr, 3) == true)
		{
			cout << "O 승리!" << endl;
			break;
		}

		if (sumArr(arr, 3, sum) == 13)
		{
			cout << "무승부!" << endl;
			break;
		}

		while (true)
		{
			cout << "X 좌표 입력 <종료 -1, -1> : ";
			cin >> x;
			cin >> y;
			if ((x < -1 || x > 2 || y < -1 || y > 2) == true)
				cout << "범위 초과" << endl;
			else if (x == -1 && y == -1)
				exit(0);
			else if (arr[x][y] != 10)
			{
				cout << "중복된 자리" << endl;
			}
			else
			{
				arr[x][y] = 2;
				printArr(arr, 3);
				break;
			}
		}
		if (winLose(arr, 3) == true)
		{
			cout << "X 승리!" << endl;
			break;
		}
		system("cls");
	}
}