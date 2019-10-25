#include <iostream>
struct CandyBar
{
	char name[20];
	double massa;
	int kcal;
};
int main()
{
	using namespace std;
	CandyBar snack = { "Mocha Munch",2.3,350 };
	cout << "The name " << snack.name << '\t'<< " The weight "<< snack.massa<<'\t' << " The kcal " << snack.kcal << endl;
	return 0;
}
