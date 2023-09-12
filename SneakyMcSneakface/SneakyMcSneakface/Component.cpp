#include "Component.h"

Component::Component(GameObject* parentObject)
{
    this->parentObject = parentObject;
}

bool Component::initialize()
{
    return true;
}
