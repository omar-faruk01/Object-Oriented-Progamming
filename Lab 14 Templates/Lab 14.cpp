//==========================================================
//
// Title:      Templates
// Course:     CSC 2111
// Lab Number: 14
// Author:     Omar Faruk
// Date:       03/06/2021
// Description:
//   Creating a program to use templates from class and function call.
//
//==========================================================
#include <cstdlib> // For several general-purpose functions
#include <fstream> // For file handling
#include <iomanip> // For formatted output
#include <iostream> // For cin, cout, and system
#include <string> // For string data type
using namespace std; // So "std::cout" may be abbreviated to "cout"

template <class Type>
Type larger(Type x, Type y)
{
	if (x >= y)
	{
		return x;
	}
	else
		return y;
}

template <class T>
T sumOfSequence(T sum, T x, int n)
{

	for (int i = 0; i < n+1; i++) // Compute equation
	{
		sum = sum + (i * x);
	}

	return sum+1;
}

int main()
{
	// Declare variables 
	int a, b;
	double c, d;
	string e, f;

	// APplication header
	cout << "Welcome to Templates!" << endl;
	cout << "---------------------" << endl << endl;
	
	// User input of two ints
	cout << "Enter two integer numbers: ";
	cin >> a >> b;
	cout << "Larger input: "<< larger(a, b) << endl;

	// User input of two doubles
	cout << "\nEnter two double numbers: ";
	cin >> c >> d;
	cout << "Larger input: " << larger(c, d) << endl;

	// User input of two strings
	cout << "\nEnter two strings: ";
	cin >> e >> f;
	cout << "Larger input: " << larger(e, f) << endl;

	// Sum of sequence call
	cout << endl << "Sum of Sequence: " << sumOfSequence<int>(0, 2, 2) << endl;

	// Application footer
	cout << "\nEnd of Templates!";
}