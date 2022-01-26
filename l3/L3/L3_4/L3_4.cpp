// L3_4.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>

using namespace std;
int main()
{
	int n = 0;
	cout << "Input N: " << endl;
	cin >> n;
	int mainSum = 0;
	int newN = 0;

	for (int i = 1; i < n; i++)
	{
		int sum = 0;
		for (int j = n; j > 0; j--)
		{
			if (i % j == 0)
				sum += j;
		}

		if (mainSum < sum)
		{
			mainSum = sum;
			newN = i;
		}
	}

	cout << "New n: " << newN << endl;
}