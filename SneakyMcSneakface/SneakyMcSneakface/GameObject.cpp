#include "GameObject.h"

GameObject::GameObject()
{
	name = "GameObject";
	transform = new Transform(this);
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
