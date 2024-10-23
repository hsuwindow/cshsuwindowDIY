#include <iostream>

using namespace std;
double longtoma(double n);
int main(void)
{
	double n;
	cout << "Please input : " << endl;
	cin >> n;
	double ma = longtoma(n);
	cout << ma << endl;
	return 0;
}
double longtoma(double n)
{
	return 220 * n;
}
