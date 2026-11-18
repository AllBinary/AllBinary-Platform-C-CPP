#ifndef ORG_ALLBINARY_GAME_DISPLAYABLE_CANVAS_ENDGAMEINFO_H
#define ORG_ALLBINARY_GAME_DISPLAYABLE_CANVAS_ENDGAMEINFO_H
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
typedef struct GameInfo GameInfo;
typedef struct MyCanvas MyCanvas;
typedef struct StringUtil StringUtil;

typedef struct EndGameInfo EndGameInfo;
struct EndGameInfo {
    const char* NORMAL_GAME_OVER_WIN;
    const char* TEASER_DEMO_GAME_END_LAST_LEVEL;
    const char* TEASER_DEMO_GAME_END;
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
// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void EndGameInfo_staticInit(void);
// Registers the class, its superclass, and its methods for the interface calls (java_register_method)
void EndGameInfo_register(void);


#endif // ORG_ALLBINARY_GAME_DISPLAYABLE_CANVAS_ENDGAMEINFO_H
