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
    Pizza *p = new Pizza;

    cout << "Please enter pizza`s diameter: ";
    cin >> p->diameter;
    cin.get(); // 为了把换行符给从输入序列里面拿出去
    // 不然下面的getline()就读入空字符串了.
    cout << "Please enter pizza`s corporation name: ";
    getline(cin, p->corporation);
    cout << "Please enter pizza`s weight: ";
    cin >> p->weight;

    cout << p->corporation << endl;
    cout << p->diameter << endl;
    cout << p->weight << endl;

    return 0;
}
