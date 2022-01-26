// L2_1.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>

using namespace std;
int main()
{
    int ageMale, ageFemale = 0;

    cout << "1 - set male age and get female age\r\n2 - set female age and get male age\r\n0 - exit" << endl;
    int choose;
    cin >> choose;

    switch (choose)
    {
    case 1:
    {
        cout << "Input age for Male\r\n";
        cin >> ageMale;

        ageFemale = ageMale / 2 + 7;
        cout << "Correct age Female: " << ageFemale;
        break;
    }
    case 2:
    {
        cout << "Input age for Female\r\n";
        cin >> ageFemale;

        ageMale = ageFemale * 2 + 14;
        cout << "Correct age Male: " << ageMale;

        break;
    }
    case 0:
        return 0;
    default:
        break;
    }
}