/*
 *
 * AllBinary Open License Version 1
 * Copyright (c) 2011 AllBinary
 * 
 * By agreeing to this license you and any business entity you represent are
 * legally bound to the AllBinary Open License Version 1 legal agreement.
 * 
 * You may obtain the AllBinary Open License Version 1 legal agreement from
 * AllBinary or the root directory of AllBinary's AllBinary Platform repository.
 * 
 * Created By: Travis Berthelot
 *  
 */
// Generated Code Do Not Modify
// package org.allbinary.game

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"

typedef struct GameInfoCopyFactory GameInfoCopyFactory;
struct GameInfoCopyFactory {
    char unused;
};


GameInfoCopyFactory* GameInfoCopyFactory_new(void);
GameInfo* GameInfoCopyFactory_getInstanceMaxLevel(GameInfo* gameInfo, int32_t maxLevel);
GameInfo* GameInfoCopyFactory_getInstance(GameInfo* gameInfo);

void GameInfoCopyFactory_init(GameInfoCopyFactory* this) {
}

GameInfoCopyFactory* GameInfoCopyFactory_new(void) {
    GameInfoCopyFactory* this = calloc(1, sizeof(GameInfoCopyFactory));
    GameInfoCopyFactory_init(this);
    return this;
}


GameInfo* GameInfoCopyFactory_getInstanceMaxLevel(GameInfo* gameInfo, int32_t maxLevel) {
        return GameInfo_new(GameInfo_getGameType(gameInfo), GameInfo_getGameMode(gameInfo), GameInfo_getPlayerType(gameInfo), maxLevel, GameInfo_getCurrentLevel(gameInfo));
}


GameInfo* GameInfoCopyFactory_getInstance(GameInfo* gameInfo) {
        return GameInfo_new(GameInfo_getGameType(gameInfo), GameInfo_getGameMode(gameInfo), GameInfo_getPlayerType(gameInfo), GameInfo_getHighestLevel(gameInfo), GameInfo_getCurrentLevel(gameInfo));
}

