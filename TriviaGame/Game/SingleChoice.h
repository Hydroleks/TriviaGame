#pragma once
#include "TriviaBase.h"

#include <vector>

class SingleChoice : public TriviaBase
{
public:
	SingleChoice();
	~SingleChoice();

	virtual void PrintDescription();
	virtual bool EvaluateAnswer(std::string answer);
	virtual void PlayQuestion(int questionID);
};