// TriviaGame.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include "TriviaFactory.h"
#include "PlayerRecord.h"

#include <iostream>
#include <memory>
#include <stdlib.h> 
#include <algorithm>
#include <utility>


using namespace std;

int main()
{
	string playerName;
	cout << "Please enter a player name: ";
	getline(cin, playerName);

	auto pr = std::make_unique<PlayerRecord>(playerName);

	cout << "0 - Shut down.\n"
		<< "8 - Print player details.\n"
		<< "9 - Print Menu.\n";

	int input;
	auto tf = std::make_unique<TriviaFactory>();

	while (cin >> input)
	{
		cout << endl;

		if (input == 0)
		{
			tf.reset();
			break;
		}
		else if (input == 9)
		{
			tf->printTriviaMenu();
		}
		else if (input == 8)
		{
			pr->PrintPlayDetails();
		}
		else
		{
			auto tb = tf->createTrivia(input);
			int questionId = rand() % tb->GetQuestionCount();
			tb->PlayQuestion(questionId);

			string tempInput;
			cout << "Enter your answer: ";
			cin.ignore();
			getline(cin, tempInput);
			//cout << tempInput;
			//cin >> tempInput;
			transform(tempInput.begin(), tempInput.end(), tempInput.begin(), ::tolower);
			if (tb->EvaluateAnswer(questionId, tempInput[0]))
			{
				cout << "\nCorrect!!!\n";
				pr->IncreasePoints(1);
			}


			//start accepting input
			//tb->EvaluateAnswer('character/string')
			// add 1 or 0 points to player profile.

			// Here will need to create the type of trivia game
			// and use that pointer to play the game itself.
			// After tha point the player should be able to leave the game
			// and create a new kind of trivia game.
		}
	}

	cout << "Hello World!" << endl;
}
