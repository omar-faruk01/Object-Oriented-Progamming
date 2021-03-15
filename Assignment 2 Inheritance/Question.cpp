#include <cstdlib> // For several general-purpose functions
#include <fstream> // For file handling
#include <iomanip> // For formatted output
#include <iostream> // For cin, cout, and system
#include <string> // For string data type
#include "Question.h" // For class header file
using namespace std; // So "std::cout" may be abbreviated to "cout"

// Set text for question
void Question::setText(string txt)
{
	text = txt;
}

// Get text for question
string Question::getText() const
{
	return text;
}
// Print question
void Question::display() const
{
	cout << endl << text << endl;
}
// Initialize variable
Question::Question()
{
	text = "";
}
// Initialize variable to user defined
Question::Question(string txt)
{
	text = txt;
}
