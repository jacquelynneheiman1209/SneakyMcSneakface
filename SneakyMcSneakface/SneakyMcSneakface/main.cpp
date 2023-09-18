#include "GameEngine.h"

int main()
{
	GameEngine gameEngine;

	if (!gameEngine.initialize())
	{
		return 1; 
	}

	gameEngine.run();
	return 0;
}