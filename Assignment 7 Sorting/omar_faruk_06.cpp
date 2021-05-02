// omar_faruk_06.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <cstdlib> // For several general-purpose functions
#include <fstream> // For file handling
#include <iomanip> // For formatted output
#include <iostream> // For cin, cout, and system
#include <string> // For string data type
using namespace std; // So "std::cout" may be abbreviated to "cout"
#include "NAquestion.h"
#include "Quiz.h"

int main()
{
	Quiz NumericExam; // object created
	NAquestion* ptrNAq; // pointer variable

	ptrNAq = new NAquestion("What year was the very first model of the iPhone released?", 2006, 2008, 6); // Question 1
	NumericExam.setQuestion(0, ptrNAq);

	ptrNAq = new NAquestion("When Michael Jordan played for the Chicago Bulls, how many NBA Championships did he win?", 5, 7, 15); // Question 2
	NumericExam.setQuestion(1, ptrNAq);

	ptrNAq = new NAquestion("In what year did Steve Jobs die?", 2010, 2012, 3); // Question 3
	NumericExam.setQuestion(2, ptrNAq);

	ptrNAq = new NAquestion("How many cards are there in a deck of Uno?", 107, 109, 10); // Question 4
	NumericExam.setQuestion(3, ptrNAq);

	ptrNAq = new NAquestion("When did construction on the Empire State building started?", 1929, 1931, 5); // Question 5
	NumericExam.setQuestion(4, ptrNAq);

	NumericExam.sort();
	NumericExam.startAttempt();
}
