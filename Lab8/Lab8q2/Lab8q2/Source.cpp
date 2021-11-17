// Tadhg Montague 
// c00271105@itcarlow.ie
// 
// 

#include<iostream>
#include<cmath>

using namespace std;



double CmToInches(double t_cm);



int main()
{
	double CmIn = 0.0;
	double Inch = 0.0;

	cout << "Please enter value in Centimeters, : ";
	cin >> CmIn;

	Inch = CmToInches(CmIn); //Calls Converter.

	cout << "Inches = " << Inch; //Displays Inches

	system("pause");
	return 0;
}

double CmToInches(double t_cm)
{
	const float cm2in = .394;

	double Inch = t_cm * cm2in;
	return Inch;
}