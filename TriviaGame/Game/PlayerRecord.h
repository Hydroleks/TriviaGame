#pragma once
#include "pch.h"

#include <string>

class PlayerRecord
{
private:
	std::string PlayerName;
	int points;

public:
	PlayerRecord(std::string name);
	~PlayerRecord() = default;
};