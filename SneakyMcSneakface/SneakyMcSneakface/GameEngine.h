#pragma once
#include "IInitialize.h"
#include "IInput.h"
#include "IUpdate.h"
#include "IDraw.h"

#ifndef GAME_ENGINE_H
#define GAME_ENGINE_H

class GameEngine : IInitialize, IInput, IUpdate, IDraw
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

	}

private:
	float windowWidth = 0;
	float windowHeight = 0;

	sf::Clock gameClock;
};

#endif // !GAME_ENGINE_H



