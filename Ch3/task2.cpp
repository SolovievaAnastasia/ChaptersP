#include <iostream>
#include <math.h>
using namespace std;

int main()
{
	double x1,x2,x3, imt;
	cout << "rost v dyamx" << endl;
	cin >> x1;
	cout << "rost v futax" << endl;
	cin >> x2;
	cout << "ves v funtax"<< endl;
	cin>> x3;
	imt = (x3/2.2)/pow((x2*12+x1)*0.0254,2);
	cout<<"IMT ="<<imt<<endl;
return 0;
}
