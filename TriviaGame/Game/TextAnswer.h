#pragma once
#include "TriviaBase.h"

class TextAnswer : public TriviaBase
{
public:
	TextAnswer();
	~TextAnswer();

	virtual void PrintDescription();
};