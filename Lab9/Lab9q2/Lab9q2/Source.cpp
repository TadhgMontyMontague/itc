// Tadhg Montague - c00271105@itcarlow.ie
// Programming - Labsheet 9 , Q2
// 
// 

#include<iostream>
#include<cmath>

using namespace std;


int main()
{
	int num1 = 10;
	int num2 = 5;

	while ((num1 > 0) || (num2 > 0))
	{
		num1 = num1 - 1;
		num2 = num2 - 1;

		cout << num1 << " , ";
		cout << num2 << endl;
	}

	system("Pause");
	return 1;
}