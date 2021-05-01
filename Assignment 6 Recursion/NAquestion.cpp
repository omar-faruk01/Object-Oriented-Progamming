#include "NAquestion.h"
#include "Question.h"

void NAquestion::setCorrectAnswer(float min, float max)
{
	if (correctAnswerMin <= correctAnswerMax)
	{
		correctAnswerMin = min;
		correctAnswerMax = max;
	}
}

float NAquestion::getCorrectAnswerMin() const
{
	return correctAnswerMin;
}

float NAquestion::getCorrectAnswerMax() const
{
	return correctAnswerMax;
}

int NAquestion::isCorrect(float num) const
{
	if (num > correctAnswerMin && num < correctAnswerMax)
	{
		return Question::getPoints();
	}
	else
		return 0;
}

NAquestion::NAquestion()
{
	correctAnswerMin = 0;
	correctAnswerMax = 0;
}

NAquestion::NAquestion(string txt, float min, float max, int pts) : Question::Question(txt)
{
	correctAnswerMin = min;
	correctAnswerMax = max;
	Question::setPoints(pts);
}

int NAquestion::operator+(const int value)
{
	int pts;
	pts = this->getPoints() + value;
	return pts;
}

bool NAquestion::operator>=(const NAquestion& q)
{
	if (this->getPoints() <= q.getPoints())
	{
		return false;
	}
	else
	{
		return true;
	}
}

ostream& operator<<(ostream& osObject, const NAquestion& oQuestion)
{
	osObject << "Question: " << oQuestion.getText();

	return osObject;
}
