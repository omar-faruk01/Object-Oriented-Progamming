#pragma once
#include <cstdlib> // For several general-purpose functions
#include <fstream> // For file handling
#include <iomanip> // For formatted output
#include <iostream> // For cin, cout, and system
#include <string> // For string data type
#include "Question.h"
#include "NAquestion.h"
using namespace std; // So "std::cout" may be abbreviated to "cout"

class Quiz : public Question{
private:
	double score;
	NAquestion* questions[5];
	NAquestion* largest(int lowerIndex, int upperIndex);
public:
	double getScore() const;
	void setQuestion(int num, NAquestion* p);
	NAquestion* getQuestion(int num);
	void resetQuestions();
	void startAttempt();
	NAquestion* largestQuestion();
	Quiz();
};
