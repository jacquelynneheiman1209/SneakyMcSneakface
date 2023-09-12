#include "SceneManager.h"
#include <iostream>

SceneManager::SceneManager()
{
	scenes["Test"] = new Scene();
	currentScene = "Test";

	GameObject testObject = GameObject();

}

bool SceneManager::initialize()
{
	if (!scenes[currentScene]->initialize())
	{
		std::cout << "SceneManager.cpp : Unable to initialize " << currentScene << " scene." << std::endl;
		return false;
	}

	return true;
}

void SceneManager::AddScene(Scene* scene)
{
	if (scene != nullptr)
	{
		std::string sceneName = scene->getName();

		// if the scene doesn't yet exist in our scenes map
		if (scenes.find(sceneName) == scenes.end())
		{
			// add the scene to our map
			scenes.insert({ sceneName, scene });
		}
		else
		{
			std::cout << "SceneManager.cpp : Could not add " << sceneName << " because the scene already exists" << std::endl;
		}
	}
}
