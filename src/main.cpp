#include "raylib.h"
#include "game.h"

int main() {
    InitWindow(960, 540, "Moja pierwsza gra w Raylib");
    SetTargetFPS(60);

    Game game;

    while (!WindowShouldClose()) {
        game.update();
        BeginDrawing();
        ClearBackground(
            DARKGRAY);
        game.draw();
        EndDrawing();
    }

    CloseWindow();
    return 0;
}
