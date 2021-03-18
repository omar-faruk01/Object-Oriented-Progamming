#pragma once
#include <cstdlib> // For several general-purpose functions
#include <fstream> // For file handling
#include <iomanip> // For formatted output
#include <iostream> // For cin, cout, and system
#include <string> // For string data type
#include "QuestionType.h"
using namespace std; // So "std::cout" may be abbreviated to "cout"

class NAquestionType : public QuestionType{
private: 
	float correctAnswerMin;
	float correctAnswerMax;
public:
	void setCorrectAnswer(float min, float max);
	float getCorrectAnswerMin() const;
	float getCorrectAnswerMax() const;
	bool isCorrect(float correct) const;
	NAquestionType();
	NAquestionType(string txt, float min, float max);
};