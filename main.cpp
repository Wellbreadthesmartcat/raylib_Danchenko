#include "raylib.h"
#include <cstdlib>










void
DrawPers(int x, int y, int h, int l, float scale = 1.0f) {
    DrawRectangle(x, y, h * scale, l * scale, LIGHTGRAY);
    

}

int main() {
    int WeighScreen = 800;
    int HightScreen = 600;
    InitWindow(WeighScreen, HightScreen, "Lobos");
    SetTargetFPS(60);

    int playerX = 400, playerY = 500;
    int speedPlayer = 5;
    int playrHight = 50, playrWeight = 50;

    while (!WindowShouldClose()) {

        if (IsKeyDown(KEY_RIGHT) && playerX < WeighScreen - playrWeight) { playerX += speedPlayer; }
        if (IsKeyDown(KEY_LEFT) && playerX > 0) { playerX -= speedPlayer; }
        if (IsKeyDown(KEY_DOWN) && playerY < WeighScreen - playrWeight) { playerY += speedPlayer; }
        if (IsKeyDown(KEY_UP) && playerY > 0) { playerY -= speedPlayer; }
        if (IsKeyPressed()



        BeginDrawing();
        ClearBackground(RAYWHITE);
        DrawPers(playerX, playerY, playrHight, playrWeight);
        EndDrawing();
    }

    CloseWindow();
    return 0;
}

