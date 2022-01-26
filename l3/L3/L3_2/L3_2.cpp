// L3_2.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>

using namespace std;
int main()
{
	int n = 0;
	double a = 0;

	cout << "Input a: " << endl;
	cin >> a;

	cout << "Input n: " << endl;
	cin >> n;

	double sum = 1 / a;
	for (int i = 1; i <= n ; i++)
	{
		sum += 1 / (a * (a + i));
		cout << "Sum: " << sum << endl;
	}

}