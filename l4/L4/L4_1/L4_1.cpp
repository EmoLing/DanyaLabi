// L4_1.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>

using namespace std;
int GenerateChislo();

int main()
{
    const int n = 8;
    int arrayA[n];
    
    int choose = 0;
    cout << "1 - autogenerate" << endl << "2 - user input" << endl << "0 - exit" << endl;
    cin >> choose;

    switch (choose)
    {
    case 1:
    {
        for (auto i = 0; i < n; i++)
            arrayA[i] = GenerateChislo();

        break;
    }
    case 2:
    {
        for (auto i = 0; i < n; i++)
        {
            cout << "Input elem " << i << endl;
            cin >> arrayA[i];
        }
            
        break;
    }

    default:
        return 0;
    }

    cout << "Array:" << endl;
    for (auto i = 0; i < n; i++)
        cout << " " << arrayA[i];

    cout << endl;

    for (auto i = 0; i < n; i++)
    {
        if (arrayA[i] >= 7)
        {
            cout << "Utverzhdenie ne verno!";
            return 0;
        }
    }
    cout << "Utverzhdenie verno!!!";
}

int GenerateChislo()
{
    return rand() % 20 - 10;
}