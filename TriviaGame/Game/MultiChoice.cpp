#include "pch.h"
#include "MultiChoice.h"

#include <iostream>

using namespace std;

MultiChoice::MultiChoice()
	: TriviaBase()
{
	cout << "MultiChoice created." << endl;

	mQuestions.push_back("Milk is a good source of: \nA) Calcium, \nB) Salt, \nC) Moon, \nD) What?");
	mAnswers.push_back('a');

	mQuestions.push_back("Phone is a : \nA) Communication device, \nB) Car, \nC) Desk, \nD) What?");
	mAnswers.push_back('a');

	mQuestions.push_back("Man first landed on the moon in: \nA) 1954, \nB) 1969, \nC) 2014, \nD) 1952");
	mAnswers.push_back('b');

}

MultiChoice::~MultiChoice()
{
	cout << "MultiChoice destroyed." << endl;
}

void MultiChoice::PrintDescription()
{
	cout << "Multiple choice is given; only 1 is correct." << endl;
}

void MultiChoice::PlayQuestion(int questionID)
{
	// TODO Implement play question and evaluate functionality.
}

bool MultiChoice::EvaluateAnswer(string answer)
{
	// evaluate and return;
	return false;
}