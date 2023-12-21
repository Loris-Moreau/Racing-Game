#pragma once

#include "textureManager.h"
#include <time.h>
#include "game.h"
#include "gameObjects.h"
#include "trafficList.h"
#include "perk.h"

class Node
{
public:
    perk* data;
    Node* next;

    Node(perk* p)
    {
        data = p;
        next = nullptr;
    }
};

class perkList
{
public:
    Node* head;
    perkList();
    int size();
    void append(perk* data);
    void remove();
    void removeAt(int idx);
    perk* at(int idx);
};
