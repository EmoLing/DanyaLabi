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
	int indexColumnPositiveElements = 0;

	for (int j = 0; j < M; j++)
	{
		bool isAllPositiveColumn = true;
		for (int i = 0; i < N; i++)
		{
			if (arrayA[i][j] <= 0)
			{
				isAllPositiveColumn = false;
			}
		}

		if (isAllPositiveColumn)
			indexColumnPositiveElements = j;
	}

	cout << "indexColumnPositiveElements: " << indexColumnPositiveElements << endl;
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