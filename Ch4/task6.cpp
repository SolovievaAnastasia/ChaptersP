#include <iostream>
struct CandyBar
    {
        char name [20];
        double massa;
        int kcal;
    };
int main ()
{ 
    using namespace std;
    CandyBar snack[3]={
        {"Cupcake",216,1033},
        {"Chocolate",146,625},
        {"Marshmellow", 100 , 318}};
 
    cout<<"Struct  1 "<<snack[0].name<<'\t'<<snack[0].massa<<'\t'<<snack[0].kcal<<endl;
    cout<<"Struct  2 "<<snack[1].name<<'\t'<<snack[1].massa<<'\t'<<snack[1].kcal<<endl;
    cout<<"Struct  3 "<<snack[2].name<<'\t'<<snack[2].massa<<'\t'<<snack[2].kcal<<endl;
    return 0;
  }
