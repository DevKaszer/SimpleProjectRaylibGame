#include "game.h"

Game::Game(/* args */)
: player(std::make_unique<Player>(20.0f, 20.0f, 2.0f))
{
    update();
    draw();
}

Game::~Game()
{
    
}

void Game::update(){
    player->update();
}

void Game::draw() const {
    player->draw();
}