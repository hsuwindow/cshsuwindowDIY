#include <iostream>
#include <string>
#include <vector>
#include <array>
using namespace std;
int main(void)
{
    string name;
    string dessert;
    cout << "Enter your name:" << endl;
    getline(cin, name);
    cout << "Enter your favorite dessert:" << endl;
    getline(cin, dessert);
    cout << "I have some delicious" << dessert << "for you" << name << endl;
    return 0;
}
