#pragma once
#define WIN32_LEAN_AND_MEAN

#include <windows.h>

//-----------------------------------------------
// Useful macros
//-----------------------------------------------
// Safely delete pointer referenced item
#define SAFE_DELETE(ptr)       { if (ptr) { delete (ptr); (ptr)=NULL; } }
// Safely release pointer referenced item
#define SAFE_RELEASE(ptr)      { if(ptr) { (ptr)->Release(); (ptr)=NULL; } }
// Safely delete pointer referenced array
#define SAFE_DELETE_ARRAY(ptr) { if(ptr) { delete [](ptr); (ptr)=NULL; } }

//-----------------------------------------------
//                  Constants
//-----------------------------------------------
// window
const char CLASS_NAME[] = "ActionGame";
const char GAME_TITLE[] = "Action Game 1";
constexpr const bool FULLSCREEN = false;              // windowed or fullscreen
constexpr const UINT GAME_WIDTH =  1280;               // width of game in pixels
constexpr const UINT GAME_HEIGHT = 720;               // height of game in pixels
 
// game
constexpr const double PI = 3.14159265;
constexpr const float FRAME_RATE  = 200.0f;               // the target frame rate (frames/sec)
constexpr const float MIN_FRAME_RATE = 10.0f;             // the minimum frame rate
constexpr const float MIN_FRAME_TIME = 1.0f/FRAME_RATE;   // minimum desired time for 1 frame
constexpr const float MAX_FRAME_TIME = 1.0f/MIN_FRAME_RATE; // maximum time used in calculations

// key mappings
// In this game simple constants are used for key mappings. If variables were used
// it would be possible to save and restore key mappings from a data file.
constexpr const UCHAR ESC_KEY      = VK_ESCAPE;   // escape key
constexpr const UCHAR ALT_KEY      = VK_MENU;     // Alt key
constexpr const UCHAR ENTER_KEY    = VK_RETURN;   // Enter key


