#pragma once
#include "IInput.h"
#include "IUpdate.h"
#include "IDraw.h"
#include "GameObject.h"

#ifndef SCENE_H
#define SCENE_H

class Scene : public IInput, IUpdate, IDraw
{
public:
	Scene();
	
	bool initialize();

	void AddGameObject(std::unique_ptr<GameObject> gameObject);
	std::string getName();

	void IInput::handleInput(sf::RenderWindow* window, sf::Event* event)
	{
		for (auto it = gameObjects.begin(); it != gameObjects.end(); it++)
		{
			it->second->handleInput(window, event);
		}
	}

	void IUpdate::update(float deltaTime)
	{
		for (auto it = gameObjects.begin(); it != gameObjects.end(); it++)
		{
			it->second->update(deltaTime);
		}
	}

	void IDraw::draw(sf::RenderWindow* window)
	{
		for (auto it = gameObjects.begin(); it != gameObjects.end(); it++)
		{
			it->second->draw(window);
		}
	}

private:
	std::string sceneName;
	std::map<std::string, std::unique_ptr<GameObject>> gameObjects;
};

#endif // !SCENE_H



