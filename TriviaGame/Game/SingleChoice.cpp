#pragma once
#include "pch.h"
#include "SingleChoice.h"
#include <iostream>

using namespace std;

SingleChoice::SingleChoice()
	: TriviaBase()
{
	cout << "SingleChoice (true or false?) trivia created" << endl;
}

SingleChoice::~SingleChoice()
{
	cout << "SingleChoice trivia game destroyed." << endl;
}

void SingleChoice::PrintDescription()
{
	cout << "True or false trivia. Only single answer is correct." << endl;
}