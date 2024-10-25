#include <iostream>
#include <climits>
using namespace std;

int main(void)
{
    const int DAY_TO_HOUR = 24;
    const int HOUR_TO_MINUTE = 60;
    const int MINUTE_TO_SECOND = 60;
    long long secondtotal;
    cout << "Enter the number of seconds : ";
    cin >> secondtotal;
    long long secondinitial = secondtotal;
    long second = secondtotal % MINUTE_TO_SECOND;
    secondtotal = secondtotal / MINUTE_TO_SECOND;
    long minute = secondtotal % HOUR_TO_MINUTE;
    secondtotal = secondtotal / HOUR_TO_MINUTE;
    long hour = secondtotal % DAY_TO_HOUR;
    secondtotal = secondtotal / DAY_TO_HOUR;
    long day = secondtotal;
    cout << secondinitial << " seconds = " << day << " days, " << hour << " hours, " << minute << " minutes, " << second << " seconds" << endl;
    return 0;
}