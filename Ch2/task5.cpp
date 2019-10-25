#include "stdafx.h"
#include <iostream>
using namespace std;

double temp(int t) {
	t = 1.8*t + 32;
	return(t);
}
int main()
{
	int t;
	cout << "Enter temp in Cels " << endl;
	cin >> t;
	cout << "temp in far =" << temp(t) << endl;
	return 0;
}
