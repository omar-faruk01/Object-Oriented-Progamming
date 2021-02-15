#pragma once
#include <cstdlib> // For several general-purpose functions
#include <fstream> // For file handling
#include <iomanip> // For formatted output
#include <iostream> // For cin, cout, and system
#include <string> // For string data type
using namespace std; // So "std::cout" may be abbreviated to "cout"
#include "Question.h"

class SAquestion : public Question
{
private:
	string correctAnswer;
public:
	void setCorrectAnswer(string answer);
	string getCorrectAnswer() const;
	bool isCorrect(string answer) const;
	SAquestion();
	SAquestion(string answer, string choice);
};