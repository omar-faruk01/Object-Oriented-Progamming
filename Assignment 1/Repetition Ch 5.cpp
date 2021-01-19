//==========================================================
//
// Title:      application
// Course:     CSC 2110
// Lab Number: Structured Programming Self-Assessment
// Author:     Omar Faruk
// Date:       01/15/2021
// Description:
//   Creating an application about repetition which finds multiples
// of 3 and 5 for a user input.
// processing, and outputs
//
//==========================================================
#include <cstdlib> // For several general-purpose functions
#include <fstream> // For file handling
#include <iomanip> // For formatted output
#include <iostream> // For cin, cout, and system
#include <string> // For string data type
using namespace std; // So "std::cout" may be abbreviated to "cout"

int main()
{

	// Declare variables
	int num_input1, num_input2;
	int multiples_3 = 0;
	int multiples_5 = 0;
	int num1;

	// User input for two ints
	cout << "Enter two integers: ";
	cin >> num_input1 >> num_input2;


	// Setting max and min of the two inputs
	if (num_input2 < num_input1)
	{
		num1 = num_input2;
		num_input2 = num_input1;
		num_input1 = num1;

	}
	num1 = num_input1;

	// Finding the multiples of 3 and 5 using loop
	while (num1<=num_input2)
	{
		if (num1 % 3 == 0)
		{
			multiples_3++;
		}
		if (num1 % 5 == 0)
		{
			multiples_5++;
		}
		num1++;
	}

	// Output statemen
	cout << "The multiples of 3 between " << num_input1 << " and " 
		<< num_input2 << " are: " << multiples_3 << endl;
	cout << "The multiples of 5 between " << num_input1 << " and "
		<< num_input2 << " are: " << multiples_5 << endl;
}
