#ifndef ORG_ALLBINARY_GAME_GAMEINFO_H
#define ORG_ALLBINARY_GAME_GAMEINFO_H
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
typedef struct GameTypeFactory GameTypeFactory;
typedef struct GameMode GameMode;
typedef struct PlayerTypesFactory PlayerTypesFactory;
typedef struct GameInfoData GameInfoData;
typedef struct GameType GameType;
typedef struct PlayerType PlayerType;
typedef struct LogUtil LogUtil;
typedef struct StringMaker StringMaker;
typedef struct StringUtil StringUtil;
typedef struct CommonSeps CommonSeps;
typedef struct StdUtil StdUtil;
typedef struct CommonLabels CommonLabels;
typedef struct ABHashtable ABHashtable;
#if __has_include("org/allbinary/logic/communication/log/LogUtil.h")
#include "org/allbinary/logic/communication/log/LogUtil.h"
#endif
#include "java/lang/Integer.h"
#if __has_include("org/allbinary/game/GameMode.h")
#include "org/allbinary/game/GameMode.h"
#endif
#if __has_include("org/allbinary/game/GameInfoData.h")
#include "org/allbinary/game/GameInfoData.h"
#endif
#if __has_include("org/allbinary/game/GameType.h")
#include "org/allbinary/game/GameType.h"
#endif
#if __has_include("org/allbinary/game/PlayerType.h")
#include "org/allbinary/game/PlayerType.h"
#endif

typedef struct GameInfo GameInfo;
struct GameInfo {
    LogUtil* logUtil;
    GameInfoData* gameInfoData;
    GameType* gameType;
    GameMode* gameMode;
    PlayerType* playerType;
    int32_t highestLevel;
    int32_t currentLevel;
    const char* NEW_LEVEL;
    const char* SET_CURRENT_LEVEL;
    const char* NEXT_GAME_LEVEL;
};

extern GameInfo* GameInfo_NONE;
extern const char* GameInfo_LEVEL_NAME;

GameInfo* GameInfo_new(GameType* gameType, GameMode* gameMode, PlayerType* playerType, int32_t highestLevel, int32_t currentLevel);

void GameInfo_init(GameInfo* this, GameType* gameType, GameMode* gameMode, PlayerType* playerType, int32_t highestLevel, int32_t currentLevel);

GameType* GameInfo_getGameType(GameInfo* this);

GameMode* GameInfo_getGameMode(GameInfo* this);

PlayerType* GameInfo_getPlayerType(GameInfo* this);

int32_t GameInfo_getHighestLevel(GameInfo* this);

void GameInfo_setHighestLevel(GameInfo* this, int32_t highestLevel);

int32_t GameInfo_getCurrentLevel(GameInfo* this);

void GameInfo_setCurrentLevel(GameInfo* this, int32_t currentLevel);

void GameInfo_nextGameLevel(GameInfo* this);

void GameInfo_previousGameLevel(GameInfo* this);

bool GameInfo_isLastLevel(GameInfo* this);

ABHashtable* GameInfo_toHashtable(GameInfo* this);

const char* GameInfo_toString(GameInfo* this);
#define GameInfo_new5 GameInfo_new
#define GameInfo_init5 GameInfo_init
// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void GameInfo_staticInit(void);
// Registers the class, its superclass, and its methods for the interface calls (java_register_method)
void GameInfo_register(void);

#if __has_include("org/allbinary/util/ABHashtable.h")
#include "org/allbinary/util/ABHashtable.h"
#endif

#endif // ORG_ALLBINARY_GAME_GAMEINFO_H
