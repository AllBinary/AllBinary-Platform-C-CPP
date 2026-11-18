// Generated Code Do Not Modify
#include "org/allbinary/game/GameInfoCopyFactory.h"
#include "org/allbinary/game/GameInfo.h"





void GameInfoCopyFactory_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
}

void GameInfoCopyFactory_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("GameInfoCopyFactory", nullptr);
}

void GameInfoCopyFactory_init(GameInfoCopyFactory* this) {
    GameInfoCopyFactory_register();
}

GameInfoCopyFactory* GameInfoCopyFactory_new(void) {
    GameInfoCopyFactory* this = java_object_alloc(sizeof(GameInfoCopyFactory), "GameInfoCopyFactory");
    GameInfoCopyFactory_init(this);
    return this;
}


GameInfo* GameInfoCopyFactory_getInstanceMaxLevel(GameInfo* gameInfo, int32_t maxLevel) {
        return GameInfo_new(GameInfo_getGameType(gameInfo), GameInfo_getGameMode(gameInfo), GameInfo_getPlayerType(gameInfo), maxLevel, GameInfo_getCurrentLevel(gameInfo));
}


GameInfo* GameInfoCopyFactory_getInstance(GameInfo* gameInfo) {
        return GameInfo_new(GameInfo_getGameType(gameInfo), GameInfo_getGameMode(gameInfo), GameInfo_getPlayerType(gameInfo), GameInfo_getHighestLevel(gameInfo), GameInfo_getCurrentLevel(gameInfo));
}

