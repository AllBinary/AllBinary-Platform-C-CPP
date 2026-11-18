#ifndef ORG_ALLBINARY_GAME_SCORE_HIGHSCORESHELPER2_H
#define ORG_ALLBINARY_GAME_SCORE_HIGHSCORESHELPER2_H
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
typedef struct NullHighScoresSingletonFactory NullHighScoresSingletonFactory;
typedef struct HighScores HighScores;
typedef struct CircularIndexUtil CircularIndexUtil;
#if __has_include("org/allbinary/util/CircularIndexUtil.h")
#include "org/allbinary/util/CircularIndexUtil.h"
#endif
#include "org/allbinary/game/score/HighScoresHelperBase.h"
#if __has_include("org/allbinary/game/score/HighScores.h")
#include "org/allbinary/game/score/HighScores.h"
#endif

typedef struct HighScoresHelper2 HighScoresHelper2;
struct HighScoresHelper2 {
    HighScoresHelperBase base;
    CircularIndexUtil* circularIndexUtil;
    HighScores* selectedHighScores;
};


HighScoresHelper2* HighScoresHelper2_new(void);
void HighScoresHelper2_init(HighScoresHelper2* this);

void HighScoresHelper2_setSelectedHighScores(HighScoresHelper2* this, HighScores* selectedHighScores);

HighScores* HighScoresHelper2_getSelectedHighScores(HighScoresHelper2* this);

void HighScoresHelper2_setHighScoresArray(HighScoresHelper2* this, HighScores** highScoresArrayP);

void HighScoresHelper2_selectHighScores(HighScoresHelper2* this);
#ifndef HighScoresHelper2_getNextHighScores
#define HighScoresHelper2_getNextHighScores HighScoresHelperBase_getNextHighScores
#endif
#ifndef HighScoresHelper2_isAnyHighScores
#define HighScoresHelper2_isAnyHighScores HighScoresHelperBase_isAnyHighScores
#endif
#ifndef HighScoresHelper2_getHighScoresArray
#define HighScoresHelper2_getHighScoresArray HighScoresHelperBase_getHighScoresArray
#endif
// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void HighScoresHelper2_staticInit(void);
// Registers the class, its superclass, and its methods for the interface calls (java_register_method)
void HighScoresHelper2_register(void);


#endif // ORG_ALLBINARY_GAME_SCORE_HIGHSCORESHELPER2_H
