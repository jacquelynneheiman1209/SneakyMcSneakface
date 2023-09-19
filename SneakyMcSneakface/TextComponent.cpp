#include "TextComponent.h"
#include "GameObject.h"

TextComponent::TextComponent(std::string text, sf::Color color, int size)
{
	this->text = text;
	this->color = color;
	this->size = size;
}

void TextComponent::setTextPosition()
{
	_text.setPosition(parent->transform.position);

	std::cout << "Text Component Position: " << _text.getPosition().x << ", " << _text.getPosition().y << std::endl;
}

void TextComponent::setOrigin()
{
	sf::FloatRect textBounds = _text.getLocalBounds();

	sf::Vector2f origin;
	origin.x = textBounds.left + (textBounds.width / 2);
	origin.y = textBounds.top + (textBounds.height / 2);

	_text.setOrigin(origin);
}
