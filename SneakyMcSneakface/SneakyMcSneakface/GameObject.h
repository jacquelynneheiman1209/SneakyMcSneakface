#pragma once
#include "IInitialize.h"
#include "IInput.h"
#include "IUpdate.h"
#include "IDraw.h"

#ifndef GAME_OBJECT_H
#define GAME_OBJECT_H

class GameObject : IInitialize, IInput, IUpdate, IDraw
{

public:
	GameObject();

	bool IInitialize::initialize()
	{

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

#endif // !GAME_OBJECT_H


