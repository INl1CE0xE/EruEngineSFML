#pragma once
#include <SFML/Graphics.hpp>

using namespace sf;

struct Nort
{
    Nort();
    Sprite getSprite();

    // Updates the state of the object based on the elapsed time.
    void update(float elapsedTime);

private:

    // Nort position
    Vector2f Position;

    // add Sprite
    Sprite Sprite;

    // add Texture
    Texture Texture;
};