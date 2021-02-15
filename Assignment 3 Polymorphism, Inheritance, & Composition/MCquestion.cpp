#include <cstdlib> // For several general-purpose functions
#include <fstream> // For file handling
#include <iomanip> // For formatted output
#include <iostream> // For cin, cout, and system
#include "MCquestion.h" // For class header file
#include <string> // For string data type
using namespace std; // So "std::cout" may be abbreviated to "cout"

// Set the question
void MCquestion::setText(string txt)
{
	text = txt;
}

// Get the question
string MCquestion::getText() const
{
	return text;
}

// Sets correct answer for question
void MCquestion::setCorrectAnswer(int answer)
{
	// Validation for out of scope correct answer
	if (answer <= 0 || answer > 3)
	{
		cout << "Invalid input entered for setting the correct answer!" << endl;
	}
	else
	{
		correctAnswer = answer + 1;
	}
}

// Print the correct answer
int MCquestion::getCorrectAnswer() const
{
	return correctAnswer;
}

// Evealuate if user input is correct answer choice
bool MCquestion::isCorrect(int answerChoice) const
{
	if (answerChoice == correctAnswer)
	{
		return true;
	}
	else
	{
		return false;
	}
}

// Output the question
void MCquestion::display() const
{
	cout << endl << text << endl;
	cout << "1 - " << choices[0] << endl;
	cout << "2 - " << choices[1] << endl;
	cout << "3 - " << choices[2] << endl;
	cout << "4 - " << choices[3] << endl;
}

// Constructor
MCquestion::MCquestion()
{
	text = "";
	correctAnswer = 0;
}
// Constructor
MCquestion::MCquestion(string txt)
{
	text = txt;
}
