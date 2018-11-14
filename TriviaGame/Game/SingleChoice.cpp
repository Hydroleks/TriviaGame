#pragma once
#include "pch.h"
#include "SingleChoice.h"

#include <iostream>

SingleChoice::SingleChoice()
{
	std::cout << "SingleChoice (true or false?) trivia created\n";

	mQuestions.push_back("This is a question? True or false");
	mAnswers.push_back('t');

	mQuestions.push_back("This is a string. True or false");
	mAnswers.push_back('t');

	mQuestions.push_back("Google is a space company. True or false");
	mAnswers.push_back('f');
}

SingleChoice::~SingleChoice()
{
	std::cout << "SingleChoice trivia game destroyed.\n";
}

void SingleChoice::PrintDescription()
{
	std::cout << "True or false trivia. Only single answer is correct.\n";
}

void SingleChoice::PlayQuestion(int quesionID)
{
	//TODO Implement question display and then evalute.
}

bool SingleChoice::EvaluateAnswer(std::string answer)
{
	// return true or false to gain 1 or 0 points.
	return false;
}