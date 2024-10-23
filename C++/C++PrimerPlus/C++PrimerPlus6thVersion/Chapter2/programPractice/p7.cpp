#include <iostream>
void appear(int h, int m);
using namespace std;
int main(void)
{
	cout << "Enter the number of hours: ";
	int h;
	cin >> h;
	cout << "Enter the number of minutes: ";
	int m;
	cin >> m;
	appear(h, m);
	return 0;
}
void appear(int h, int m)
{
	cout << "Time: " << h << ":" << m << endl;
}
