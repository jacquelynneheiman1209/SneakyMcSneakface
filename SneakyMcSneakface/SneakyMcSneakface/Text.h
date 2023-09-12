#pragma once
#include "Component.h"

#ifndef TEXT_H
#define TEXT_H

class Text : public Component, IUpdate, IDraw
{
public:
	Text(GameObject* parentObject);

	bool initialize() override;

	void setFont(std::string fontPath);
	void setText(std::string textValue);
	void setTextSize(int textSize);
	void setTextColor(sf::Color textColor);

	void IUpdate::update(float deltaTime)
	{
		// update the text
		if (text.getString() != textValue)
		{
			text.setString(textValue);
			setOrigin();
		}

		// update the text size
		if (text.getCharacterSize() != textSize)
		{
			text.setCharacterSize(textSize);
			setOrigin();
		}

		// update the text color
		if (text.getFillColor() != textColor)
		{
			text.setFillColor(textColor);
		}

		// update the text position
		text.setPosition(parentObject->transform->position);
	}

	void IDraw::draw(sf::RenderWindow* window)
	{
		window->draw(text);
	}

private:
	sf::Font font;
	sf::Text text;
	
	std::string textValue;
	int textSize;
	sf::Color textColor;

	std::string fontPath;

	void setOrigin();
};


#endif // !TEXT_H



