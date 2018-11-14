#pragma once
#include "pch.h"
#include "TriviaFactory.h"
#include "SingleChoice.h"
#include "TextAnswer.h"
#include "MultiChoice.h"

#include <iostream>

TriviaFactory::TriviaFactory()
{
	std::cout << "Factory is now open for business.\n";
}

TriviaFactory::~TriviaFactory()
{
	std::cout << "Factory shutting down.\n";
}

std::unique_ptr<TriviaBase> TriviaFactory::createTrivia(int triviaType)
{
	switch (triviaType)
	{
	case 1:
		return std::make_unique<SingleChoice>();
	case 2:
		return std::make_unique<MultiChoice>();
	case 3:
		return std::make_unique<TextAnswer>();
	default:
		std::cout << "Invalid input. Please read the menu and select an appropriate choice\n";
		break;
	}

	return nullptr;
}

void TriviaFactory::printTriviaMenu() const
{
	std::cout << "1: Single Choice\n"
		<< "2: Multiple Choice\n"
		<< "3: Text Answers\n";
}