#pragma once
#include <cstdlib> // For several general-purpose functions
#include <fstream> // For file handling
#include <iomanip> // For formatted output
#include <iostream> // For cin, cout, and system
#include <string> // For string data type
#include "Question.h"
#include "NAquestion.h"
using namespace std; // So "std::cout" may be abbreviated to "cout"

template <typename elemType>
class Quiz : public Question
{
private:
	double score;
	elemType* questions[5];
public:
	double getScore() const;
	void setQuestion(int num, elemType* q);
	elemType* getQuestion(int num) const;
	void resetQuestions();
	void startAttempt();
	Quiz();
};

template<typename elemType>
double Quiz<elemType>::getScore() const
{
	return score;
}

template<typename elemType>
void Quiz<elemType>::setQuestion(int num, elemType* q)
{
	if ((num >= 0) && (num < 5))
	{
		// Set array values equal to the parameters
		if (questions[num] == NULL)
		{
			questions[num] = q;
		}
		else
		{
			delete questions[num];
			questions[num] = q;
		}
	}
}

template<typename elemType>
elemType* Quiz<elemType>::getQuestion(int num) const
{
	// return the given question
	if (num > 0 && num < 5)
	{
		return questions[num];
	}
	else
	{
		return NULL;
	}
}

template<typename elemType>
void Quiz<elemType>::resetQuestions()
{

	for (int i = 0; i < sizeof(questions) / sizeof(questions[0]); i++)
	{
		delete questions[i]; // delete the values at end of attempt
		questions[i] = NULL; // set values to null
	}
}

template<typename elemType>
void Quiz<elemType>::startAttempt()
{
	// Declare variables
	double total = 0, num = 0;
	float answer;

	for (int i = 0; i < 5; i++)
	{
		if (questions[i] != NULL)
		{
			total +=  questions[i]->getPoints(); // calculate all possible points
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

template<typename elemType>
Quiz<elemType>::Quiz()
{
	// Initalize score
	score = 0;

	// Initialize array of pointers
	for (int i = 0; i < 5; i++)
	{
		questions[i] = NULL;
	}
}
