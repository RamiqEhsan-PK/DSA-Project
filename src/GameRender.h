#pragma once
#include <raylib.h>

enum Screens
{
    MAIN_MENU,
    LOADING_SCREEN,
    STACK_ROOM,
    QUEUE_ROOM,
    BST_ROOM,
    GRAPH_ROOM,
    End_SCREEN
};

extern Screens gameState;
extern int ScreenCount;

class Visuals
{
public:
    void Menu();
    void Loading();
    void StackRoom();
    void QueueRoom();
    void BSTRoom();
    void GraphRoom();
    void EndScreen();
};
extern Visuals RenderGraphics;

void render();
