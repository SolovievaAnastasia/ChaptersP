#include "stdafx.h"
#include <iostream>
using namespace std;

int main()
{
	double t1, t2, t3;
	cout << "First enter d" << endl;
	cin >> t1;
	cout << "Second enter min" << endl;
	cin >> t2;
	cout << "Third enter sec" << endl;
	cin >> t3;
	cout << "finaly "<<t1<<"degree ," << t2<< " minutes," << t3<< "seconds ="<< t1 + t2 / 60 + t3 / 3600 << " degrees" << endl;
	return 0;
}
