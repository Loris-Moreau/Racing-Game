#pragma once
#include "gameObjects.h"
#include "trafficList.h"
#include "perkList.h"

class player : public gameObjects
{
private:
    trafficList* totalObstacles;
    perkList* totalPowers;
    int health;
    float speed;
    Uint32 speedTimer;
    Uint32 sheildTimer;
    int score;
    bool sheild;

    void collisionDetection();
    void normalize();
    void activateSpeed();
    void activateSheild();

public:
    int getHealth();
    int getSpeed();
    int getScore();
    void setScore(int x);
    void resetScore();
    void reset();
    player(const char* texturepath, SDL_Renderer* ren, int x, int y, trafficList* allobjects, perkList* allPerks);
    virtual void update() override;
    void move(string direction);

    ~player();
};