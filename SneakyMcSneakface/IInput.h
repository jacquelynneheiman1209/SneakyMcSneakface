#pragma once
#include <SFML/Graphics.hpp>
#ifndef I_INPUT_H
#define I_INPUT_H

class IInput
{
public:
	virtual void handleInput(sf::RenderWindow* window, sf::Event* event) = 0;
};

#endif // !I_INPUT_H
