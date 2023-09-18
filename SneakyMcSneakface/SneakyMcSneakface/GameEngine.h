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
};

#endif // !GAME_ENGINE_H



