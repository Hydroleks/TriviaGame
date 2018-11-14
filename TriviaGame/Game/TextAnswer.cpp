#pragma once
#include "pch.h"
#include "TextAnswer.h"

#include <iostream>


TextAnswer::TextAnswer()
{
	std::cout << "TextAnswer trivia created.\n";

	mQuestions.push_back("What is 2 + 2 * 2?");
	mAnswers.push_back('6');

	mQuestions.push_back("This text is a string of characters? Yes or no");
	mAnswers.push_back('y');

	mQuestions.push_back("Just type 'i'.");
	mAnswers.push_back('i');
}

TextAnswer::~TextAnswer()
{
	std::cout << "TextAnswer trivia destroyed.\n";
}

void TextAnswer::PrintDescription()
{
	std::cout << "Text base asnwer should take a single line string in. Force all character to lower case and check if match.\n";
}

void TextAnswer::PlayQuestion(int questionID)
{
	// TODO Implement playquestion by id.
}

bool TextAnswer::EvaluateAnswer(std::string answer)
{
	// Evaluate and return true if correct.
	return false;
}