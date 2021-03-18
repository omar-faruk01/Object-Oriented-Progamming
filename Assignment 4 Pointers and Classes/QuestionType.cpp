#include <cstdlib> // For several general-purpose functions
#include <fstream> // For file handling
#include <iomanip> // For formatted output
#include <iostream> // For cin, cout, and system
#include <string> // For string data type
#include "QuestionType.H"
using namespace std; // So "std::cout" may be abbreviated to "cout"

void QuestionType::setText(string txt)
{
	text = txt;
}

string QuestionType::getText() const
{
	return text;
}

void QuestionType::display() const
{
	cout << endl << text << endl;
}

QuestionType::QuestionType()
{
	text = "";
}

QuestionType::QuestionType(string txt)
{
	text = txt;
}
