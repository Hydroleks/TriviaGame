#pragma once
#include "TriviaBase.h"

#include <vector>

class TextAnswer : public TriviaBase
{
public:
	TextAnswer();
	~TextAnswer();

	virtual void PrintDescription();
};