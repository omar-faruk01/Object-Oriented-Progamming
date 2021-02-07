#pragma once
#include <cstdlib> // For several general-purpose functions
#include <fstream> // For file handling
#include <iomanip> // For formatted output
#include <iostream> // For cin, cout, and system
#include <string> // For string data type
using namespace std; // So "std::cout" may be abbreviated to "cout"
#include "pointType.h"


class lineType : public pointType
{
private:
	pointType p1;
	pointType p2;

public:
	float isSlope();
	float isLine();
	float isVertical();
	float isHorizontal();
	float isSlant();
	lineType(pointType c, pointType d);
};