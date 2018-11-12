#pragma once
#include "pch.h"
#include "TextAnswer.h"
#include <iostream>


using namespace std;

TextAnswer::TextAnswer()
	: TriviaBase()
{
	cout << "TextAnswer trivia created." << endl;
}

TextAnswer::~TextAnswer()
{
	cout << "TextAnswer trivia destroyed." << endl;
}

void TextAnswer::PrintDescription()
{
	cout << "Text base asnwer should take a single line string in. Force all character to lower case and check if match." << endl;
}