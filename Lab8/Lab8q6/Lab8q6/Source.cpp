// Tadhg 'Monty' Montague
// c00271105@itcarlow.ie
// Labsheet8 
// Q6 - Card Dealer
// main + 4 functions (1 for each suite)
// estimated time	- 30min
// recorded time	- 

#include<iostream>
#include<string>
#include<cmath>

using namespace std;

string Suite(int t_suiteChoice);
string Face(string t_CardSuite);

int main()
{
	int input = 0;
	string cardSuite = "";
	string cardFace = "";

	cout << "Input a number between 1- 4";
	cin >> input;

	if(input >= 1 && input <= 4)
	{cardSuite = Suite(input);

	cardFace = Face(cardSuite);

	cout << cardFace << " of " << cardSuite;
	}
	else
	{
		cout << "ERROR! Yous is a dumbass, choose from (1,2,3,4) Start Again.";
	}
	system("Pause");
	return 0;
}

string Suite(int t_suiteChoice)
{
	int num = t_suiteChoice;
	string suite = "";

	if (num == 1)
	{
		suite = "CLUBS";
	}
	else if (num == 2)
	{
		suite = "DIAMONDS";
	}
	else if (num == 3)
	{
		suite = "HEARTS";
	}
	else if (num == 4)
	{
		suite = "SPADES";
	}

	return suite;
}

string Face(string t_CardSuite)
{
	
}
