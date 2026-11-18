// Generated Code Do Not Modify
#include "org/allbinary/game/GameInfoData.h"


static GameInfoData* GameInfoData_instance;



void GameInfoData_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
    GameInfoData_instance = GameInfoData_new();
}

void GameInfoData_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("GameInfoData", nullptr);
}

static void GameInfoData_initFields(GameInfoData* this) {
    this->GAME_TYPE = "GAME_TYPE";
    this->GAME_MODE = "GAME_MODE";
    this->PLAYER_TYPE = "PLAYER_TYPE";
    this->HIGHEST_LEVEL = "HIGHEST_LEVEL";
    this->CURRENT_LEVEL = "CURRENT_LEVEL";
    this->SOFTWARE_INFORMATION = "SOFTWARE_INFORMATION";
}


GameInfoData* GameInfoData_getInstance(void) {
        return (GameInfoData_staticInit(), GameInfoData_instance);
}


void GameInfoData_init(GameInfoData* this) {
    GameInfoData_register();
    GameInfoData_initFields(this);
}

GameInfoData* GameInfoData_new(void) {
    GameInfoData* this = java_object_alloc(sizeof(GameInfoData), "GameInfoData");
    GameInfoData_init(this);
    return this;
}

