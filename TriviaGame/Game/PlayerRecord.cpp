#pragma 
#include "pch.h"
#include "PlayerRecord.h"

#include <iostream>

PlayerRecord::PlayerRecord(std::string name)
	: PlayerName(name)
	, points(0)
{
	std::cout << "Player created: " << name << "\n";
}

void PlayerRecord::IncreasePoints(int points)
{
	this->points += points;
}

void PlayerRecord::PrintPlayDetails()
{
	std::cout << "Player Name: " << PlayerName << "\nPoints acquired: " << points << "\n";
}