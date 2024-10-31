#include <iostream>
// #include <array>
using namespace std;
int main(void)
{
    double number;
    double sum = 0;
    cin >> number;
    while (number != 0)
    {
        sum += number;
        cout << "current sum = :" << sum << endl;
        cin >> number;
    }
    return 0;
}