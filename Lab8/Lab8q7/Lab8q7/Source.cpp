// Tadhg Montague
// c00271105@itcarlow.ie
// Labsheet 8 
// Programming
// Question 7 - Cinema Ticket.
// 

#include<iostream>
#include<string>

using namespace std;
float calculatePrice(int t_age);


int main()
{
	int age = 0;
	float price = 0;
	int gotAge = 0;
	cout << "Please input age : ";
	cin >> age;
	if (age < 1)
	{
		cout << "ERROR! INVALID AGE!" << endl;
	}
	else
	{
		price = calculatePrice(age);
	}
	cout << "€" << price << endl;

	return 0;
}


float calculatePrice(int t_age)
{
	float StdPrice = 6;
	float answer = 0;
	int age= t_age;
	if (age <= 1 && age < 5)
	{
		answer = 0;
	}
	else if (age >= 5 && age <= 12)
	{
		answer = StdPrice / 2;
	}
	else if (age >= 13 && age <= 54)
	{
		answer = StdPrice;
	}
	else if (age <= 55)
	{
		answer = 0;
	}

	return answer;
}
