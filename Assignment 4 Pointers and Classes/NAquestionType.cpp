#include <cstdlib> // For several general-purpose functions
#include <fstream> // For file handling
#include <iomanip> // For formatted output
#include <iostream> // For cin, cout, and system
#include <string> // For string data type
using namespace std; // So "std::cout" may be abbreviated to "cout"
#include "NAquestionType.h"
#include "QuestionType.h"

void NAquestionType::setCorrectAnswer(float min, float max)
{
	if (correctAnswerMin <= correctAnswerMax)
	{
		correctAnswerMin = min;
		correctAnswerMax = max;
	}	
}

float NAquestionType::getCorrectAnswerMin() const
{
	return correctAnswerMin;
}

float NAquestionType::getCorrectAnswerMax() const
{
	return correctAnswerMax;
}

bool NAquestionType::isCorrect(float correct) const
{
	if ( correct > correctAnswerMin && correct < correctAnswerMax)
	{
		return true;
	}
	else
		return false;
}

NAquestionType::NAquestionType()
{
	correctAnswerMin = 0;
	correctAnswerMax = 0;
}

NAquestionType::NAquestionType(string txt, float min, float max) : QuestionType::QuestionType(txt)
{
	correctAnswerMin = min;
	correctAnswerMax = max;
}
