#pragma once
#include <cstdlib> // For several general-purpose functions
#include <fstream> // For file handling
#include <iomanip> // For formatted output
#include <iostream> // For cin, cout, and system
#include <string> // For string data type
using namespace std; // So "std::cout" may be abbreviated to "cout"
#include "Question.h" // For class header file
#include "MCquestion.h" // For class header file
#include "SAquestion.h" // For class header file

class Quiz : public Question 
{
private:
	double score;
public:
	MCquestion question01;
	SAquestion question02;
	MCquestion question03;
	SAquestion question04;
	double getScore() const;
	void startAttempt();
	Quiz();
};