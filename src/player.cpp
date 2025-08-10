#include "player.h"

Player::Player(float x, float y, float s)
    : position{ x, y }, speed{ s } {}

void Player::update() {
    if (IsKeyDown(KEY_W)) position.y -= speed;
    if (IsKeyDown(KEY_S))  position.y += speed;
    if (IsKeyDown(KEY_A)) position.x += speed;
    if (IsKeyDown(KEY_D))  position.x -= speed;
}

void Player::draw() const {
    DrawCircleV(position, 25, BLUE);
}