// Tadhg Montague 
// c00271105@itcarlow.ie
// 
// 

#include<iostream>
#include<cmath>

using namespace std;



double cmToInches(double t_cm);



int main()
{
	double cmIn = 0.0;
	double inch = 0.0;

	cout << "Please enter value in Centimeters, : ";
	cin >> cmIn;

	inch = cmToInches(cmIn); //Calls Converter.

	cout << "Inches = " << inch; //Displays Inches

	system("pause");
	return 0;
}

double cmToInches(double t_cm)
{
	const float cm2in = .394;

	double inch = t_cm * cm2in;
	return inch;
}