#include <cstdlib> // For several general-purpose functions
#include <fstream> // For file handling
#include <iomanip> // For formatted output
#include <iostream> // For cin, cout, and system
#include <string> // For string data type
#include "Question.h" // For class header file
using namespace std; // So "std::cout" may be abbreviated to "cout"
#include "Quiz.h"

// Get score
double Quiz::getScore() const
{
    return score;
}
// Start attempt to quiz
void Quiz::startAttempt()
{
    // Declare variable
    double counter = 0;

    // Question 1
    int mc1;
    question01.display();
    cout << "Answer: ";
    cin >> mc1;
    question01.isCorrect(mc1);
    if (question01.isCorrect(mc1) == true)
    {
        cout << "Correct answer!" << endl;
        counter++;
    }
    else
    {
        cout << "Incorrect answer!" << endl;
    }

    // Question 2
    string sa1;
    question02.display();
    cout << "Answer: ";
    cin >> sa1;
    question02.isCorrect(sa1);
    if (question02.isCorrect(sa1) == true)
    {
        cout << "Correct answer!" << endl;
        counter++;
    }
    else
    {
        cout << "Incorrect answer!" << endl;
    }

    // Question 3
    int mc2;
    question03.display();
    cout << "Answer: ";
    cin >> mc2;
    question03.isCorrect(mc2);
    if (question03.isCorrect(mc2) == true)
    {
        cout << "Correct answer!" << endl;
        counter++;
    }
    else
    {
        cout << "Incorrect answer!" << endl;
    }

    // Question 4
    string sa2;
    question04.display();
    cout << "Answer: ";
    cin >> sa2;
    question04.isCorrect(sa2);
    if (question04.isCorrect(sa2) == true)
    {
        cout << "Correct answer!" << endl;
        counter++;
    }
    else
    {
        cout << "Incorrect answer!" << endl;
    }

    // Compute score
    score = counter / 4 * 100;
    cout << "\n------------------------" << endl;
    cout << "\nQuiz score: " << score << "%" << endl; // print quiz score
}
// Initialize variable
Quiz::Quiz()
{
    score = 0;
}
