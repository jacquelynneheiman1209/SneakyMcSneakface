#pragma once
#include "IInitialize.h"
#include "IInput.h"
#include "IUpdate.h"
#include "IDraw.h"
#include "Component.h"
#include <iostream>

#ifndef GAME_OBJECT_H
#define GAME_OBJECT_H

class Component;

class GameObject : public IInitialize, IInput, IUpdate, IDraw
{
public:
	GameObject();

	void addComponent(std::unique_ptr<Component> component);

	bool IInitialize::initialize()
	{
		return true;
	}

	void IInput::handleInput(sf::RenderWindow* window, sf::Event* event)
	{
		std::cout << "GameObject.h : handleInput();" << std::endl;
	}

	void IUpdate::update(float deltaTime)
	{
		std::cout << "GameObject.h : update();" << std::endl;
	}

	void IDraw::draw(sf::RenderWindow* window)
	{
		std::cout << "GameObject.h : draw();" << std::endl;
	}

private:
	std::vector<std::unique_ptr<Component>> components;
};

#endif // !GAME_OBJECT_H



