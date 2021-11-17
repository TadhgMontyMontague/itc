// Name		: Tadhg 'Monty' Montague
// Login	: c00271105@itcarlow.ie
// date		: 15/11/2021
// -------
// Labsheet 8
// Question 1
// Month  from numerals. 1-12.
// -------
// estimated time	: 30min
// recorded time	: 
// 

#include<iostream>
#include<string>

using namespace std;

int main()
{
	int InputNumber = 0;
	string MonthName = "";

	cout << "Number to Month" << endl;
	cout << "Please enter a number between '1 - 12'  : ";
	cin >> InputNumber;
	
	if (InputNumber >= 1 && InputNumber <= 12)
	{
		switch(InputNumber)
		{
		case 1:
			MonthName = "January";
			break;

		case 2:
			MonthName = "February";
			break;

		case 3:
			MonthName = "March";
			break;

		case 4:
			MonthName = "April";
			break;

		case 5:
			MonthName = "May";
			break;

		case 6: 
			MonthName = "June";
			break;

		case 7:
			MonthName = "July";
			break;

		case 8:
			MonthName = "August";
			break;

		case 9:
			MonthName = "September";
			break;

		case 10:
			MonthName = "October";
			break;

		case 11:
			MonthName = "November";
			break;

		case 12:
			MonthName = "December";
			break;

		}

		cout << "Month from number is, " << MonthName << ".";

	}

	else
	{
		cout << "Enter a correct number silly...";
	}

	return 5;
}