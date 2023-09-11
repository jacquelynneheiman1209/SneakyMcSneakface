#pragma once
#include <SFML/Graphics.hpp>

#ifndef I_DRAW_H
#define I_DRAW_H

class IDraw
{
public:
	virtual void draw(sf::RenderWindow* window) = 0;
};

#endif // !I_DRAW_H



