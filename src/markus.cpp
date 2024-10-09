#include "markus.h"


Markus::Markus()
{
    //linking sprite and texture
	Texture.loadFromFile("markus.png");
	Sprite.setTexture(Texture);

    //save resolution
    unsigned int xresolution = VideoMode::getDesktopMode().width;
    unsigned int yresolution = VideoMode::getDesktopMode().height;
    
    //set Markus position for any resolution
    Position.x = xresolution * 0.09375;
    Position.y = yresolution * 0.23611;

    //set Markus width and height for any resolution 
    float figureWidth = xresolution * 0.328125;
    float figureHeight = yresolution * 0.79167;

    // get texture size
    sf::Vector2u textureSize = Texture.getSize();

    // set sprite scale
    Sprite.setScale(
        figureWidth / textureSize.x,
        figureHeight / textureSize.y
    );


}

// make sprite privateonly for draw()
Sprite Markus::getSprite()
{
	return Sprite;
}
void Markus::update(float elapsedTime)
{
	Sprite.setPosition(Position);
}