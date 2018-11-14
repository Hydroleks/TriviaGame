#pragma once
#include "pch.h"
#include "SingleChoice.h"

#include <iostream>

using namespace std;

SingleChoice::SingleChoice()
	: TriviaBase()
{
	cout << "SingleChoice (true or false?) trivia created" << endl;

	mQuestions.push_back("This is a question? True or false");
	mAnswers.push_back('t');

	mQuestions.push_back("This is a string. True or false");
	mAnswers.push_back('t');

	mQuestions.push_back("Google is a space company. True or false");
	mAnswers.push_back('f');
}

SingleChoice::~SingleChoice()
{
	cout << "SingleChoice trivia game destroyed." << endl;
}

void SingleChoice::PrintDescription()
{
	cout << "True or false trivia. Only single answer is correct." << endl;
}

void SingleChoice::PlayQuestion(int quesionID)
{
	//TODO Implement question display and then evalute.
}

bool SingleChoice::EvaluateAnswer(string answer)
{
	// return true or false to gain 1 or 0 points.
	return false;
}