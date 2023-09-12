#pragma once
#include "GameObject.h"
#include "Component.h"

#ifndef TRANSFORM_H
#define TRANSFORM_H

class Transform : public Component
{
public:
	sf::Vector2f position;

	Transform(GameObject* parentObject);

	bool initialize() override;
};

#endif // !TRANSFORM_H



