#include <iostream>
using namespace std;

int main()
{
const double c1 = 1.609;
const double c2 = 0.26417;
	double k1, k2;
	cout << "First enter kol-vo litr" << endl;
	cin >> k1;
	cout << "Second enter kol km" << endl;
	cin >> k2;
	cout << "Finaly " <<(k2/c1)/(k1*c2) << " mile/gallon" << endl;
	return 0;
}
