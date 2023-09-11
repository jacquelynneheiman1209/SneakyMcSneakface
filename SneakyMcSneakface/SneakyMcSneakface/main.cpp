#include "GameEngine.h"

int main()
{
	GameEngine engine;

	if (!engine.initialize())
	{
		return 1;
	}

	engine.run();
	return 0;
}