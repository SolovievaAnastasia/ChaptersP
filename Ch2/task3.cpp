#include "stdafx.h"
#include <iostream>
using namespace std;

void mice(int k) {
	cout << "Three blind mice" << endl;
}

void run(int k) {
	cout << "See how they run" << endl;
}

int main()
{
	int x;
	cin >> x;
	mice(x);
	mice(x);
	run(x);
	run(x);
	return 0;
}
