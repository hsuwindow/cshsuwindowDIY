#include <iostream>
using namespace std;

const int FOOT_TO_INCH = 12;
const double INCH_TO_METER = 0.0254;
const double KILO_TO_POUND = 2.2; 
int main(void)
{
	int height_foot, height_inch;
	double weight_pound;
	cout << "Please enter your height foot:" ;
	cin >> height_foot;
	cout << "Please enter your height inch:" ;
	cin >> height_inch;
	cout << "Please enter your weight pounds:" ;
	cin >> weight_pound;
	
	double height_meter = (height_foot * FOOT_TO_INCH + height_inch) * INCH_TO_METER;
	double weight_kilo = weight_pound / KILO_TO_POUND;
	double BMI = weight_kilo / (height_meter * height_meter);
	cout << BMI << endl;

	return 0;
}	
