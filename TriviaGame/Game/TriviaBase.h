#pragma once
#include <string>
#include <vector>

// Later: yse ' = default' on constructor and destructor
// and get rid of the .cpp, unless there is something
// common across the child classes.
// Maybe can use a counter here to see how many correct
// and how many wrong answers have been selected.

class TriviaBase
{
protected:
	std::vector<std::string> mQuestions;
	std::vector<char> mAnswers;

public:
	TriviaBase();
	virtual ~TriviaBase();

	virtual void PrintDescription() = 0;
	virtual bool EvaluateAnswer(std::string answer) = 0;
	virtual void PlayQuestion(int questionID) = 0;
};