//==========================================================
//
// Title:      Virtual Methods: Area of Rec and Tri
// Course:     CSC 2111
// Lab Number: 12
// Author:     Omar Faruk
// Date:       02/24/2021
// Description:
//   Creating a program using pure virtual methods to get area
// of rectangle and square uing inheritance.
//
//==========================================================
#include <cstdlib> // For several general-purpose functions
#include <fstream> // For file handling
#include <iomanip> // For formatted output
#include <iostream> // For cin, cout, and system
#include <string> // For string data type
using namespace std; // So "std::cout" may be abbreviated to "cout"

class Shape
{
private:

protected:
	double length;
	double height;

public:
	virtual double getArea() = 0;
	double getLength() { return length; }
	double getHeight() { return height;  }
	void setLength(double len) { length = len; }
	void setHeight(double hgt) { height = hgt; }
	Shape() 
	{ 
		length = 0; 
		height = 0; 
	}
	Shape(double len, double hgt) 
	{
		length = len;
		height = hgt; 
	}
};

class Rectangle:public Shape
{
public:
	double getArea() { return height * length;}
};

class Triangle :public Shape
{
public:
	double getArea() { return (height * length)/2; }
};

int main()
{
	// Declare objects
	Rectangle Rec;
	Triangle Tri;

	// Application header
	cout << "Welcome to Area of Rectangle and Triangle" << endl;
	cout << "-----------------------------------------" << endl << endl;

	Rec.setHeight(6); 
	Rec.setLength(8);
	cout << "Rectangle Area: " << Rec.getArea();

	Tri.setHeight(9);
	Tri.setLength(4);
	cout << "\nTriangle Area: " << Tri.getArea() << endl;

	// Application footer
	cout << "\nEnd of Area of Rectangle and Triangle" << endl;
}
