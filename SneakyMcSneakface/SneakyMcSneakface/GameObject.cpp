#include "GameObject.h"

GameObject::GameObject()
{
	transform = new Transform();
}

bool GameObject::initialize()
{
	return true;
}

template<class T>
void GameObject::AddComponent(T component)
{
	components.push_back(std::move(component));
}
