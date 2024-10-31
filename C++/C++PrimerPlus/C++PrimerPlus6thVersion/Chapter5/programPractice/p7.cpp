#include <iostream>
// #include <array>
using namespace std;
struct car
{
    string producer;
    int produceAge;
};
int main(void)
{
    int n;
    cout << "How many cars do you wish to catalog? ";
    cin >> n;
    cin.get(); // 清除输入整数之后留在输入队列里面的 换行符
    car *p = new car[n];
    for (int i = 0; i < n; i++)
    {
        cout << "Car #" << i + 1 << ":" << endl;
        cout << "Please enter the make: ";
        getline(cin, (p + i)->producer); // 这里应该采用读入一行string对象,getline()自动抛弃一行结尾的换行符
        cout << "Please enter the year made: ";
        cin >> (p + i)->produceAge;
        cin.get(); // 清除输入整数之后留在输入队列里面的 换行符
    }

    cout << "Here is your collection:" << endl;
    for (int i = 0; i < n; i++)
    {
        cout << (p + i)->produceAge << " " << (p + i)->producer << endl;
    }
}