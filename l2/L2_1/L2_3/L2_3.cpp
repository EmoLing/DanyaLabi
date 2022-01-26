// L2_3.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <math.h>

using namespace std;
int main()
{
	double userPointX, userPointY = 0;
	
	cout << "Input X:" << endl;
	cin >> userPointX;
	
	cout << "Input Y:" << endl;
	cin >> userPointY;

	if (userPointY <= 0 && userPointX >= -1 && userPointX <= 1
		&& userPointY - pow(userPointX, 2) > -1)
		cout << "Point correct" << endl;
	else
		cout << "Point incorrect" << endl;
	//y = x^2 - 1
	//x <= -1 || x >= 1
	//y <= 0
}