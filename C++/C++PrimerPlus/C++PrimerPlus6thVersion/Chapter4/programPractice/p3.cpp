#include <iostream>
#include <cstring>
#include <vector>
#include <array>
using namespace std;
const int size = 20;
int main(void)
{
    char firstName[size];
    char secondName[size];
    cout << "Enter your namEnter your first name:";
    cin.getline(firstName, size);
    cout << "Enter your last name:";
    cin.getline(secondName, size);

    char fullName[size * 2 + 2];
    strcpy(fullName, secondName);
    strcat(fullName, ", ");
    strcat(fullName, firstName);
    cout << "Here is the information in a single string:" << fullName << endl;
    return 0;
}
