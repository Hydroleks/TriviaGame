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

	int GetQuestionCount() { return mQuestions.size(); };

	virtual void PrintDescription() = 0;
	virtual bool EvaluateAnswer(int questionId, char answer);
	virtual void PlayQuestion(int questionID);
};