#pragma once
#pragma once
#include <cstdlib> // For several general-purpose functions
#include <fstream> // For file handling
#include <iomanip> // For formatted output
#include <iostream> // For cin, cout, and system
#include <string> // For string data type
#include "Question.h"
using namespace std; // So "std::cout" may be abbreviated to "cout"

class NAquestion : public Question {
private:
	float correctAnswerMin;
	float correctAnswerMax;
	friend ostream& operator<<(ostream& osObject, const NAquestion& oQuestion);
public:
	void setCorrectAnswer(float min, float max);
	float getCorrectAnswerMin() const;
	float getCorrectAnswerMax() const;
	int isCorrect(float nu) const;
	NAquestion();
	NAquestion(string txt, float min, float max, int pts);
	int operator+(const int value);
};