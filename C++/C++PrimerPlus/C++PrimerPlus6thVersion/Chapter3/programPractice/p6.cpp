#include <iostream>
#include <climits>
using namespace std;

int main(void)
{
    double kilometer, L;
    cout << "Please enter your kilometers: ";
    cin >> kilometer;
    cout << "Please enter your L: ";
    cin >> L;
    double portion = L / (kilometer / 100);
    cout << portion << endl;
    
    
    
    return 0;
    
}