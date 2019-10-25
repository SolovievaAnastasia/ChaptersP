#include <iostream>
using namespace std;

int num(int x) 
{
	x *= 63240;
	return(x);
}
int main()
{
	int t;
	cout << "Enter in light years: " << endl;
	cin >> t;
	cout << "In astro units  = " << num(t) << endl;
	return 0;
}
