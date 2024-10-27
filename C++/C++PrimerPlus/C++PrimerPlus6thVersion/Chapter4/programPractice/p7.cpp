#include <iostream>
#include <string>
#include <vector>
#include <array>
using namespace std;
struct Pizza
{
    string corporation;
    double diameter;
    double weight;
};
int main(void)
{
    Pizza pizza;
    cout << "Please enter pizza`s corporation name: ";
    getline(cin, pizza.corporation);
    cout << "Please enter pizza`s diameter: ";
    cin >> pizza.diameter;
    cout << "Please enter pizza`s weight: ";
    cin >> pizza.weight;

    cout << pizza.corporation << endl;
    cout << pizza.diameter << endl;
    cout << pizza.weight << endl;

    return 0;
}
