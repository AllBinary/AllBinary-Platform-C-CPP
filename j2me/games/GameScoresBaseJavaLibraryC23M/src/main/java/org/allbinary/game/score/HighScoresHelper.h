#ifndef ORG_ALLBINARY_GAME_SCORE_HIGHSCORESHELPER_H
#define ORG_ALLBINARY_GAME_SCORE_HIGHSCORESHELPER_H
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
typedef struct HighScoresHelperBase HighScoresHelperBase;
typedef struct HighScores HighScores;
typedef struct CircularIndexUtil CircularIndexUtil;
#if __has_include("org/allbinary/util/CircularIndexUtil.h")
#include "org/allbinary/util/CircularIndexUtil.h"
#endif
#include "org/allbinary/game/score/HighScoresHelperBase.h"

typedef struct HighScoresHelper HighScoresHelper;
struct HighScoresHelper {
    HighScoresHelperBase base;
    CircularIndexUtil* circularIndexUtil;
    int32_t lastIndex;
};


HighScoresHelper* HighScoresHelper_new(void);
void HighScoresHelper_init(HighScoresHelper* this);

void HighScoresHelper_setHighScoresArray(HighScoresHelper* this, HighScores** highScoresArrayP);

HighScores* HighScoresHelper_getNextHighScores(HighScoresHelper* this);

bool HighScoresHelper_isAnyHighScores(HighScoresHelper* this);
#ifndef HighScoresHelper_setSelectedHighScores
#define HighScoresHelper_setSelectedHighScores HighScoresHelperBase_setSelectedHighScores
#endif
#ifndef HighScoresHelper_getSelectedHighScores
#define HighScoresHelper_getSelectedHighScores HighScoresHelperBase_getSelectedHighScores
#endif
#ifndef HighScoresHelper_getHighScoresArray
#define HighScoresHelper_getHighScoresArray HighScoresHelperBase_getHighScoresArray
#endif
#ifndef HighScoresHelper_selectHighScores
#define HighScoresHelper_selectHighScores HighScoresHelperBase_selectHighScores
#endif
// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void HighScoresHelper_staticInit(void);
// Registers the class, its superclass, and its methods for the interface calls (java_register_method)
void HighScoresHelper_register(void);


#endif // ORG_ALLBINARY_GAME_SCORE_HIGHSCORESHELPER_H
