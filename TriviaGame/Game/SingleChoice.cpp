#pragma once
#include "pch.h"
#include "SingleChoice.h"

#include <iostream>

SingleChoice::SingleChoice()
{
	std::cout << "SingleChoice (true or false?) trivia created\n";

	mQuestions.push_back("This is a question? True or false\n");
	mAnswers.push_back('t');

	mQuestions.push_back("This is a string. True or false\n");
	mAnswers.push_back('t');

	mQuestions.push_back("Google is a space company. True or false\n");
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