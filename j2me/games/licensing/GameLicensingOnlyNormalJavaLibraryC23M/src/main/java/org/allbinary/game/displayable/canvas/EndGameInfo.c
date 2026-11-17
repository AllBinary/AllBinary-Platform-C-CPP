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
// package org.allbinary.game.displayable.canvas

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
#include "org/allbinary/game/GameInfo.h"
#include "org/allbinary/graphics/displayable/MyCanvas.h"
#include "org/allbinary/logic/string/StringUtil.h"

typedef struct EndGameInfo EndGameInfo;
struct EndGameInfo {
    const char* NORMAL_GAME_OVER;
    const char* NORMAL_GAME_OVER_WIN;
    const char* gameOverStr;
    const char* winStr;
};


EndGameInfo* EndGameInfo_new(void);

void EndGameInfo_init(EndGameInfo* this);
void EndGameInfo_update(EndGameInfo* this, GameInfo* gameInfo, MyCanvas* myCanvas);
const char* EndGameInfo_getGameOverStr(EndGameInfo* this);
void EndGameInfo_setGameOverStr(EndGameInfo* this, const char* gameOverStr);
const char* EndGameInfo_getWinStr(EndGameInfo* this);
void EndGameInfo_setWinStr(EndGameInfo* this, const char* winStr);

static void EndGameInfo_initFields(EndGameInfo* this) {
    this->NORMAL_GAME_OVER = "Game Over";
    this->NORMAL_GAME_OVER_WIN = "You Won";
    this->gameOverStr = StringUtil_getInstance()->EMPTY_STRING;
    this->winStr = this->gameOverStr;
}


void EndGameInfo_init(EndGameInfo* this) {
    EndGameInfo_initFields(this);
}

EndGameInfo* EndGameInfo_new(void) {
    EndGameInfo* this = calloc(1, sizeof(EndGameInfo));
    EndGameInfo_init(this);
    return this;
}


void EndGameInfo_update(EndGameInfo* this, GameInfo* gameInfo, MyCanvas* myCanvas) {
        EndGameInfo_setGameOverStr(this, this->NORMAL_GAME_OVER);
        EndGameInfo_setWinStr(this, this->NORMAL_GAME_OVER_WIN);
}


const char* EndGameInfo_getGameOverStr(EndGameInfo* this) {
        return this->gameOverStr;
}


void EndGameInfo_setGameOverStr(EndGameInfo* this, const char* gameOverStr) {
        this->gameOverStr = gameOverStr;
}


const char* EndGameInfo_getWinStr(EndGameInfo* this) {
        return this->winStr;
}


void EndGameInfo_setWinStr(EndGameInfo* this, const char* winStr) {
        this->winStr = winStr;
}

