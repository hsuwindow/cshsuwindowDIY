#include <iostream>
#include <string>
#include <vector>
#include <array>
using namespace std;
int main(void)
{
    string firstName;
    string secondName;
    cout << "Enter your namEnter your first name:";
    getline(cin, firstName);
    cout << "Enter your last name:";
    getline(cin, secondName);

    string fullName = secondName + ", " + firstName;
    cout << "Here is the information in a single string:" << fullName << endl;
    return 0;
}
