#include <iostream>
using namespace std;
int main(void)
{
    int n;
    cout << "Enter number of rows: ";
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (j >= 4 - i)
            {
                cout << "*";
            }
            else
                cout << ".";
        }
        cout << endl;
    }
    return 0;
}