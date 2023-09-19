#include "GameObject.h"
#include <iostream>

GameObject::GameObject()
{

}

void GameObject::addComponent(std::unique_ptr<Component> component)
{
	std::cout << "Adding component to gameObject" << std::endl;

	component.get()->parent = this;
	components.push_back(std::move(component));
}
