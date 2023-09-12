#pragma once
#include <string>
#include <vector>
#include "IInput.h"
#include "IUpdate.h"
#include "IDraw.h"
#include "Transform.h"

#ifndef GAME_OBJECT_H
#define GAME_OBJECT_H

class GameObject : public IInput, IUpdate, IDraw
{
public :
	std::string name;
	Transform* transform;

	GameObject();

	bool initialize();

	void IInput::handleInput(sf::RenderWindow* window, sf::Event* event)
	{
		// handle input in the components
		for (auto it = components.begin(); it != components.end(); it++)
		{
			IInput* component = dynamic_cast<IInput*>(it->get());

			if (component == nullptr)
			{
				continue;
			}

			component->handleInput(window, event);
		}
	}

	void IUpdate::update(float deltaTime)
	{
		// update the components
		for (auto it = components.begin(); it != components.end(); it++)
		{
			IUpdate* component = dynamic_cast<IUpdate*>(it->get());

			if (component == nullptr)
			{
				continue;
			}

			component->update(deltaTime);
		}
	}

	void IDraw::draw(sf::RenderWindow* window)
	{
		// draw the components
		for (auto it = components.begin(); it != components.end(); it++)
		{
			IDraw* component = dynamic_cast<IDraw*>(it->get());

			if (component == nullptr)
			{
				continue;
			}

			component->draw(window);
		}
	}

	template<class T>
	void AddComponent(T component);

protected:
	std::vector<std::unique_ptr<Component>> components;
};

#endif // !GAME_OBJECT_H



