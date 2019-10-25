#include <iostream>
using namespace std;
int main()
{
const int hoursInDay = 24;
const int minutesInHour = 60;
const int secInMinute = 60;
 float second;
 cout << "Enter seconds: "<< endl;
 cin >> second;
 float sec = second;
 int day = abs(second /(hoursInDay*minutesInHour*secInMinute));
 second -= day*hoursInDay*minutesInHour*secInMinute;
 int hour = abs(second / (minutesInHour*secInMinute));
 second -= hour*minutesInHour*secInMinute;
 int min = abs(second / secInMinute);
 second -= min*secInMinute;
 cout << sec << " seconds = " << day << " days, " << hour << " hours, " << min << " minutes, " << second << " seconds" << endl;
 return 0;
}
