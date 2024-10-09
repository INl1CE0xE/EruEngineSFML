#include "nort.h"


Nort::Nort()
{
    //linking sprite and texture
    Texture.loadFromFile("nort.png");
    Sprite.setTexture(Texture);

    //save resolution
    unsigned int xresolution = VideoMode::getDesktopMode().width;
    unsigned int yresolution = VideoMode::getDesktopMode().height;

    //set Nort width and height for any resolution 
    float figureWidth = xresolution * 0.328125;
    float figureHeight = yresolution * 0.79167;

    //set Nort position for any resolution
    
    Position.x = xresolution * 0.09375 + figureWidth + 250;
    Position.y = yresolution * 0.23611;


    // get texture size
    sf::Vector2u textureSize = Texture.getSize();

    // set sprite scale
    Sprite.setScale(
        figureWidth / textureSize.x,
        figureHeight / textureSize.y
    );


}

// make sprite privateonly for draw()
Sprite Nort::getSprite()
{
    return Sprite;
}
void Nort::update(float elapsedTime)
{
    Sprite.setPosition(Position);
}