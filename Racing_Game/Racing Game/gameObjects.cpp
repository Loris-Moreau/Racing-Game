#include "gameObjects.h"

void gameObjects::update()
{
    objectDimensions.y = posY;
    objectDimensions.x = posX;
}

SDL_Rect* gameObjects::getRect()
{
    return &objectDimensions;
}

void gameObjects::render()
{
    SDL_RenderCopy(renderer, objectTexture, NULL, &objectDimensions);
}

void gameObjects::setSize(int x, int y)
{
    objectDimensions.h = x;
    objectDimensions.w = y;
}

void gameObjects::setXPos(float x)
{
    posX = x;
}

void gameObjects::setYPos(float y)
{
    posY = y;
}

void gameObjects::setPosition(float x, float y)
{
    posX = x;
    posY = y;
}

float gameObjects::getX()
{
    return posX;
}

float gameObjects::getY()
{
    return posY;
}