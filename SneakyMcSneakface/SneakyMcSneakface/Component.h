#pragma once
#include "GameObject.h"

#ifndef COMPONENT_H
#define COMPONENT_H

class Component
{
public:
	Component(GameObject* parentObject);

	virtual bool initialize();

protected:
	GameObject* parentObject;
};

#endif // !COMPONENT_H



