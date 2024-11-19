#include "raylib.h" #include

void DrawDanger(int x, int y, int h, int l, float scale = 1.0f) { DrawRectangle(x, y, h * scale, l * scale, RED); }

void DrawLife(int x, int y, int h, int l, float scale = 1.0f) { DrawRectangle(x, y, h * scale, l * scale, GREEN); } void DrawPers(int x, int y, int h, int l, float scale = 1.0f) { DrawRectangle(x, y, h * scale, l * scale, LIGHTGRAY);

}

int main() { int WeighScreen = 800; int HightScreen = 600; InitWindow(WeighScreen, HightScreen, "Lobos"); SetTargetFPS(60);

float wallX = 50, wallY = 250, wallSize = 20;
float wellX = 700, wellY = 20, wellWidth = 80, wellHeight = 20;
int DangerPosX = 400, DangerPosY = 300;
int DangerX = 40, DangerY = 20;
int lifePosX = 760, lifePosY = 10;
int LifeX = 30, LifeY = 30;
int playerX = 400, playerY = 500;
int speedPlayer = 5;
int playrHight = 50, playrWeight = 50;

while (!WindowShouldClose()) {

    if (IsKeyDown(KEY_RIGHT) && playerX < WeighScreen - playrWeight) { playerX += speedPlayer; }
    if (IsKeyDown(KEY_LEFT) && playerX > 0) { playerX -= speedPlayer; }
    if (IsKeyDown(KEY_DOWN) && playerY < HightScreen - playrHight) { playerY += speedPlayer; }
    if (IsKeyDown(KEY_UP) && playerY > 0) { playerY -= speedPlayer; }
    if (CheckCollisionBoxes)
    

    BeginDrawing();
    ClearBackground(DARKBROWN);
    DrawDanger(DangerPosX, DangerPosY, DangerX, DangerY);
    DrawLife(lifePosX, lifePosY, LifeX, LifeY);
    DrawLife(lifePosX-40, lifePosY, LifeX, LifeY);
    DrawLife(lifePosX - 80, lifePosY, LifeX, LifeY);
    DrawPers(playerX, playerY, playrHight, playrWeight);
    EndDrawing();
}

CloseWindow();
return 0;
}

int(main){ float wallX = 50, wallY = 250, wallSize = 20; float wellX = 700, wellY = 20, wellWidth = 80, wellHeight = 20; Rectangle playerRec = { playerX, playerY, 20, 20 }; Rectangle wallRec = { wallX, wallY, wallSize, wallSize }; Rectangle wellRec = { wellX, wellY, wellWidth, wellHeight };

if (CheckCollisionRecs(playerRec, wallRec)) {         
    if (IsKeyDown(KEY_W)) playerY += playerSpeed;            if (IsKeyDown(KEY_S)) playerY -= playerSpeed;
    if (IsKeyDown(KEY_A)) playerX += playerSpeed;            if (IsKeyDown(KEY_D)) playerX -= playerSpeed;
}
if (CheckCollisionRecs(playerRec, wellRec)) {
 
    if (IsKeyDown(KEY_S)) playerY -= playerSpeed;
    if (IsKeyDown(KEY_A)) playerX += playerSpeed;            if (IsKeyDown(KEY_D)) playerX -= playerSpeed;
}
