// L5_1.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>

#define N 5

int GenerateChislo();
void PrintArray(int[N][N]);

using namespace std;
int main()
{
	int arrayA[N][N];

	int choose = 0;
	cout << "1 - autogenerate" << endl << "2 - user input" << endl << "0 - exit" << endl;
	cin >> choose;

	switch (choose)
	{
	case 1:
	{
		for (auto i = 0; i < N; i++)
		{
			for (auto j = 0; j < N; j++)
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
			for (auto j = 0; j < N; j++)
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

	for (int i = 0; i < N - 1; i++)
	{
		for (int j = 0; j < N - i; j++)
		{
			int el = arrayA[i][j];
			arrayA[i][j] = arrayA[N - 1 - j][N - 1 - i];
			arrayA[N - 1 - j][N - 1 - i] = el;
		}
	}

	PrintArray(arrayA);
}

int GenerateChislo()
{
	return rand() % 20 - 10;
}

void PrintArray(int arrayA[N][N])
{
	for (auto i = 0; i < N; i++)
	{
		for (auto j = 0; j < N; j++)
			cout << arrayA[i][j] << "\t";

		cout << endl;
	}

	cout << endl;
}