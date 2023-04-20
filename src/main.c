#include "raylib.h"

int main(void) {
    SetTargetFPS(60);
    InitWindow(1280, 720, "Hello raylib!");

    while (!WindowShouldClose()) {
        BeginDrawing();
        ClearBackground(BLACK);

        DrawText("Hello World!", 40, 40, 48, WHITE);

        EndDrawing();
    }

    CloseWindow();
}
