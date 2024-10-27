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
    CandyBar *p = new CandyBar[3];

    *p = {"Mocha Munch", 2.3, 350};
    *(p + 1) = {"Ste sjsj", 22.3, 3250};
    *(p + 2) = {"jla sfj", 222.3, 2350};
    for (int i = 0; i < 3; i++)
    {

        cout << (p + i)->brand << endl;
        cout << (p + i)->weight << endl;
        cout << (p + i)->calContained << endl;
    }
    delete[] p; // 如果你在循环体里面赋值p++;的话,这里delete的p就要改位置到new的首地址
    return 0;
}
