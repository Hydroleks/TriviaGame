#pragma once
#include <memory>
#include "TriviaBase.h"

class TriviaFactory
{
public:
	TriviaFactory();
	~TriviaFactory();

	std::unique_ptr<TriviaBase> createTrivia(int triviaType);
	void printTriviaMenu() const;
};