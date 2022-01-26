// L3_3.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>

using namespace std;
int main()
{
	int n = 0;
	cout << "natur chislo: " << endl;
	cin >> n;
	int sum = 0;

	for (int i = 1; i <= n; i++)
	{
		int chislo = i - i * pow(n, 2) + n;
		if (chislo % 3 == 0 && chislo % 2 != 0)
			sum += chislo;
	}

	cout << "Summ: " << sum << endl;
}