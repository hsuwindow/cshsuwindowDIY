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
    CandyBar snack = {
        "Mocha Munch",
        2.3,
        350};

    cout << snack.brand << endl;
    cout << snack.weight << endl;
    cout << snack.calContained << endl;
    return 0;
}
