// omar_faruk_03.cpp : This file contains the 'main' function. Program execution begins and ends there.
//==========================================================
//
// Title:      Trivia Quiz
// Course:     CSC 2110
// Number:	   Assignment 3
// Author:     Omar Faruk
// Date:       02/15/21
// Description:
//   Creating a program that allows a user to attempt at a 
//  quiz of 4 trivia quiestions. Techniques used are polymorphism,
//  inheritance, and composition with pointers.
//
//==========================================================
#include <cstdlib> // For several general-purpose functions
#include <fstream> // For file handling
#include <iomanip> // For formatted output
#include <iostream> // For cin, cout, and system
#include <string> // For string data type
using namespace std; // So "std::cout" may be abbreviated to "cout"
#include "QuizType.h"

int main()
{

	cout << fixed << setprecision(2); // format output

	// Decalring an object
	QuizType triviaQuiz;

	// Defining the questions
	NAquestionType* question1 = new NAquestionType("How many presidents have been impeached?", 2, 5);
	NAquestionType* question2 = new NAquestionType("How many hearts does an octopus have?", 2, 5);
	NAquestionType* question3 = new NAquestionType("If there are 6 apples and you take away 4, how many do you have?", 3, 6);
	
	// Setting the questions
	triviaQuiz.setQuestion(0, question1);
	triviaQuiz.setQuestion(1, question2);
	triviaQuiz.setQuestion(3, question3);


	// Application header
	cout << "Welcome to Trivia Quiz!" << endl;
	cout << "-----------------------"  << endl;

	// Start attempt on quiz
	triviaQuiz.startAttempt();

	// Reset questions
	triviaQuiz.resetQuestions();

	// Application footer
	cout << "-----------------------" << endl << endl;
	cout << "End of Trivia Quiz" << endl;

	return 0;
}
