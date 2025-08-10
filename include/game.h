#pragma once
#include "raylib.h"
#include <memory>
#include "include/player.h"

class Game
{
private:
    std::unique_ptr<Player> player;
public:

    Game();
    ~Game();
    void update();
    void draw() const;
};

