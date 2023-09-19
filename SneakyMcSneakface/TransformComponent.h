#pragma once
#include "Component.h"
#include "IInitialize.h"
#include <SFML/Graphics.hpp>

#ifndef TRANSFORM_COMPONENT_H
#define TRANSFORM_COMPONENT_H

class TransformComponent : public Component, IInitialize
{
public: 
	sf::Vector2f position;

	TransformComponent();

	bool IInitialize::initialize()
	{
		return true;
	}
};

#endif // !TRANSFORM_COMPONENT_H


