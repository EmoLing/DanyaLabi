// L2_2.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>

using namespace std;
int main()
{
	int rationHay = 5;
	int rationSilage = 5;
	int rationFeel = 5;

	int herd = 10;
	
	int storageHay = 100;
	int storageSilage = 100;
	int storageFeel = 100;

	int days = 0;

	cout << "cow's ration Hay: " << endl;
	cin >> rationHay;

	cout << "cow's ration Silage: " << endl;
	cin >> rationSilage;

	cout << "cow's ration Feel: " << endl;
	cin >> rationFeel;

	cout << "cow's herd: " << endl;
	cin >> herd;

	cout << "Hay in storage (centner): " << endl;
	cin >> storageHay;

	cout << "Silage in storage (tons): " << endl;
	cin >> storageSilage;

	cout << "Feel in storage (bag of 50 kg): " << endl;
	cin >> storageFeel;

	rationHay *= herd;
	rationSilage *= herd;
	rationFeel *= herd;

	cout << "Herd's ration hay: " << rationHay << endl;
	cout << "Herd's ration silage: " << rationSilage << endl;
	cout << "Herd's ration feel: " << rationFeel << endl;

	storageHay *= 100;
	storageSilage *= 1000;
	storageFeel *= 50;

	cout << "Hay in storage (kg): " << storageHay << endl;
	cout << "Silage in storage (kg): " << storageSilage << endl;
	cout << "Feel in storage (kg): " << storageFeel << endl;

	while (true)
	{
		storageHay -= rationHay;
		if (storageHay <= 0)
		{
			cout << "Hay is over" << endl;
			cout << "Full days: " << days << endl;

			return 0;
		}
		
		storageSilage -= rationSilage;
		if (storageSilage <= 0)
		{
			cout << "Silage is over" << endl;
			cout << "Full days: " << days << endl;

			return 0;
		}
		
		storageFeel -= rationFeel;
		if (storageFeel <= 0)
		{
			cout << "Feel is over" << endl;
			cout << "Full days: " << days << endl;

			return 0;
		}

		days++;
	}
}