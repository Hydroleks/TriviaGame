#pragma once
#include "pch.h"
#include "SingleChoice.h"

#include <iostream>

SingleChoice::SingleChoice()
{
	std::cout << "SingleChoice (true or false?) trivia created\n";

	mQuestions.emplace_back("This is a question? True or false\n");
	mAnswers.emplace_back('t');

	mQuestions.emplace_back("This is a string. True or false\n");
	mAnswers.emplace_back('t');

	mQuestions.emplace_back("Google is a space company. True or false\n");
	mAnswers.emplace_back('f');
}

SingleChoice::~SingleChoice()
{
	std::cout << "SingleChoice trivia game destroyed.\n";
}

void SingleChoice::PrintDescription()
{
	std::cout << "True or false trivia. Only single answer is correct.\n";
}