#include <iostream>
using namespace std;

int main()
{
	char name[20];
	char sur[20];
	cout << "Enter your first name " << endl;
	cin.getline(name, 20);
	cout << "Enter your surname " << endl;
	cin.getline(sur, 20);
	cout << "In a sigle string: " << sur << " ,  " << name << endl;
	return 0;
}
