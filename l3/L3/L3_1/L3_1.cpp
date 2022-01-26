// L3_1.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>

using namespace std;
int main()
{
	double fx, xEnd, xBegin, dx, a, b, c = 0;
	cout << "Input x Begin" << endl;
	cin >> xBegin;

	cout << "Input x End" << endl;
	cin >> xEnd;

	cout << "Input dx" << endl;
	cin >> dx;

	cout << "Input a" << endl;
	cin >> a;

	cout << "Input b" << endl;
	cin >> b;

	cout << "Input c" << endl;
	cin >> c;

	for (xBegin; xBegin <= xEnd; xBegin += dx)
	{
		if (c < 0 && a > 0)
			fx = -a * pow(xBegin, 2) - b;
		else if (c > 0 && a == 0)
			fx = (2 * xBegin - a) / c * xBegin;
		else
			fx = -xBegin / b;

		cout << "fx = " << fx << endl;
	}
}
