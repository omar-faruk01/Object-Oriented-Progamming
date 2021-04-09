#include "Question.h"

void Question::setText(string txt)
{
	text = txt;
}

string Question::getText() const
{
	return text;
}

void Question::setPoints(int pts)
{
	points = pts;
}

int Question::getPoints() const
{
	return points;
}

void Question::display() const
{
	cout << endl << text << endl;
}

Question::Question()
{

	points = 1;
	text = "";
}

Question::Question(string txt)
{
	text = txt;
	points = 1;
}
