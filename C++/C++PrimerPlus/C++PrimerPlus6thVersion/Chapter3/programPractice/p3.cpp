#include <iostream>
#include <climits>
using namespace std;

int main(void)
{
    int degree, minute, second;
    const double DEGREES_TO_MINUTES = 60;
    const double MINUTES_TO_SECONDS = 60;
    cout << "enter the degrees:";
    cin >> degree;
    cout << "enter the minutes:";
    cin >> minute;
    cout << "enter the seconds:";
    cin >> second;
    double degree2 = degree + minute / DEGREES_TO_MINUTES + second / MINUTES_TO_SECONDS / DEGREES_TO_MINUTES;
    cout << degree2 << endl;
    return 0;
}