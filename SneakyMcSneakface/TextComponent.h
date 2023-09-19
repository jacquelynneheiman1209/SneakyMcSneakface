#pragma once
#include "Component.h"
#include "IUpdate.h"
#include "IDraw.h"
#include <iostream>

#ifndef TEXT_COMPONENT_H
#define TEXT_COMPONENT_H

class TextComponent : public Component, IUpdate, IDraw
{
public:
    std::string text = "Text";
    sf::Color color = sf::Color::White;
    int size = 25;

    TextComponent(std::string text = "Text", sf::Color color = sf::Color::White, int size = 25);

    void setTextPosition();

    bool IInitialize::initialize() override
    {
        if (!_font.loadFromFile(_fontPath))
        {
            std::cout << "TextComponent.h : Could not load 'font' from '" << _fontPath << "'" << std::endl;
            return false;
        }

        return true;
    }

    void IUpdate::update(float deltaTime)
    {
        _text.setString(text);
        _text.setFillColor(color);
        _text.setCharacterSize(size);
        setOrigin();
        setTextPosition();
    }

    void IDraw::draw(sf::RenderWindow* window)
    {
        window->draw(_text);
    }

private:
    sf::Font _font;
    sf::Text _text;

    std::string _fontPath = "Assets/Fonts/accidental_presidency.ttf";

    void setOrigin();
};

#endif // !TEXT_COMPONENT_H




