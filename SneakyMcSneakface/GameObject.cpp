#include "GameObject.h"
#include <iostream>

GameObject::GameObject()
{
	transform = TransformComponent();
	transform.position = sf::Vector2f(960, 540);
}

void GameObject::addComponent(std::unique_ptr<Component> component)
{
	std::cout << "Adding component to gameObject" << std::endl;

	component.get()->parent = this;
	components.push_back(std::move(component));
}
