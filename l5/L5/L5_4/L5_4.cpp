// L5_1.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>

#define N 5
#define M 5

int GenerateChislo();
void PrintArray(int[N][M]);

using namespace std;
int main()
{
	int arrayA[N][M];

	int choose = 0;
	cout << "1 - autogenerate" << endl << "2 - user input" << endl << "0 - exit" << endl;
	cin >> choose;

	switch (choose)
	{
	case 1:
	{
		for (auto i = 0; i < N; i++)
		{
			for (auto j = 0; j < M; j++)
			{
				arrayA[i][j] = GenerateChislo();
			}
		}

		break;
	}
	case 2:
	{
		for (auto i = 0; i < N; i++)
		{
			for (auto j = 0; j < M; j++)
			{
				cout << "Input elem " << i << " " << j << endl;
				cin >> arrayA[i][j];
			}
		}

		break;
	}

	default:
		return 0;
	}

	PrintArray(arrayA);
	int maxElem = INT_MIN;
	int maxElemI = 0;
	int maxElemJ = 0;
	int count = 0;

	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < M; j++)
		{
			if (maxElem <= arrayA[i][j])
			{
				count++;
				maxElem = arrayA[i][j];
				maxElemI = i;
				maxElemJ = j;
			}
		}
	}

	cout << "Max elem: " << maxElem << endl;
	cout << "Max elem i: " << maxElemJ << endl;
	cout << "Max elem j: " << maxElemJ << endl;
	cout << "Max elem count: " << count << endl;
}

int GenerateChislo()
{
	return rand() % 20 - 10;
}

void PrintArray(int arrayA[N][M])
{
	for (auto i = 0; i < N; i++)
	{
		for (auto j = 0; j < M; j++)
			cout << arrayA[i][j] << " ";

		cout << endl;
	}

	cout << endl;
}