#include <iostream>
using namespace std;

const int FOOT_TO_INCH = 12;

int main(void)
{
	int height ;
	cout << "Please enter your height in inches:" ;
	cin >> height;
	cout << height / FOOT_TO_INCH << endl;
	cout << height % FOOT_TO_INCH << endl;
	return 0;
}	
