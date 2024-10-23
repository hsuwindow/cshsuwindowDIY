#include <iostream>

using namespace std;
double convert(double n);
int main(void)
{
	double lightYears;
	cout << "Enter the number of light years:";
	cin >> lightYears;
	double astroYears = convert(lightYears);
	cout << lightYears << "ligth years = " << astroYears << " astronomical units" << endl;
	return 0;
}
double convert(double n)
{
	return n * 63240;
}
