#include "traffic.h"

Traffic::Traffic(const char* texturepath, SDL_Renderer* ren, int x, int y)
{
    renderer = ren;
    objectTexture = textureManager::loadTexture(texturepath, renderer);

    posX = x;
    posY = y;

    objectDimensions.h = 60;
    objectDimensions.w = 30;

    type = "Traffic";
}

void Traffic::setSpeed(int num)
{
    verticalspeed = num;
}

int Traffic::effect()
{
    return damage;
}

void Traffic::setDamage(int num)
{
    damage = num;
}

void Traffic::update()
{
    posY += rand() % 5 + 5;

    objectDimensions.y = posY;
    objectDimensions.x = posX;
}
