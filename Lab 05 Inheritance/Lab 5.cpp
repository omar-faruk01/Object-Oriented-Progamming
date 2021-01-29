//==========================================================
//
// Title:      Inheritance: Rectangle and Box
// Course:     CSC 2111
// Lab Number: 5
// Author:     Omar Faruk
// Date:       01/27/2021
// Description:
//  Creating a program to use  inheritance of class rectangle
// as base class and class box as dervied class in order to
// calculate area and volume.
//
//==========================================================
#include <cstdlib> // For several general-purpose functions
#include <fstream> // For file handling
#include <iomanip> // For formatted output
#include <iostream> // For cin, cout, and system
#include <string> // For string data type
using namespace std; // So "std::cout" may be abbreviated to "cout"
#include "Box.h" // For b
#include "Rectangle.h"

int main()
{
	// Declare variables
	double boxArea, boxVolume;

	// Application Header
	cout << "Box Area and Volume!" << endl;
	cout << "--------------------" << endl;

    // Box 1 operations
	cout << "\n--Box 1--" << endl;
	Box box1(4,8,6);
	boxArea = box1.area(); // Compute area
	boxVolume = box1.Volume(); // Compute volume
	box1.print(); // Print the details
	cout << "Area: " << boxArea << " Volume: " << boxVolume << endl;

	// Box 2 operations
	cout << "\n--Box 2--" << endl;
	Box box2(9, 16, 18);
	boxArea=box2.area(); // Compute area
	boxVolume=box2.Volume(); // Compute volume
	box2.print(); // Print the details
	cout << "Area: " << boxArea << " Volume: " << boxVolume << endl;

	// Application footer
	cout << "\nEnd of Box Area and Volume" << endl;
}
