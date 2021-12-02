// Tadhg Montague
// c00271105@itcarlow.ie
// Programming - Labsheet 9 Q1
// Estimated Time	- 30min
// Recorder Time	- 25min

#include<iostream>
#include<cmath>
#include<random> // Included to make the program less biased for above average total.

using namespace std; // Making my life easier.

int generateRandom(); // Establishing the function.

int main()
{
	cout << "Random number genarator, between 1 - 40." << endl; // Stating the parameters.

	generateRandom(); // Calling the function.

	system("Pause"); // Pausing the program.
}

int generateRandom()
{
	srand(static_cast<unsigned>(time(nullptr))); // Random system.
	
	// Variable list
	int runTotal = 0; 
	int lap = 0;
	int genNum = 0;

	for (lap >= 0; lap <= 10; ) // Loop
	{
		genNum = rand() % 40 + 1;					// Generates the random number.
		runTotal = runTotal + genNum;				// Gets running total for end display of total.
		lap++;										// Counts the lap towards 10.
		cout << genNum << endl;						// Displays the latest number generated.
	}
	cout << "Total of the 10 numbers generated " << runTotal << endl;	// End display of the Total of the generated Numbers.

	return 0;
}