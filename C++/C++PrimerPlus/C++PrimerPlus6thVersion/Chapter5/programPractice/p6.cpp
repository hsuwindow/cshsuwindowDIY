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
    int num[12][3];
    int sumTotal = 0;
    int sum[3] = {0};
    for (int j = 0; j < 3; j++)
        for (int i = 0; i < 12; i++)
        {
            cout << "Please enter sale number in " << month[i] << " " << j + 1 << "th year:";
            cin >> num[i][j];
            sum[j] += num[i][j];
        }
    for (int j = 0; j < 3; j++)
    {
        cout << sum[j] << endl;
        sumTotal += sum[j];
    }
    cout << sumTotal << endl;
    return 0;
}