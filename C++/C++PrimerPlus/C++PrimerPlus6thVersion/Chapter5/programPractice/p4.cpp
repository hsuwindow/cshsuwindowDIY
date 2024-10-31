#include <iostream>
// #include <array>
using namespace std;
int main(void)
{
    double money1 = 100, money2 = 100;
    int year = 0;
    while (money2 <= money1)
    {
        year++;
        money1 += 0.10 * 100;
        money2 *= 1.05;
    }
    cout << year << "year" << endl;
    cout << "Daphne:" << money1 << endl;
    cout << "Cleo:" << money2 << endl;
    return 0;
}