#include <iostream>
using namespace std;

int main(void)
{
    int min, max, sum = 0;
    cout << "Please enter min integer: ";
    cin >> min;
    cout << "Please enter max integer: ";
    cin >> max;
    for (int i = min; i <= max; i++)
    {
        sum += i;
    }
    cout << sum << endl;

    return 0;
}