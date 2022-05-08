#pragma once
#define WIN32_LEAN_AND_MEAN

#include "game.h"
#include "Map.h"
#include <vector>

//=============================================================================
// Create game class
//=============================================================================
class ActionGame : public Game
{
protected:
    Map* map;
    
private:
    int mapData[100][100]; //2d mapdata
    // variables

public:
    // Constructor
    ActionGame();

    // Destructor
    virtual ~ActionGame();

    // Initialize the game
    void initialize(HWND hwnd);
    void update();      // must override pure virtual from Game
    void ai();          // "
    void collisions();  // "
    void render();      // "
    void releaseAll();
    void resetAll();
};
