#include "GameEngine.h"

GameEngine::GameEngine()
{
	deltaTime = 0;
}

bool GameEngine::initialize()
{
	return true;
}

void GameEngine::run()
{
	sf::RenderWindow window(sf::VideoMode(), "Sneaky McSneakface", sf::Style::Fullscreen);

	while (window.isOpen())
	{
		// handle game input
		sf::Event event;
		while (window.pollEvent(event))
		{
			handleInput(&window, &event);
		}

		// update the game
		deltaTime = gameClock.restart().asSeconds();
		update(deltaTime);

		// draw the game
		draw(&window);
	}
}
