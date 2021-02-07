#include "pointType.h"
#include <cstdlib> // For several general-purpose functions
#include <fstream> // For file handling
#include <iomanip> // For formatted output
#include <iostream> // For cin, cout, and system
#include <string> // For string data type
using namespace std; // So "std::cout" may be abbreviated to "cout"

void pointType::setPoint(float c, float d)
{
	x = c;
	y = d;
}

float pointType::getX()
{
	return x;
}

float pointType::getY()
{
	return y;
}

float pointType::distance(pointType a)
{
	float distance;
	distance = sqrt(((a.getX() - x) * (a.getX() - x)) + ((a.getY() - y) * (a.getY() - y)));
	return distance;
}

pointType::pointType()
{
	x = 0;
	y = 0;
}

pointType::pointType(float c, float d)
{
	x = c;
	x = d;
}