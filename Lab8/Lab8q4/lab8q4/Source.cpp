// Tadhg Montague
// c00271105@itcarlow.ie
// Labs8 q4
// Exam Grades tool.
// estimated time	: 25min
// recorded time	: 20min

#include<iostream>
#include<cmath>

using namespace std;

string getExamGrade(float t_mark);
string grade0 = "";

int main()
{
	float examMark = 0.0;
	
	cout << "Please enter % from exam : ";
	cin >> examMark;
	cout << "%" << endl;

	getExamGrade(examMark);

	cout << "Calulated grade is : " << grade0;

	return 1;
}

string getExamGrade(float t_mark)
{
	float examPerc = t_mark;

	if (examPerc > 100.0 || examPerc < 0)
	{
		grade0 = "Error! Wrong percentage entered.";
		return grade0;
	}

	else if (examPerc >= 0 && examPerc < 40)
	{
		grade0 = "Fail";
		return grade0;
	}

	else if (examPerc >= 40 && examPerc < 55)
	{
		grade0 = "Pass";
		return grade0;
	}

	else if (examPerc >= 55 && examPerc < 70)
	{
		grade0 = "Merit";
		return grade0;
	}

	else if (examPerc >= 70 && examPerc <= 100)
	{
		grade0 = "Distinction";
		return grade0;
	}
}