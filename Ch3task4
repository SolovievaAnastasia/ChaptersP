
#include <iostream>
using namespace std;
int main()
{
const int hoursInDay = 24;
const int minutesInHour = 60;
const int secInMinute = 60;
 float second;
        cout << "enter seconds: ";
        cin >> second;
        float sec = second;
        int day = (int)(second /(hoursInDay*minutesInHour*secInMinute);
        second -= (day*hoursInDay*minutesInHour*secInMinute);
        int hour = (int)(second / (minutesInHour*secInMinute));
        second -= (hour*minutesInHour*secInMinute);
        int min = (int)(second / secInMinute);
        second -= (min*secInMinute);
        cout << sec << " seconds = " << day << " days, " << hour << " hours, " << min << " minutes, " << second << " seconds" << endl;
        return 0;
}
