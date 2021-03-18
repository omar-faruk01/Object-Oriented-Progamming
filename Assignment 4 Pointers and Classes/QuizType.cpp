#include <cstdlib> // For several general-purpose functions
#include <fstream> // For file handling
#include <iomanip> // For formatted output
#include <iostream> // For cin, cout, and system
#include <string> // For string data type
#include "QuestionType.h"
#include "NAquestionType.h"
#include "QuizType.h"
using namespace std; // So "std::cout" may be abbreviated to "cout"

double QuizType::getScore() const
{
	return score;
}

void QuizType::setQuestion(int num, NAquestionType* p)
{
	if ((num >= 0) && (num < 4))
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

NAquestionType* QuizType::getQuestion(int num)
{
	if (num > 0 && num < 4)
	{
		return questions[num];
	}
	else
	{
		return NULL;
	}
}

void QuizType::resetQuestions()
{

	for (int i = 0; i < sizeof(questions) / sizeof(questions[0]); i++)
	{
		delete questions[i]; // delete the values at end of attempt
		questions[i] = NULL; // set values to null
	}
}

void QuizType::startAttempt()
{
	// Declare varaibles
	float answer;
	double counter = 0, total = 0;

	// Question 1
	if (questions[0] != NULL)
	{
		questions[0]->display();
		cout << "Answer ";
		cin >> answer;
		if (true == questions[0]->isCorrect(answer))
		{
			cout << "Correct answer!" << endl;
			counter++;
			total++;
		}
		else
		{
			cout << "Incorrect answer!" << endl;
			total++;
		}
	}
	// Question 2
	if (questions[1] != NULL)
	{
		questions[1]->display();
		cout << "Answer ";
		cin >> answer;
		if (true == questions[1]->isCorrect(answer))
		{
			cout << "Correct answer!" << endl;
			counter++;
			total++;
		}
		else
		{
			cout << "Incorrect answer!" << endl;
			total++;
		}
	}
	// Question 3
	if (questions[2] != NULL)
	{
		questions[2]->display();
		cout << "Answer ";
		cin >> answer;
		if (true == questions[2]->isCorrect(answer))
		{
			cout << "Correct answer!" << endl;
			counter++;
			total++;
		}
		else
		{
			cout << "Incorrect answer!" << endl;
			total++;
		}
	}
	// Question 4
	if (questions[3] != NULL)
	{
		questions[3]->display();
		cout << "Answer ";
		cin >> answer;
		if (true == questions[3]->isCorrect(answer))
		{
			cout << "Correct answer!" << endl;
			counter++;
			total++;
		}
		else
		{
			cout << "Incorrect answer!" << endl;
			total++;
		}
	}

	// Compute score
	score = counter / total * 100;
	cout << "\n-----------------------" << endl;
	cout << "Quiz score: " << score << endl; // print quiz score
}

QuizType::QuizType()
{
	// Initalize score
	score = 0;

	// Initialize array of ptrs
	for (int i = 0; i < sizeof(questions) / sizeof(questions[0]); i++)
	{
		questions[i] = NULL;
	}
}
