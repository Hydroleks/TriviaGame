#pragma once


// Later: yse ' = default' on constructor and destructor
// and get rid of the .cpp, unless there is something
// common across the child classes.
// Maybe can use a counter here to see how many correct
// and how many wrong answers have been selected.

class TriviaBase
{
public:
	TriviaBase();
	virtual ~TriviaBase();

	virtual void PrintDescription() = 0;
};