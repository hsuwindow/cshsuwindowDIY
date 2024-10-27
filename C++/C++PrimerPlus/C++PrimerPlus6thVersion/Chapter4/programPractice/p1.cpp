#include <iostream>
#include <string>
#include <vector>
#include <array>
using namespace std;
const int size = 80;
int main(void)
{
    char name1[size];
    char name2[size];
    char c;
    int age;
    cout << "What is your first name? ";
    cin.getline(name1, size);
    cout << "What is your last name? ";
    cin.getline(name2, size);
    cout << "What letter grade do you deserve?";
    cin >> c;
    c = c + 1;
    cout << "What is your age? ";
    cin >> age;
    cout << "Name:" << name2 << "," << name1 << endl;
    cout << "Grade:" << c << endl;
    cout << "Age:" << age << endl;
    return 0;
}
