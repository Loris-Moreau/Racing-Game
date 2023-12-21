#include "perk.h"
#include "textureManager.h"

perk::perk(const char* texturepath, SDL_Renderer* ren, int x, int y)
{
    renderer = ren;
    objectTexture = textureManager::loadTexture(texturepath, renderer);

    posX = x;
    posY = y;

    objectDimensions.h = 32;
    objectDimensions.w = 32;

    type = "perk";
}

void perk::update()
{
    posY += verticalspeed;

    objectDimensions.y = posY;
    objectDimensions.x = posX;
}

string perk::getspecial()
{
    return special;
}

void perk::setSpecial(string num)
{
    special = num;
}
