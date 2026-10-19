#include <raylib.h>
#include "GameRender.h"
#include "InputHandling.h"

const int height = 600;
const int width = 600;

int main()
{

    InitWindow(width, height, "Puzzle Dungeon");
    SetTargetFPS(60);
    ToggleFullscreen();
    while (!WindowShouldClose())
    {
        BeginDrawing();
        render();
        handleInput();
        EndDrawing();
    }
    CloseWindow();
    return 0;
}