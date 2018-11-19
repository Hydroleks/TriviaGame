#pragma once
#include "TriviaBase.h"

#include <vector>

class MultiChoice : public TriviaBase
{
public:
	MultiChoice();
	~MultiChoice();

	virtual void PrintDescription();
};