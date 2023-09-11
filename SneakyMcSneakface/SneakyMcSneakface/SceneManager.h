#pragma once
#include <map>
#include <string>
#include "ISceneLoader.h"
#include "IInput.h"
#include "IUpdate.h"
#include "IDraw.h"
#include "Scene.h"

#ifndef SCENE_MANAGER_H
#define SCENE_MANAGER_H

class SceneManager : public ISceneLoader, IInput, IUpdate, IDraw
{
public:
	SceneManager();

	bool initialize();

	/// <summary>
	/// Loads the specified scene
	/// </summary>
	/// <param name="sceneName"></param>
	void ISceneLoader::loadScene(std::string sceneName)
	{
		currentScene = sceneName;
		scenes[currentScene]->initialize();
	}

	void IInput::handleInput(sf::RenderWindow* window, sf::Event* event)
	{
		scenes[currentScene]->handleInput(window, event);
	}

	void IUpdate::update(float deltaTime)
	{
		scenes[currentScene]->update(deltaTime);
	}

	void IDraw::draw(sf::RenderWindow* window)
	{
		scenes[currentScene]->draw(window);
	}

	void AddScene(Scene* scene);

private:
	std::map<std::string, Scene*> scenes;
	std::string currentScene;
};

#endif // !SCENE_MANAGER_H

