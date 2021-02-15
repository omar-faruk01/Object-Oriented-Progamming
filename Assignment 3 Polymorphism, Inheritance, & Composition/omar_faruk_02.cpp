// omar_faruk_02.cpp : This file contains the 'main' function. Program execution begins and ends there.
//==========================================================
//
// Title:      Quiz - Inheritance, Compisition, & Polymorphism
// Course:     CSC 2110
// Assignment Number: 2
// Author:     Omar Faruk
// Date:       01/29/2021
// Description:
//  Creating a program to use make a quiz using inheritance,
// composition, and polymorphism.
//
//==========================================================
#include <cstdlib> // For several general-purpose functions
#include <fstream> // For file handling
#include <iomanip> // For formatted output
#include <iostream> // For cin, cout, and system
#include <string> // For string data type
using namespace std; // So "std::cout" may be abbreviated to "cout"
#include "Quiz.h"

int main()
{
    // Declare an object;
    Quiz generalQuiz;

    // Application header
    cout << "Welcome to General Quiz!" << endl
        << "------------------------"  << endl;

    // MCQuestion 1
    generalQuiz.question01.setText("Which New York City building is the tallest?");
    generalQuiz.question01.choices[0] = "Empire State Building";
    generalQuiz.question01.choices[1] = "Bank of America Tower";
    generalQuiz.question01.choices[2] = "One World Trade Center";
    generalQuiz.question01.choices[3] = "Statue of Liberty";
    generalQuiz.question01.setCorrectAnswer(2);

    // SAquestion 2
    generalQuiz.question02.setText("Who was the last prophet in Islam?");
    generalQuiz.question02.setCorrectAnswer("Muhammad");

    // MCQuestion 3
    generalQuiz.question03.setText("Which city is known as the City of Love?");
    generalQuiz.question03.choices[0] = "Rome";
    generalQuiz.question03.choices[1] = "Barcelona";
    generalQuiz.question03.choices[2] = "New York City";
    generalQuiz.question03.choices[3] = "Paris";
    generalQuiz.question03.setCorrectAnswer(3);

    // SAquestion 4
    generalQuiz.question04.setText("The Islamic calendar is based on which cycle?");
    generalQuiz.question04.setCorrectAnswer("Lunar");
    
    // Start attempt of quiz
    generalQuiz.startAttempt();
    
    // Application footer
    cout << "\nEnd of General Quiz" << endl;
}
