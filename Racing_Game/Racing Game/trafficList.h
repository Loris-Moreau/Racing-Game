#pragma once

#include "textureManager.h"
#include <time.h>
#include "game.h"
#include "gameObjects.h"
#include "traffic.h"

class NodeObstacle
{
public:
    Traffic* data;
    NodeObstacle* next;

    NodeObstacle(Traffic* p)
    {
        data = p;
        next = nullptr;
    }
};

class trafficList
{
public:
    NodeObstacle* head;

    trafficList();

    int size();

    void append(Traffic* data);

    void remove();
    void removeAt(int idx);

    Traffic* at(int idx);
};
