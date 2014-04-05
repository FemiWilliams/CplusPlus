#include <ctime>
#include <cstdlib>
#include <iostream>

using namespace std;

int main()
{
	srand(time(0)); // seed random number generator 

	int theNumber = rand() % 100 + 1; // random number between 1 and 100
	int tries = 0, guess;

	cout << "Enter a number between 1 and 100\n\n";
	cin >> guess;

	while(guess != theNumber){

	cout << theNumber;
	cout << "\n\n";
	theNumber = rand() % 100 + 1;
	tries++;
        }

	cout << "Your number was " << theNumber << "!\n\n";
	cout << "It only took " << tries << " tries.\n\n";
	system("PAUSE");
	return 0;
}
