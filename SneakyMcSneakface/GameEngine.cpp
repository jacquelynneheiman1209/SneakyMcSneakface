#include "GameEngine.h"
#include "GameObject.h"

GameEngine::GameEngine()
{
	
}

void GameEngine::run()
{
	windowWidth = sf::VideoMode::getDesktopMode().width;
	windowHeight = sf::VideoMode::getDesktopMode().height; 

	sf::RenderWindow window(sf::VideoMode(windowWidth, windowHeight), "SneakyMcSneakface", sf::Style::Fullscreen);

	GameObject gameObject;
	gameObject.addComponent(std::unique_ptr<Component>(new Component()));

	while (window.isOpen())
	{
		sf::Event event;

		while (window.pollEvent(event))
		{
			handleInput(&window, &event);
			gameObject.handleInput(&window, &event);
		}

		float deltaTime = gameClock.restart().asSeconds();
		update(deltaTime);
		gameObject.update(deltaTime);

		draw(&window);
		gameObject.draw(&window);
	}
}
