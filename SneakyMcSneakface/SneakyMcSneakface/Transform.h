#pragma once
#include "Component.h"

#ifndef TRANSFORM_H
#define TRANSFORM_H

class Transform : public Component
{
public:
	Transform();

	bool initialize() override;
};

#endif // !TRANSFORM_H



