#pragma once
#include "engine.h"

using namespace sf;

void Engine::update(float dtAsSeconds)
{
    Markus.update(dtAsSeconds);
    Nort.update(dtAsSeconds);
}