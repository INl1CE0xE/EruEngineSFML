#pragma once
#include <SFML/Graphics.hpp>
#include "markus.h";
#include "nort.h"

using namespace sf;

struct Engine
{
private:

    RenderWindow Window;

    // Texture + Sprite for Background
    Sprite BackgroundSprite;
    Texture BackgroundTexture;

    Markus Markus;
    Nort Nort;

    void input();
    void update(float dtAsSeconds);
    void draw();

public:
    // Engine build
    Engine();

    // start all private func
    void start();

};