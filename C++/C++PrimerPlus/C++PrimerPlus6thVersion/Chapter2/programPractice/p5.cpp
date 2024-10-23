#include <iostream>

using namespace std;
double transfer(double n);
int main(void)
{
	double n;
	cout << "Please enter a Celsius value: " << endl;
	cin >> n;
	double Fahrenheit = transfer(n);
	cout << n << " degrees Celsius is " << Fahrenheit << "degrees Fahrenheit" << endl;
	return 0;
}
double transfer(double n)
{
	return 1.8 * n + 32.0;
}
