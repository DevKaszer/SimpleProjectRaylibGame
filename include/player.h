#pragma once
#include "raylib.h"

class Player

{
private:
    Vector2 position;
    float speed;
public:
    Player
    (float x, float y, float s);
    void update();
    void draw() const;
};
