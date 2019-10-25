#include <iostream>
using namespace std;
 
    struct candyBar
    {
        string name;
        double ves;
        int kcal;
    };
 
int main()
{
   
    candyBar *candy = new candyBar[3];
 
    cout << "Введите название 1-й коробки: ";
    getline (cin, candy[0].name);
    cout << "Введите вес 1-й коробки конфет: ";
    cin >> candy[0].ves;
    cout << "Введите количество калорий в 1-й коробке: ";
    cin >> candy[0].kcal;
    cout << endl;
	cin.ignore(256, '\n');
 
    cout << "Введите название 2-й коробки: ";
    getline (cin, candy[1].name);
    cout << "Введите вес 2-й коробки: ";
    cin >> candy[1].ves;
    cout << "Введите количество калорий в 2-й коробке: ";
    cin >> candy[1].kcal;
    cout << endl;
	cin.ignore(256, '\n');
 
    cout << "Введите название 3-й коробки: ";
    getline (cin, candy[2].name);
    cout << "Введите вес 3-й коробки: ";
    cin >> candy[2].ves;
    cout << "Введите количество калорий в 3-й коробке: ";
    cin >> candy[2].kcal;
    cout << endl;
 
    cout << "Название 1-й коробки: " << candy[0].name << endl;
    cout << "Вес 1-й коробки конфет: " << candy[0].ves<< endl;
    cout << "Колво к-рий в 1-й коробке: " << candy[0].kcal << endl;
 
    cout << "Название 2-й коробки: " << candy[1].name << endl;
    cout << "Вес 2-й коробки конфет: " << candy[1].ves << endl;
    cout << "Колво к-рий в 2-й коробке: " << candy[1].kcal<< endl;
 
    cout << "Название 3-й коробки: " << candy[2].name<< endl;
    cout << "Вес 3-й коробки конфет: " << candy[2].ves<< endl;
    cout << "Колво к-рий в 3-й коробке: " << candy[2].kcal<< endl;
 
    return 0;
}
