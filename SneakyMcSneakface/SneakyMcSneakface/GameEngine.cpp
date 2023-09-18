#include "GameEngine.h"

GameEngine::GameEngine()
{

}

void GameEngine::run()
{
	windowWidth = sf::VideoMode::getDesktopMode().width;
	windowHeight = sf::VideoMode::getDesktopMode().height;

	sf::RenderWindow window(sf::VideoMode(windowWidth, windowHeight), "SneakyMcSneakface", sf::Style::Fullscreen);

	while (window.isOpen())
	{
		// handle input
		sf::Event event;

		while (window.pollEvent(event))
		{
			handleInput(&window, &event);
		}

		// update the game
		float deltaTime = gameClock.restart().asSeconds();
		update(deltaTime);

		// draw the game
		draw(&window);
	}
}
