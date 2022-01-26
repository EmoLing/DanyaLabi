// L4_3.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <math.h>

#define N 10

int GenerateChislo();
void PrintArray(int*);
int Sort(const void*, const void*);

using namespace std;
int main()
{
	int arrayA[N];

	int choose = 0;
	cout << "1 - autogenerate" << endl << "2 - user input" << endl << "0 - exit" << endl;
	cin >> choose;

	switch (choose)
	{
	case 1:
	{
		for (auto i = 0; i < N; i++)
			arrayA[i] = GenerateChislo();

		break;
	}
	case 2:
	{
		for (auto i = 0; i < N; i++)
		{
			cout << "Input elem " << i << endl;
			cin >> arrayA[i];
		}

		break;
	}

	default:
		return 0;
	}

	PrintArray(arrayA);

	for (int i = 0; i < N; i++)
	{
		if (arrayA[i] < 0)
			arrayA[i] = pow(arrayA[i], 2);
	}

	PrintArray(arrayA);
	for (int i = 1; i < N; i++)
		for (int j = i; j > 0 && arrayA[j - 1] > arrayA[j]; j--)
			swap(arrayA[j - 1], arrayA[j]);

	PrintArray(arrayA);
}

int GenerateChislo()
{
	return rand() % 20 - 10;
}

void PrintArray(int* arrayA)
{
	for (auto i = 0; i < N; i++)
		cout << arrayA[i] << " ";

	cout << endl;
}