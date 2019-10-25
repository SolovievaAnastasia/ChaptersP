#include <iostream>
struct Pizza
    {
        char name [20];
        float ves,diam;
    };
int main ()
{   using namespace std;
    Pizza Pie;
    cout<<"Enter Name:"<<endl;
    cin.getline (Pie.name,20);
    cout<<"Enter diametr:"<<endl;
    cin>>Pie.diam;
    cout<<"Enter ves:"<<endl;
    cin>>Pie.ves;
    cout<<"Pizza: "<<Pie.name<<endl<<"Diametr: "<<Pie.diam<<endl<<"Ves: "<<Pie.ves<<endl;
    cin.get();
    return 0;
  }
