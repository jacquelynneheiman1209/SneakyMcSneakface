#include "Transform.h"

Transform::Transform(GameObject* parentObject) : Component(parentObject)
{

}

bool Transform::initialize()
{
	return true;
}
