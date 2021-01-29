#pragma once
#include <cstdlib> // For several general-purpose functions
#include <fstream> // For file handling
#include <iomanip> // For formatted output
#include <iostream> // For cin, cout, and system
#include <string> // For string data type
using namespace std; // So "std::cout" may be abbreviated to "cout"
#include "Rectangle.h"

class Box : public Rectangle{
private:
	double height;
public:
	double Volume();
	void print();
	double area();
	int getHeight();
	Box();
	Box(double hgt, double len, double wdt);
};