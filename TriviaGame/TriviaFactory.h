#pragma once
#include "TriviaBase.h"

#include <memory>


class TriviaFactory
{
public:
	TriviaFactory();
	virtual ~TriviaFactory();

	std::unique_ptr<TriviaBase> createTrivia(int triviaType);
	void printTriviaMenu() const;
};