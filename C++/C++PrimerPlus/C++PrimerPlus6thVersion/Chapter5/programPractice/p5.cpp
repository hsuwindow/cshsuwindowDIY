#include <iostream>
// #include <array>
using namespace std;
int main(void)
{
    const string month[12] = {
        "January",
        "February",
        "March",
        "April",
        "May",
        "June",
        "July",
        "August",
        "September",
        "October",
        "November",
        "December"};
    int num[12];
    int sum = 0;
    for (int i = 0; i < 12; i++)
    {
        cout << "Please enter sale number in " << month[i] << ":";
        cin >> num[i];
        sum += num[i];
    }
    cout << sum << endl;
    return 0;
}