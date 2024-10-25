#include <iostream>
#include <climits>
using namespace std;

int main(void)
{
    long long earthP;
    long long USP;
    cout << "Enter the world's population:";
    cin >> earthP;
    cout << "Enter the population of the US:";
    cin >> USP;
    double portion = (double)USP / (double)earthP;
    cout << "The population of the US is " << portion * 100 << "\% of the world population." << endl;
    return 0;
}