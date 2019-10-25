#include <iostream>
using namespace std;
struct Pizza
{
    double diameter, ves;
    string name;
};
int main()
{
   
    Pizza *first = new Pizza;
    cout << "Введите диаметр пиццы: ";
    cin >> first->diameter; 
    cin.get();
 
    cout << "Введите название производителя: ";
    getline (cin, first->name);
    cout << "Введите вес пиццы: ";
    cin >> first->ves;
    cout << endl;
   
    cout << "Название компании: " << first->name << endl;
    cout << "Диаметр пиццы: " << first->diameter << endl;
    cout << "Вес пиццы: " << first->ves << endl;
    return 0;
}
