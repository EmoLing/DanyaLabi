// L4_2.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <math.h>

#define N 10

int GenerateChislo();
int GetCountNegativeNumbers(int*);
int GetSumAbsElements(int*);
void PrintArray(int*);

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
	cout << "Count Negative Numbers: " << GetCountNegativeNumbers(arrayA) << endl;
	cout << "Sum Abs Elements: " << GetSumAbsElements(arrayA) << endl;
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

int GetCountNegativeNumbers(int* arrayA)
{
	int countNegativeNumbers = 0;
	for (int i = 0; i < N; i++)
	{
		if (arrayA[i] < 0)
			countNegativeNumbers++;
	}

	return countNegativeNumbers;
}

int GetSumAbsElements(int* arrayA)
{
	double minElem = 10;
	int indexElem = 0;
	for (auto i = 0; i < N; i++)
	{
		auto absElem = abs(arrayA[i]);
		if (absElem < minElem)
		{
			minElem = absElem;
			indexElem = i;
		}
	}

	if (indexElem + 1 > N)
		return 0;

	double sum = 0;
	for (auto i = indexElem + 1; i < N; i++)
	{
		sum += abs(arrayA[i]);
	}

	return sum;
}