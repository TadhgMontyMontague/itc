// Tadhg 'Monty' Montague
// c00271105@itcarlow.ie
// Labsheet8 
// Q6 - Card Dealer
// main + 2 functions (Suit & Face)
// estimated time	- 30min
// recorded time	- 40min (A lot of typing)

#include<iostream>
#include<string>
#include<time.h>
#include<random>


using namespace std;

string Suit(int t_num);
string Face(int t_Randy);


int main()
{
	srand(static_cast<unsigned>(time(nullptr)));

	int input = 0;
	string cardSuit = "";
	string cardFace = "";

	cardSuit = Suit(4);

	cardFace = Face(13);

	cout << cardSuit << endl;
	cout << cardFace << endl;

	system("Pause");
	return 0;
}

string Suit(int t_num)
{
	string suite = "";
	int suiteNo = 0;
	suiteNo = (std::rand() % t_num) + 1;
	if(suiteNo == 1)
	{
		suite = "CLUBS";
	}
	else if (suiteNo == 2)
	{
		suite = "DIAMONDS";
	}
	else if (suiteNo == 3)
	{
		suite = "HEARTS";
	}
	else if (suiteNo == 4)
	{
		suite = "SPADES";
	}
	return suite;
}

string Face(int t_Randy)
{
	int FaceNo = 0;
	FaceNo = (std::rand() % t_Randy) + 1;
	string answer = "";

	if (FaceNo == 1)
	{
		answer = "ACE";
	}
	else if (FaceNo == 2)
	{
		answer = "2";
	}
	else if (FaceNo == 3)
	{
		answer = "3";
	}
	else if (FaceNo == 4)
	{
		answer = "4";
	}
	else if (FaceNo == 5)
	{
		answer = "5";
	}
	else if (FaceNo == 6)
	{
		answer = "6";
	}
	else if (FaceNo == 7)
	{
		answer = "7";
	}
	else if (FaceNo == 8)
	{
		answer = "8";
	}
	else if (FaceNo == 9)
	{
		answer = "9";
	}
	else if (FaceNo == 10)
	{
		answer = "10";
	}
	else if (FaceNo == 11)
	{
		answer = "JACK";
	}
	else if (FaceNo == 12)
	{
		answer = "QUEEN";
	}
	else if (FaceNo == 13)
	{
		answer = "KING";
	}

	return answer;
}