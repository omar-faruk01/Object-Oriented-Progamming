//==========================================================
//
// Title:      Distance and Form of a Line
// Course:     CSC 2111
// Lab Number: 6
// Author:     Omar Faruk
// Date:       01/31/21
// Description:
//   Creating a program to calculate the slope intercept
//  form and distance using inheritance, composition, and polymorphism.
//
//==========================================================
#include <cstdlib> // For several general-purpose functions
#include <fstream> // For file handling
#include <iomanip> // For formatted output
#include <iostream> // For cin, cout, and system
#include <string> // For string data type
using namespace std; // So "std::cout" may be abbreviated to "cout"
#include "pointType.h"
#include "lineType.h"

int main()
{
	// Declare variables
	float x, y;
	float distance, vertical, horizontal, slant;

	// Application header
	cout << "Distance and Form of Line!" << endl
		<< "--------------------------" << endl<<endl;

	// Declare Point 1
	pointType p1;
	cout << "Enter the coordinates for point 1: ";
	cin >> x >> y;
	p1.setPoint(x, y);

	// Declare Point 2
	pointType p2;
	cout << "Enter the coordinates for point 2: ";
	cin >> x >> y;
	p2.setPoint(x, y);

	// Get Distance
	distance = p1.distance(p2);
	cout << "\nThe distance between the two points are " << distance << endl;

	// Declare Line
	lineType line1(p1, p2);

	// Determine if vertical, horizontal, or slanted
	if (line1.isLine() == 1)
	{
		vertical = line1.isVertical();
		cout << "The line is vertical where x=" << vertical << ", where " << vertical << " is a real number." << endl;
	}
	if (line1.isLine() == 2)
	{
		horizontal = line1.isHorizontal();
		cout << "The line is horizontal where y=" << horizontal << ", where " << horizontal << " is a real number." << endl;
	}
	if  (line1.isLine() == 3)
	{
		slant = line1.isSlant();
		cout << "The line is a slant where y=" << line1.isSlope() << "(x) + " << slant << endl;
	}

	// Application footer
	cout << "\nEnd of Form of Line" << endl;
}
