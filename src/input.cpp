#pragma once
#include "engine.h"

void Engine::input()
{
    //Escape
    if (Keyboard::isKeyPressed(Keyboard::Escape))
    {
        Window.close();
    }


}