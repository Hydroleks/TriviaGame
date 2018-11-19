#include "pch.h"
#include "TriviaBase.h"

#include <iostream>

TriviaBase::TriviaBase()
{
	std::cout << "Base class constructed.\n";
}

TriviaBase::~TriviaBase()
{
	std::cout << "Base class destroyed.\n";
}

bool TriviaBase::EvaluateAnswer(int questionID, char answer)
{
	if (answer == mAnswers[questionID])
	{
		return true;
	}
	return false;
}

void TriviaBase::PlayQuestion(int questionID)
{
	std::cout << mQuestions[questionID];
}
