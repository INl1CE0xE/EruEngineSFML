#include "engine.h"

void Engine::draw()
{
    // clear last tamer
    Window.clear(Color::White);

    // draw background
    Window.draw(BackgroundSprite);
    
    Window.draw(Markus.getSprite());
    Window.draw(Nort.getSprite());

    //display all
    Window.display();
}