#include <iostream>
#include <cstring>
using namespace std;
const int ArSize = 20;
int main(void)
{
    char arr[ArSize];
    int i;
    cout << "Enter words (to stop, type the word done):" << endl;
    cin >> arr;
    while (strcmp(arr, "done") != 0)
    {
        cout << i << ": " << arr << endl;
        i++;
        cin >> arr;
    }
    cout << "You entered a total of " << i << " words";
    return 0;
}