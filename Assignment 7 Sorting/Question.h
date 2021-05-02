#pragma once

#include <cstdlib> // For several general-purpose functions
#include <fstream> // For file handling
#include <iomanip> // For formatted output
#include <iostream> // For cin, cout, and system
#include <string> // For string data type
using namespace std; // So "std::cout" may be abbreviated to "cout"

class Question
{
private:
	string text;
	int points;

public:
	void setText(string txt);
	string getText() const;
	void setPoints(int pts);
	int getPoints() const;
	void display() const;
	Question();
	Question(string txt);
};