// L3_5.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <math.h>

using namespace std;
int main()
{
	double curr = sqrt(2.0) / 2; //Переменная для сравнения
	double mul = 1;   //Произведение
	double e = 1.0e-6;  //Точность
	int count = 1; //Счетчик
	for (; fabs(mul - curr) > e; count++) {
		mul *= (1. + (count % 2 ? (-1) : 1) / (2. * count + 1));
	}

	cout << count << endl;
	return 0;
}