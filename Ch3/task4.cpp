#include <iostream>
using namespace std;
int main()
{
const int hoursInDay = 24;
const int minutesInHour = 60;
const int secInMinute = 60;
 long double second;
 cout << "Enter seconds: "<< endl;
 cin >> second;
 float sec = second;
 int day = second /(hoursInDay*minutesInHour*secInMinute);
 second -= day*hoursInDay*minutesInHour*secInMinute;
 int hour = second / (minutesInHour*secInMinute);
 second -= hour*minutesInHour*secInMinute;
 int min = second / secInMinute;
 second -= min*secInMinute;
 cout << sec << " seconds = " << day << " days, " << hour << " hours, " << min << " minutes, " << second << " seconds" << endl;
 return 0;
}
