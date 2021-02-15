#pragma once
#include <cstdlib> // For several general-purpose functions
#include <fstream> // For file handling
#include <iomanip> // For formatted output
#include <iostream> // For cin, cout, and system
#include <string> // For string data type
using namespace std; // So "std::cout" may be abbreviated to "cout"
#include "Question.h"

class MCquestion : public Question
{
private:
	string text;
	int correctAnswer;

public:
	string choices[4];
	void setText(string txt);
	string getText() const;
	void setCorrectAnswer(int answer);
	int getCorrectAnswer() const;
	bool isCorrect(int answer) const;
	void display() const;
	MCquestion();
	MCquestion(string txt);
};