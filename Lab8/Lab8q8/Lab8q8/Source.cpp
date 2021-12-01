// Tadhg Montague
// c00271105@itcarlow.ie
// Programming
// Labsheet 8 - q8
// Area calculator.
// Estimated Time	- 20min
// Recorded Time	- 25min

#include<iostream>
#include<cmath>

using namespace std;

double calAreaRectangle(double t_lengthX, double t_lengthY);
double calPerimeterRect(double t_lengthX, double t_lengthY);

int main()
{
	double inpX = 0.0;
	double inpY = 0.0;
	double area = 0.0;
	double perimeter = 0.0;

	cout << "please enter value 'X' : ";
	cin >> inpX;
	cout << endl;

	cout << "please enter value 'Y' : ";
	cin >> inpY;
	cout << endl;

	area = calAreaRectangle(inpX, inpY);
	perimeter = calPerimeterRect(inpX, inpY);

	cout << "Area = " << area << endl;
	cout << "Perimeter = " << perimeter << endl;
	system("Pause");
	return 0;
}

double calAreaRectangle(double t_lengthX, double t_lengthY)
{
	double answer = 0.0;
	double X = t_lengthX;
	double Y = t_lengthY;

	answer = X * Y;
	return answer;
}

double calPerimeterRect(double t_lengthX, double t_lengthY)
{
	double answer = 0.0;
	double X = t_lengthX;
	double Y = t_lengthY;

	double X2 = X + X;
	double Y2 = Y + Y;
	
	answer = X2 + Y2;
	return answer;
}
