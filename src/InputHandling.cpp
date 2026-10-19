#include "InputHandling.h"
#include "GameRender.h"

void handleInput()
{
    if (IsKeyPressed(KEY_ENTER))
    {
        gameState = static_cast<Screens>((gameState + 1) % ScreenCount);
    }
}