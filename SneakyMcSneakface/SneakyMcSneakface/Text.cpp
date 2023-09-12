#include "Text.h"
#include <iostream>

Text::Text(GameObject* parentObject) : Component(parentObject)
{
	fontPath = "";
	textValue = "Text";
	characterSize = 20;
	textColor = sf::Color::White;
	setOrigin();

	this->parentObject = parentObject;
}

bool Text::initialize()
{
	if (fontPath == "")
	{
		std::cout << "Text.cpp : The font path is not set" << std::endl;
		return false;
	}

	if (!font.loadFromFile(fontPath))
	{
		std::cout << "Text.cpp : Could not load 'font' from '" << fontPath << "'" << std::endl;
		return false;
	}

	return true;
}

void Text::setFont(std::string fontPath)
{
	this->fontPath = fontPath;
}

void Text::setTextValue(std::string textValue)
{
	this->textValue = textValue;
}

void Text::setTextSize(int characterSize)
{
	this->characterSize = characterSize;
}

void Text::setTextColor(sf::Color textColor)
{
	this->textColor = textColor;
}

void Text::setOrigin()
{
	sf::FloatRect textBounds = text.getLocalBounds();

	sf::Vector2f origin;
	origin.x = textBounds.left + (textBounds.width / 2);
	origin.y = textBounds.top + (textBounds.height / 2);

	text.setOrigin(origin);
}
