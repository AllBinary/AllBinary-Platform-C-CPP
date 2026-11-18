#ifndef ORG_ALLBINARY_GAME_SCORE_HIGHSCORE_H
#define ORG_ALLBINARY_GAME_SCORE_HIGHSCORE_H
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
// package org.allbinary.game.score

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
typedef struct GameInfo GameInfo;
typedef struct StringMaker StringMaker;
typedef struct CommonSeps CommonSeps;
#include "java/io/ByteArrayOutputStream.h"
#include "java/io/DataOutputStream.h"
#if __has_include("org/allbinary/game/GameInfo.h")
#include "org/allbinary/game/GameInfo.h"
#endif
#include "java/lang/Long.h"

typedef struct HighScore HighScore;
struct HighScore {
    int32_t id;
    const char* name;
    GameInfo* gameInfo;
    int64_t score;
    const char* scoreString;
};


HighScore* HighScore_new(int32_t id, const char* name, GameInfo* gameInfo, int64_t score);

void HighScore_init(HighScore* this, int32_t id, const char* name, GameInfo* gameInfo, int64_t score);

int32_t HighScore_getId(HighScore* this);

const char* HighScore_getName(HighScore* this);

int64_t HighScore_getScore(HighScore* this);

int8_t* HighScore_getAsBytes(HighScore* this);

GameInfo* HighScore_getGameInfo(HighScore* this);

const char* HighScore_getScoreString(HighScore* this);

void HighScore_setName(HighScore* this, const char* name);

const char* HighScore_toString(HighScore* this);
#define HighScore_new4 HighScore_new
#define HighScore_init4 HighScore_init
// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void HighScore_staticInit(void);
// Registers the class, its superclass, and its methods for the interface calls (java_register_method)
void HighScore_register(void);

#if __has_include("org/allbinary/game/GameInfo.h")
#include "org/allbinary/game/GameInfo.h"
#endif

#endif // ORG_ALLBINARY_GAME_SCORE_HIGHSCORE_H
