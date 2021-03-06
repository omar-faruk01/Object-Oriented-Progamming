#pragma once
#include <cstdlib> // For several general-purpose functions
#include <fstream> // For file handling
#include <iomanip> // For formatted output
#include <iostream> // For cin, cout, and system
#include <string> // For string data type
using namespace std; // So "std::cout" may be abbreviated to "cout"

class Rectangle {
private:
	double length;
	double width;
public:
	double area();
	double perimeter();
	void print();
	int getLength();
	int getWidth();
	Rectangle();
	Rectangle(double len, double wdt);
};