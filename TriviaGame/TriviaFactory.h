#pragma once
#include "TriviaBase.h"

#include <memory>


class TriviaFactory final
{
public:
	TriviaFactory();
	// Not a base class to any other class and hence does not need a virtual destrucor
	~TriviaFactory();

	std::unique_ptr<TriviaBase> createTrivia(int triviaType);
	void printTriviaMenu() const;
};