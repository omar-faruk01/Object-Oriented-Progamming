
#include <cstdlib> // For several general-purpose functions
#include <fstream> // For file handling
#include <iomanip> // For formatted output
#include <iostream> // For cin, cout, and system
#include <string> // For string data type
#include "Question.h"
#include "NAquestion.h"
#include "Quiz.h"
using namespace std; // So "std::cout" may be abbreviated to "cout"

NAquestion* Quiz::largest(int lowerIndex, int upperIndex)
{
	NAquestion *max; // declare var

	if (lowerIndex == upperIndex) //size of the sublist is one
		return questions[lowerIndex];
	else
	{
		max = largest(lowerIndex + 1, upperIndex);
		if (*(questions[lowerIndex]) >= *max)
			return (questions[lowerIndex]);
		else
			return (max);
	}
}

double Quiz::getScore() const
{
	return score;
}

void Quiz::setQuestion(int num, NAquestion* p)
{
	if ((num >= 0) && (num < 5))
	{
		// Set array values equal to the parameters
		if (questions[num] == NULL)
		{
			questions[num] = p;
		}
		else
		{
			delete questions[num];
			questions[num] = p;
		}
	}
}

NAquestion* Quiz::getQuestion(int num)
{
	if (num > 0 && num < 5)
	{
		return questions[num];
	}
	else
	{
		return NULL;
	}
}

void Quiz::resetQuestions()
{

	for (int i = 0; i < sizeof(questions) / sizeof(questions[0]); i++)
	{
		delete questions[i]; // delete the values at end of attempt
		questions[i] = NULL; // set values to null
	}
}

void Quiz::startAttempt()
{
	// Declare variables
	double total = 0, num = 0;
	float answer;

	for (int i = 0; i < 5; i++)
	{
		if (questions[i] != NULL)
		{
			total += questions[i]->getPoints(); // calculate all possible points
			cout << *questions[i]; // display question
			cout << "\nAnswer ";
			cin >> answer; // take user input
			if (questions[i]->isCorrect(answer) != 0)
			{
				num += questions[i]->getPoints(); // calculate points for answers that were correct
				cout << "Correct Answer!" << endl << endl;
			}
			else
			{
				cout << "Incorrect answer!" << endl << endl;
			}
		}
	}


	// Compute score
	score = num / total; // Compute the total score of quiz
	cout << "\n--------------------------" << endl;
	cout << "Quiz score: " << score * 100 << endl; // print quiz score

}

NAquestion* Quiz::largestQuestion()
{
	return largest(0,4);
}

Quiz::Quiz()
{
	// Initalize score
	score = 0;

	// Initialize array of ptrs
	for (int i = 0; i < sizeof(questions) / sizeof(questions[0]); i++)
	{
		questions[i] = NULL;
	}
}
