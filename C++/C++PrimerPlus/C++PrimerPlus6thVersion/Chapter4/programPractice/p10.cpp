#include <iostream>
#include <string>
#include <vector>
#include <array>
using namespace std;

int main(void)
{
    array<double, 3> arr;
    double sum = 0, ave;
    for (int i = 0; i < 3; i++)
    {
        cout << "Please enter your time in 40meters run:";
        cin >> arr[i];
        sum += arr[i];
    }
    ave = sum / 3;
    cout << "3 times" << endl;
    cout << "average is " << ave << endl;

    return 0;
}
