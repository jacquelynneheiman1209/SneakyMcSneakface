#pragma once

// THIS IS AN INTERFACE

#ifndef I_UPDATE_H
#define I_UPDATE_H

class IUpdate
{
public:
	virtual void update(float deltaTime) = 0;
};
#endif // !I_UPDATE_H
