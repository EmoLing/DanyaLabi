// L6.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <string>
#include <list>

using namespace std;

struct AgriculturalEnterprise AddEnterprise();
void PrintList(list<AgriculturalEnterprise> &);
void RemoveEnterprise(list<AgriculturalEnterprise> &);
char GetProperty(enum TypeProperty typeProperty);
enum TypeProperty GetTypeProperty(char);

struct AgriculturalEnterprise
{
	int Id;
	string Name;
	TypeProperty TypeProperty;
	double Area;
	int CountWorkers;
};

enum TypeProperty
{
	State = 0,
	Private = 1,
	Cooperative = 2
};

int main()
{
	setlocale(LC_ALL, "Russian");
	list<AgriculturalEnterprise> enterprises;

	while (true)
	{

		cout << "Выберите пункт меню." << endl;
		cout << "1 - Добавить предприятие | 2 - Отобразить список предприятий | " << endl
			<< "3 - удалить предприятие | 0 - выход" << endl;

		int choose = 0;
		cin >> choose;

		switch (choose)
		{
		case 1:
		{
			AgriculturalEnterprise agriculturalEnterprise = AddEnterprise();

			if (enterprises.empty())
			{
				agriculturalEnterprise.Id = 0;
			}
			else
			{
				AgriculturalEnterprise lastElem = enterprises.back();
				agriculturalEnterprise.Id = lastElem.Id + 1;
			}
			
			enterprises.push_back(agriculturalEnterprise);

			break;
		}
		case 2:
		{
			PrintList(enterprises);

			break;
		}
		case 3:
		{
			RemoveEnterprise(enterprises);

			break;
		}

		case 0:
			return 0;
		default:
			break;
		}
	}
}

AgriculturalEnterprise AddEnterprise()
{
	AgriculturalEnterprise agriculturalEnterprise;

	cout << "Введите название предприятия" << endl;
	cin >> agriculturalEnterprise.Name;

	cout << "Введите площадь земли (га)" << endl;
	cin >> agriculturalEnterprise.Area;

	cout << "Введите количество работников" << endl;
	cin >> agriculturalEnterprise.CountWorkers;

	char typeProperty;
	cout << "Введите тип предприятия " << endl
		<< "Д - гос., Ч - част., К - кооп." << endl;
	cin >> typeProperty;

	agriculturalEnterprise.TypeProperty = GetTypeProperty(typeProperty);

	return agriculturalEnterprise;
}

void PrintList(list<AgriculturalEnterprise> &enterprises)
{
	cout << "\t\tСельскохозяйственные предприятия" << endl;
	cout << "|\tID\t|\tНазвание\t|\tВид собственности\t|\tПлощадь земли (га)\t|"
		<< "\tКоличество рабочих\t|" << endl;
	for (AgriculturalEnterprise enterprise : enterprises)
	{
		cout << "|\t" << enterprise.Id <<"\t" << "|\t" << enterprise.Name
			<< "\t|\t" << GetProperty(enterprise.TypeProperty)
			<< "\t|\t" << enterprise.Area << "\t|" << "\t" << enterprise.CountWorkers << "\t|"
			<< endl;
	}
}

void RemoveEnterprise(list<AgriculturalEnterprise> &enterprises)
{
	int id = 0;
	cout << "Введите id предприятия" << endl;
	cin >> id;

	enterprises.remove_if([id](AgriculturalEnterprise agriculturalEnterprise)
		{
			return agriculturalEnterprise.Id == id;
		});
}

enum TypeProperty GetTypeProperty(char typeProperty)
{
	switch (typeProperty)
	{
	case 'Д': return State;
	case 'Ч': return Private;
	case 'К': return Cooperative;
	default:
		return State;
	}
}

char GetProperty(enum TypeProperty typeProperty)
{
	switch (typeProperty)
	{
	case State: return 'Д';
	case Private: return 'Ч';
	case Cooperative: return 'К';
	default:
		return 'Д';
	}
}
