#include "Scene.h"

Scene::Scene()
{

}

bool Scene::initialize()
{
	return true;
}

void Scene::AddGameObject(std::unique_ptr<GameObject> gameObject)
{
	gameObjects.insert({ gameObject.get()->name, std::move(gameObject) });
}

std::string Scene::getName()
{
	return sceneName;
}
