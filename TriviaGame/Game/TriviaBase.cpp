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
	return  answer == mAnswers[questionID];
}

void TriviaBase::PlayQuestion(int questionID)
{
	std::cout << mQuestions[questionID];
}
