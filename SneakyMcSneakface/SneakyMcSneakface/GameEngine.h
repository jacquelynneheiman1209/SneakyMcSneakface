#pragma once
#include "IInitialize.h"

#ifndef GAME_ENGINE_H
#define GAME_ENGINE_H

class GameEngine : IInitialize
{
public:
	GameEngine();

	// initialize the game engine
	bool IInitialize::initialize()
	{
		return true;
	}
};

#endif // !GAME_ENGINE_H



