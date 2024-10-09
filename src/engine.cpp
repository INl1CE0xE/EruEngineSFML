#include "engine.h"

Engine::Engine()
{
    // Get screen resolution, create SFML window and View
    Vector2f resolution;
    resolution.x = VideoMode::getDesktopMode().width;
    resolution.y = VideoMode::getDesktopMode().height;

    Window.create(VideoMode(resolution.x, resolution.y),
        "EruEngine",
        Style::Fullscreen);

    // set texture for background
    BackgroundTexture.loadFromFile("lab.jpg");

    //Linking sprite and texture
    BackgroundSprite.setTexture(BackgroundTexture);

    //get the size of the window and sprite size.

    Vector2u textureSize = BackgroundTexture.getSize();
    Vector2u windowSize = Window.getSize();
    BackgroundSprite.setScale(
        static_cast<float>(windowSize.x) / textureSize.x,
        static_cast<float>(windowSize.y) / textureSize.y
    );

}

void Engine::start()
{
    // time
    Clock clock;

    while (Window.isOpen())
    {
        // restart timer and write time in dt
        Time dt = clock.restart();

        float dtAsSeconds = dt.asSeconds();

        input();
        update(dtAsSeconds);
        draw();
    }
}