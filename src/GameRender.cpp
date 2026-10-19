#include "GameRender.h"

Screens gameState = MAIN_MENU;
Visuals RenderGraphics;
int ScreenCount = 7;

void Visuals::Menu()
{
    ClearBackground(BLACK);
    DrawText("Puzzle Dungeon", 100, 100, 40, WHITE);
}

void Visuals::Loading()
{
    ClearBackground(BLUE);
    DrawText("Loading...", 100, 100, 40, WHITE);
}
void Visuals::StackRoom()
{
    ClearBackground(GRAY);
    DrawText("Stack Room", 100, 100, 40, WHITE);
}
void Visuals::QueueRoom()
{
    ClearBackground(DARKPURPLE);
    DrawText("Queue Room", 100, 100, 40, WHITE);
}
void Visuals::BSTRoom()
{
    ClearBackground(BROWN);
    DrawText("BST Room", 100, 100, 40, WHITE);
}
void Visuals::GraphRoom()
{
    ClearBackground(DARKGRAY);
    DrawText("Graph Room", 100, 100, 40, WHITE);
}
void Visuals::EndScreen()
{
    ClearBackground(DARKBLUE);
    DrawText("You win", 100, 100, 40, WHITE);
}

void render()
{
    switch (gameState)
    {
    case MAIN_MENU:
        RenderGraphics.Menu();
        break;

    case LOADING_SCREEN:
        RenderGraphics.Loading();
        break;

    case STACK_ROOM:
        RenderGraphics.StackRoom();
        break;

    case QUEUE_ROOM:
        RenderGraphics.QueueRoom();
        break;

    case BST_ROOM:
        RenderGraphics.BSTRoom();
        break;

    case GRAPH_ROOM:
        RenderGraphics.GraphRoom();
        break;

    case End_SCREEN:
        RenderGraphics.EndScreen();
        break;
    }
}