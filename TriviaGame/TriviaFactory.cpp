#pragma once
#include "pch.h"
#include "TriviaFactory.h"
#include "SingleChoice.h"
#include "TextAnswer.h"
#include "MultiChoice.h"

#include <iostream>

using namespace std;

TriviaFactory::TriviaFactory()
{
	cout << "Factory is now open for business." << endl;
}

TriviaFactory::~TriviaFactory()
{
	cout << "Factory shutting down." << endl;
}

unique_ptr<TriviaBase> TriviaFactory::createTrivia(int triviaType)
{
	switch (triviaType)
	{
	case 1:
		return unique_ptr<SingleChoice>(new SingleChoice());
	case 2:
		return unique_ptr<MultiChoice>(new MultiChoice());
	case 3:
		return unique_ptr<TextAnswer>(new TextAnswer());
	default:
		cout << "Invalid input. Please read the menu and select an appropriate choice" << endl;
		break;
	}

	return nullptr;
}

void TriviaFactory::printTriviaMenu() const
{
	cout << "1: Single Choice\n"
		<< "2: Multiple Choice\n"
		<< "3: Text Answers" << endl;
}