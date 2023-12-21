#pragma once
#include "textureManager.h"
#include <time.h>
#include "game.h"

class gameObjects
{
protected:
	SDL_Texture* objectTexture;
	SDL_Renderer* renderer;
	string type;

	SDL_Rect GOcrop, objectDimensions;

public:
	int posX;
	int posY;
	gameObjects(const char* texturepath, SDL_Renderer* ren, int x, int y);
	gameObjects() {};

	virtual void update();
	virtual void render();
	virtual void setSize(int x, int y);
	virtual SDL_Rect* getRect();
	virtual void setXPos(float x);
	virtual void setYPos(float y);
	virtual void setPosition(float x, float y);
	float getX();
	float getY();
};