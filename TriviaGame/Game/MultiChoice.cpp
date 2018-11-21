#include "pch.h"
#include "MultiChoice.h"

#include <iostream>


MultiChoice::MultiChoice()
{
	std::cout << "MultiChoice created.\n";

	mQuestions.emplace_back("Milk is a good source of: \nA) Calcium, \nB) Salt, \nC) Moon, \nD) What?\n");
	mAnswers.emplace_back('a');

	mQuestions.emplace_back("Phone is a : \nA) Communication device, \nB) Car, \nC) Desk, \nD) What?\n");
	mAnswers.emplace_back('a');

	mQuestions.emplace_back("Man first landed on the moon in: \nA) 1954, \nB) 1969, \nC) 2014, \nD) 1952\n");
	mAnswers.emplace_back('b');

}

MultiChoice::~MultiChoice()
{
	std::cout << "MultiChoice destroyed.\n";
}

void MultiChoice::PrintDescription()
{
	std::cout << "Multiple choice is given; only 1 is correct.\n";
}