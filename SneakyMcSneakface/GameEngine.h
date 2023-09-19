#pragma once
#include "IInitialize.h"
#include "IInput.h"
#include "IUpdate.h"
#include "IDraw.h"

#ifndef GAME_ENGINE_H
#define GAME_ENGINE_H

class GameEngine : public IInitialize, IInput, IUpdate, IDraw
{
public:
	GameEngine();

	void run();

	bool IInitialize::initialize()
	{
		return true;
	}

	void IInput::handleInput(sf::RenderWindow* window, sf::Event* event)
	{

	}

	void IUpdate::update(float deltaTime)
	{

	}

	void IDraw::draw(sf::RenderWindow* window)
	{
		window->clear();

		// draw things here

		window->display();
	}

private:
	int windowWidth = 0;
	int windowHeight = 0;

	sf::Clock gameClock;
};

#endif // !GAME_ENGINE_H



