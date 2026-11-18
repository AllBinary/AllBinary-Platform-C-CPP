// Generated Code Do Not Modify
#include "org/allbinary/game/GameStrings.h"


static GameStrings* GameStrings_instance;


void GameStrings_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
    GameStrings_instance = GameStrings_new();
}

void GameStrings_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("GameStrings", nullptr);
}

static void GameStrings_initFields(GameStrings* this) {
    this->PROCESS_TICK = "processTick";
    this->ON_GAME_INITIALIZED = "onGameInitialized";
    this->UPDATESURFACE = "updateSurface";
    this->ON_SET_DISPLAYABLE = "onSetDisplayable";
    this->UNPAUSE = "unPause";
    this->TOGGLE_MENU = "toggleMenu";
    this->SET_GAME_OVER = "setGameOver";
    this->GAME_STATE = "Game State: ";
    this->SET_GAME_STATE = "setGameState";
    this->STOP_GAME_CANVAS_RUNNABLE_INTERFACE = "stopGameCanvasRunnableInterface";
}

void GameStrings_init(GameStrings* this) {
    GameStrings_register();
    GameStrings_initFields(this);
}

GameStrings* GameStrings_new(void) {
    GameStrings* this = java_object_alloc(sizeof(GameStrings), "GameStrings");
    GameStrings_init(this);
    return this;
}


GameStrings* GameStrings_getInstance(void) {
        return (GameStrings_staticInit(), GameStrings_instance);
}

