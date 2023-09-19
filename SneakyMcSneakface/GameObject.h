#pragma once
#include "IInitialize.h"
#include "IInput.h"
#include "IUpdate.h"
#include "IDraw.h"
#include "TransformComponent.h"
#include <iostream>

#ifndef GAME_OBJECT_H
#define GAME_OBJECT_H

class Component;

class GameObject : public IInitialize, IInput, IUpdate, IDraw
{
public:
	TransformComponent transform;

	GameObject();

	void addComponent(std::unique_ptr<Component> component);

	bool IInitialize::initialize()
	{
		return true;
	}

	void IInput::handleInput(sf::RenderWindow* window, sf::Event* event)
	{
		for (auto it = components.begin(); it != components.end(); it++)
		{
			IInput* component = dynamic_cast<IInput*>(it->get());

			if (component != nullptr)
			{
				component->handleInput(window, event);
			}
		}
	}

	void IUpdate::update(float deltaTime)
	{
		for (auto it = components.begin(); it != components.end(); it++)
		{
			IUpdate* component = dynamic_cast<IUpdate*>(it->get());

			if (component != nullptr)
			{
				component->update(deltaTime);
			}
		}
	}

	void IDraw::draw(sf::RenderWindow* window)
	{
		for (auto it = components.begin(); it != components.end(); it++)
		{
			IDraw* component = dynamic_cast<IDraw*>(it->get());

			if (component != nullptr)
			{
				component->draw(window);
			}
		}
	}

private:
	std::vector<std::unique_ptr<Component>> components;
};

#endif // !GAME_OBJECT_H



