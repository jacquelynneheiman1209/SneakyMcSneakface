#pragma once
#include <string>

#ifndef I_SCENE_LOADER_H
#define I_SCENE_LOADER_H

class ISceneLoader
{
public:
	virtual void loadScene(std::string sceneName) = 0;
};

#endif // !I_SCENE_LOADER_H



