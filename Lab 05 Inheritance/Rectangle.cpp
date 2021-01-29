#include <cstdlib> // For several general-purpose functions
#include <fstream> // For file handling
#include <iomanip> // For formatted output
#include <iostream> // For cin, cout, and system
#include <string> // For string data type
#include "Rectangle.h"
using namespace std; // So "std::cout" may be abbreviated to "cout"

// Calculate rectangle area
double Rectangle::area()
{
	double area; // declare variable
	area = length * width; // Calculation for area
	return area;
}
// Calculate perimeter of rectangle
double Rectangle::perimeter()
{
	double perimeter; // declare variable
	perimeter = 2 * (length + width); // Calculation for perimeter
	return perimeter;;
}
// Print private variables
void Rectangle::print()
{
	cout << "Length: "<< length
		<< endl <<"Width "<< width << endl;
}
// Get length, access private in derived class
int Rectangle::getLength()
{
	return length;
}
// Get width, access private in derived class
int Rectangle::getWidth()
{
	return width;
}
// Constructor to initialize values to 0
Rectangle::Rectangle()
{
	length = 0;
	width = 0;
}
// Constructor to initialize values to user specified;
Rectangle::Rectangle(double len, double wdt)
{
	length = len;
	width = wdt;
}
