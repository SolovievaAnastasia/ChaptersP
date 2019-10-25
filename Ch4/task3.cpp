#include <iostream>
using namespace std;
 
int main()
{
    cout << "Enter your first name: ";
    char firstName[255];
    cin.getline (firstName, sizeof(firstName));
    cout << "Enter your last name: ";
    char lastName[255];
    cin.getline (lastName, sizeof(lastName));
    cout << "In a single string: " << lastName<<", "<< firstName<<endl;
    return 0;
}
