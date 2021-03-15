#include <cstdlib> // For several general-purpose functions
#include <fstream> // For file handling
#include <iomanip> // For formatted output
#include <iostream> // For cin, cout, and system
#include <string> // For string data type
#include "Question.h" // For class header file
using namespace std; // So "std::cout" may be abbreviated to "cout"
#include "SAquestion.h"

void SAquestion::setCorrectAnswer(string answer)
{
    int len; // declare varaible
    len = answer.length();

    if ( len > 0)
    {
        correctAnswer = answer;
    }
    else
    {
        cout << "There must be more than " << len << " characters" << endl;
    }
}

string SAquestion::getCorrectAnswer() const
{
    return correctAnswer;
}

bool SAquestion::isCorrect(string answer) const
{
    if (correctAnswer == answer)
    {
        return true;
    }
    else
    {
        return false;
    }
}

SAquestion::SAquestion()
{
    correctAnswer = "";
}

SAquestion::SAquestion(string answer, string txt) : Question::Question(txt)
{
    correctAnswer = answer;
}
