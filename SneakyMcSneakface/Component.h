#pragma once
#include "IInitialize.h"

#ifndef COMPONENT_H
#define COMPONENT_H
class GameObject;
class Component : public IInitialize
{
public:
	GameObject* parent;

	Component();

	virtual bool IInitialize::initialize()
	{
		return true;
	}

private:
	
};

#endif // !COMPONENT_H



