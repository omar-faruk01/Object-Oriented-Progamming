//==========================================================
//
// Title:      Pirates of the Caribbean Multiple Choice Question
// Course:     CSC 2110
// Assignment Number: 1
// Author:     Omar Faruk
// Date:       01/19/2021
// Description:
//   Creating a program that prompts a multiple choice question
// and takes user input to determine if the input is correct or not
// using class, methods, and an object.
//
//==========================================================
#include <cstdlib> // For several general-purpose functions
#include <fstream> // For file handling
#include <iomanip> // For formatted output
#include <iostream> // For cin, cout, and system
#include "MCquestion.h" // For class header file
#include <string> // For string data type
using namespace std; // So "std::cout" may be abbreviated to "cout"

int main()
{
	int userInput;

	// Define object for question 1
	MCquestion question1("In Pirates of the Caribbean, what was Captain Jack Sparrow’s ship’s name?");
	question1.choices[0] = "The Marauder";
	question1.choices[1] = "The Black Pearl";
	question1.choices[2] = "The Black Python";
	question1.choices[3] = "The Slytherin";
	question1.setCorrectAnswer(1);
  
	// Output the question
	cout << "Question 1" << endl;
	cout << "-----------" << endl;
	question1.display();

	// Take user input
	cout << "Your Answer: ";
	cin >> userInput;

	// Output result with check
	if (question1.isCorrect(userInput))
	{
		cout << "Correct Answer!" << endl;
	}
	else
	{
		cout << "Your answer choice is incorrect." << endl;
	}

	return 0;
}
