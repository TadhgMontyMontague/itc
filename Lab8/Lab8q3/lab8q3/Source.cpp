// Tadhg Montague
// c00271105@itcarlow.ie
// Labsheet8 q3
// Seconds Calculator.
// estimated time	: 25min
// recorded time	: 15min

#include<iostream>
#include<cmath>

using namespace std;

int secondsCal(int t_hours, int t_minutes, int t_seconds);
int answer = 0;

int main()
{
	int hours = 0;
	int minutes = 0;
	int seconds = 0;
	int totalSeconds = 0;

	cout << "Please enter value for -Hours : ";
	cin >> hours;
	cout << endl;

	cout << "Please enter value for -Minutes : ";
	cin >> minutes;
	cout << endl;

	cout << "Please enter value for -Seconds : ";
	cin >> seconds;
	cout << endl;

	secondsCal(hours, minutes, seconds);

	cout << "Total runtime in seconds = " << answer;
	return 1;
}

int secondsCal(int t_hours, int t_minutes, int t_seconds)
{
	int hours = t_hours * 60 * 60;
	int minutes = t_minutes * 60;
	int seconds = t_seconds;

	answer = seconds + minutes + hours;
	return answer;
}