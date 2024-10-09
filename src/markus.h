#pragma once
#include <SFML/Graphics.hpp>

using namespace sf;

struct Markus
{
    Markus();
    Sprite getSprite();

    // Updates the state of the object based on the elapsed time.
    void update(float elapsedTime);

private:

    // Markus position
    Vector2f Position;

    // add Sprite
    Sprite Sprite;

    // add Texture
    Texture Texture;
};