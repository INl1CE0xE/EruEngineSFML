#pragma once
#include "Engine.h"

void Engine::input()
{
    //Escape
    if (Keyboard::isKeyPressed(Keyboard::Escape))
    {
        Window.close();
    }


}