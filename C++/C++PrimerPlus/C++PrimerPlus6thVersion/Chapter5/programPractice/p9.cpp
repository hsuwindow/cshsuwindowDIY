#include <iostream>
#include <string>
using namespace std;
int main(void)
{
    string s;
    int i;
    cout << "Enter words (to stop, type the word done):" << endl;
    cin >> s;
    while (s != "done")
    {
        cout << i << ": " << s << endl;
        i++;
        cin >> s;
    }
    cout << "You entered a total of " << i << " words";
    return 0;
}