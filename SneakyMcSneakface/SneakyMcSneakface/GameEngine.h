#pragma once
#include "IInput.h"
#include "IUpdate.h"
#include "IDraw.h"

#ifndef GAME_ENGINE_H
#define GAME_ENGINE_H

class GameEngine : public IInput, IUpdate, IDraw
{
public:
	GameEngine();

	bool initialize();
	void run();

	void IInput::handleInput(sf::RenderWindow* window, sf::Event* event)
	{
		// handle the game's input
	}

	void IUpdate::update(float deltaTime)
	{
		// update the game
	}

	void IDraw::draw(sf::RenderWindow* window)
	{
		window->clear();

		// draw the game

		window->display();
	}

private:
	sf::Clock gameClock;
	float deltaTime;
};

#endif // !GAME_ENGINE_H



