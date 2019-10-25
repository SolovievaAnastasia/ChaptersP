#include <iostream>
using namespace std;
int main()
{
    double spr[4];
    for (int i = 1; i < 4; i++)
    {
        cout << "Введите " << i <<"-й результат забега: ";
        cin >> spr[i];
    }
    spr[0] = (spr[1] + spr[2] + spr[3]) / 3.0  ;
    for (int j = 1; j < 4; j++)
    	cout << j <<"-й результат забега: " << spr[j] << endl;
    cout << "Средний результат: " << spr[0] << endl;
    return 0;
}
