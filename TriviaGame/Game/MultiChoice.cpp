#include "pch.h"
#include "MultiChoice.h"
#include <iostream>

using namespace std;

MultiChoice::MultiChoice()
	: TriviaBase()
{
	cout << "MultiChoice created." << endl;
}

MultiChoice::~MultiChoice()
{
	cout << "MultiChoice destroyed." << endl;
}

void MultiChoice::PrintDescription()
{
	cout << "Multiple choice is given; only 1 is correct." << endl;
}