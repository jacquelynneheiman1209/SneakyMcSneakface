#pragma once
#include "GameObject.h"
#include "Component.h"
#include "IUpdate.h"
#include "IDraw.h"

#ifndef TEXT_H
#define TEXT_H

class Text : public Component, IUpdate, IDraw
{
public:
	Text(GameObject* parentObject);

	bool initialize() override;

	void setFont(std::string fontPath);
	void setTextValue(std::string textValue);
	void setTextSize(int characterSize);
	void setTextColor(sf::Color textColor);

	void IUpdate::update(float deltaTime)
	{
		if (text.getString() != textValue)
		{
			text.setString(textValue);
		}

		if (text.getCharacterSize() != characterSize)
		{
			text.setCharacterSize(characterSize);
		}

		if (text.getFillColor() != textColor)
		{
			text.setFillColor(textColor);
		}

		if (text.getPosition() != parentObject->transform->position)
		{
			text.setPosition(parentObject->transform->position);
		}
	}

	void IDraw::draw(sf::RenderWindow* window)
	{
		window->draw(text);
	}

private:
	sf::Font font;
	sf::Text text;

	std::string fontPath;
	std::string textValue;

	int characterSize;

	sf::Color textColor;

	void setOrigin();
};

#endif // !TEXT_H



