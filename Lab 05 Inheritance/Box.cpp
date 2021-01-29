#include <cstdlib> // For several general-purpose functions
#include <fstream> // For file handling
#include <iomanip> // For formatted output
#include <iostream> // For cin, cout, and system
#include <string> // For string data type
#include "Box.h"
#include "Rectangle.h"
using namespace std; // So "std::cout" may be abbreviated to "cout"

double Box::Volume()
{
	double boxVolume; // declare variable
	boxVolume = Rectangle::area() * height; // Compute volume
	return boxVolume;
}

void Box::print()
{
	Rectangle::print();
	cout << "Height " << height << endl;
}

double Box::area()
{
	double boxArea; // Declare variable
	boxArea = (2 * Rectangle::area()) + 2 * (Rectangle::getLength() * height) + 2 * (Rectangle::getWidth() * height);
	return boxArea;
}

int Box::getHeight()
{
	return height;
}

Box::Box():Rectangle::Rectangle()
{
	height = 0;
}

Box::Box(double hgt, double len, double wdt):Rectangle::Rectangle(len, wdt)
{
	height = hgt;

}
