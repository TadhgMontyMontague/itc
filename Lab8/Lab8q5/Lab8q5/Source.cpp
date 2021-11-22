// Tadhg Montague
// c00271105@itcarlow.ie
// Lab8 q5
// Exact divisible or nah.
// estimated time	: 30min
// recorded time	: 7min
// ----
// Known Bugs - None.

#include<iostream>
#include<cmath>

using namespace std;

string isDivisible(int t_num1, int t_num2);  // Will check if Num1 can be divided whole by Num2

int main()
{
	int firstNum = 0;
	int secondNum = 0;

	cout << "NOTE : Whole numbers only!" << endl;
	cout << "Please enter first number, : ";
	cin >> firstNum;
	cout << endl;

	cout << "Please enter second number, : ";
	cin >> secondNum;
	cout << endl;

	string answer = isDivisible(firstNum, secondNum);

	cout << answer;
	system("Pause");
	return 1;
}

string isDivisible(int t_num1, int t_num2) // Will check if Num1 can be divided whole by Num2
{
	int num1 = t_num1;
	int num2 = t_num2;
	string Answer = "";

	if (num1 % num2 == 0)
	{
		Answer = "It is Divisible. ";
	}
	else
	{
		Answer = "No, it is not divisible.";
	}
	return Answer;
}