#include <cstdlib> // For several general-purpose functions
#include <fstream> // For file handling
#include <iomanip> // For formatted output
#include <iostream> // For cin, cout, and system
#include <string> // For string data type
#include "QuestionType.h"
#include "NAquestionType.h"
using namespace std; // So "std::cout" may be abbreviated to "cout"

class QuizType : public QuestionType {
private:
	double score;
	NAquestionType* questions[4];
public:
	double getScore() const;
	void setQuestion(int num, NAquestionType* p);
	NAquestionType* getQuestion(int num);
	void resetQuestions();
	void startAttempt();
	QuizType();
};
