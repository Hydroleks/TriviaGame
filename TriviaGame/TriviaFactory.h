#pragma once
#include "TriviaBase.h"

#include <memory>


class TriviaFactory
{
public:
	TriviaFactory();
	~TriviaFactory();

	std::unique_ptr<TriviaBase> createTrivia(int triviaType);
	void printTriviaMenu() const;
};