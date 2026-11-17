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
#include "org/allbinary/logic/communication/log/LogUtil.h"
#include "org/allbinary/logic/string/StringMaker.h"
#include "org/allbinary/logic/string/StringUtil.h"
#include "org/allbinary/string/CommonSeps.h"
#include "org/allbinary/logic/StdUtil.h"
#include "org/allbinary/string/CommonLabels.h"
#include "org/allbinary/util/ABHashtable.h"

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

GameInfo* GameInfo_NONE;
const char* GameInfo_LEVEL_NAME = "LEVEL";

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

// Static fields with runtime initializers: call this once at startup
void GameInfo_staticInit(void) {
    GameInfo_NONE = GameInfo_new(GameTypeFactory_getInstance()->NONE, GameMode_NONE, PlayerTypesFactory_getInstance()->PLAYER_TYPE_ONE, -1, -1);
}

static void GameInfo_initFields(GameInfo* this) {
    this->logUtil = LogUtil_getInstance();
    this->gameInfoData = GameInfoData_getInstance();
    
    
    
    this->highestLevel = 0;
    
    this->NEW_LEVEL = "New Level: ";
    this->SET_CURRENT_LEVEL = "setCurrentLevel";
    this->NEXT_GAME_LEVEL = "nextGameLevel";
}


void GameInfo_init(GameInfo* this, GameType* gameType, GameMode* gameMode, PlayerType* playerType, int32_t highestLevel, int32_t currentLevel) {
    GameInfo_initFields(this);
        this->gameType = gameType;
        this->gameMode = gameMode;
        GameInfo_setHighestLevel(this, highestLevel);
        this->currentLevel = currentLevel;
        this->playerType = playerType;
}

GameInfo* GameInfo_new(GameType* gameType, GameMode* gameMode, PlayerType* playerType, int32_t highestLevel, int32_t currentLevel) {
    GameInfo* this = calloc(1, sizeof(GameInfo));
    GameInfo_init(this, gameType, gameMode, playerType, highestLevel, currentLevel);
    return this;
}


GameType* GameInfo_getGameType(GameInfo* this) {
        return this->gameType;
}


GameMode* GameInfo_getGameMode(GameInfo* this) {
        return this->gameMode;
}


PlayerType* GameInfo_getPlayerType(GameInfo* this) {
        return this->playerType;
}


int32_t GameInfo_getHighestLevel(GameInfo* this) {
        return this->highestLevel;
}


void GameInfo_setHighestLevel(GameInfo* this, int32_t highestLevel) {
        this->highestLevel = highestLevel;
}


int32_t GameInfo_getCurrentLevel(GameInfo* this) {
        return this->currentLevel;
}


void GameInfo_setCurrentLevel(GameInfo* this, int32_t currentLevel) {
        this->currentLevel = currentLevel;
        LogUtil_putF(this->logUtil, JAVA_CALL(JAVA_CALL(StringMaker_append(StringMaker_new(), this->NEW_LEVEL), appendint, GameInfo_getCurrentLevel(this)), toString), this, this->SET_CURRENT_LEVEL);
}


void GameInfo_nextGameLevel(GameInfo* this) {
        if (GameInfo_getCurrentLevel(this) < GameInfo_getHighestLevel(this)) {
            this->currentLevel++;
        }
        LogUtil_putF(this->logUtil, JAVA_CALL(JAVA_CALL(JAVA_CALL(JAVA_CALL(StringMaker_append(StringMaker_new(), CommonLabels_getInstance()->NEXT), append, CommonSeps_getInstance()->SPACE), append, this->NEW_LEVEL), appendint, GameInfo_getCurrentLevel(this)), toString), this, this->NEXT_GAME_LEVEL);
}


void GameInfo_previousGameLevel(GameInfo* this) {
        if (GameInfo_getCurrentLevel(this) > 1) {
            this->currentLevel--;
        }
}


bool GameInfo_isLastLevel(GameInfo* this) {
        if (GameInfo_getCurrentLevel(this) >= GameInfo_getHighestLevel(this)) {
            return true;
        } else {
            return false;
        }
}


ABHashtable* GameInfo_toHashtable(GameInfo* this) {
        ABHashtable* hashtable = StdUtil_createHashtable(StdUtil_getInstance());
        ABHashtable_put(hashtable, this->gameInfoData->GAME_TYPE, JAVA_CALL(GameInfo_getGameType(this), toString));
        ABHashtable_put(hashtable, this->gameInfoData->GAME_MODE, GameMode_toString(this->gameMode));
        ABHashtable_put(hashtable, this->gameInfoData->PLAYER_TYPE, PlayerType_toString(this->playerType));
        ABHashtable_put(hashtable, this->gameInfoData->HIGHEST_LEVEL, java_string_of(GameInfo_getHighestLevel(this)));
        ABHashtable_put(hashtable, this->gameInfoData->CURRENT_LEVEL, java_string_of(this->currentLevel));
        return hashtable;
}


const char* GameInfo_toString(GameInfo* this) {
        StringMaker* stringBuffer = StringMaker_new();
        CommonSeps* commonSeps = CommonSeps_getInstance();
        StringMaker_append(stringBuffer, this->gameInfoData->GAME_TYPE);
        StringMaker_append(stringBuffer, commonSeps->EQUALS);
        StringMaker_append(stringBuffer, JAVA_CALL(GameInfo_getGameType(this), toString));
        StringMaker_append(stringBuffer, commonSeps->COMMA_SEP);
        StringMaker_append(stringBuffer, this->gameInfoData->GAME_MODE);
        StringMaker_append(stringBuffer, commonSeps->EQUALS);
        StringMaker_append(stringBuffer, GameMode_toString(this->gameMode));
        StringMaker_append(stringBuffer, commonSeps->COMMA_SEP);
        StringMaker_append(stringBuffer, this->gameInfoData->PLAYER_TYPE);
        StringMaker_append(stringBuffer, commonSeps->EQUALS);
        StringMaker_append(stringBuffer, StringUtil_toString(StringUtil_getInstance(), this->playerType));
        StringMaker_append(stringBuffer, commonSeps->COMMA_SEP);
        StringMaker_append(stringBuffer, this->gameInfoData->HIGHEST_LEVEL);
        StringMaker_append(stringBuffer, commonSeps->EQUALS);
        StringMaker_appendint(stringBuffer, GameInfo_getHighestLevel(this));
        StringMaker_append(stringBuffer, commonSeps->COMMA_SEP);
        StringMaker_append(stringBuffer, this->gameInfoData->CURRENT_LEVEL);
        StringMaker_append(stringBuffer, commonSeps->EQUALS);
        StringMaker_appendint(stringBuffer, this->currentLevel);
        return StringMaker_toString(stringBuffer);
}

