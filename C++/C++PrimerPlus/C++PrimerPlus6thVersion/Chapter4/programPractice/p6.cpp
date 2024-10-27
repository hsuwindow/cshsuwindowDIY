#include <iostream>
#include <string>
#include <vector>
#include <array>
using namespace std;
struct CandyBar
{
    string brand;
    double weight;
    unsigned int calContained;
};
int main(void)
{
    CandyBar arr[3] = {
        {"Mocha Munch", 2.3, 350},
        {"Ste sjsj", 22.3, 3250},
        {"jla sfj", 222.3, 2350}};
    for (int i = 0; i < 3; i++)
    {

        cout << arr[i].brand << endl;
        cout << arr[i].weight << endl;
        cout << arr[i].calContained << endl;
    }
    return 0;
}
