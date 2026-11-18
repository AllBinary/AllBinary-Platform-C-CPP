#ifndef ORG_ALLBINARY_GAME_SCORE_HIGHSCORES_H
#define ORG_ALLBINARY_GAME_SCORE_HIGHSCORES_H
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
typedef struct HighScoresInterface HighScoresInterface;
typedef struct HighScore HighScore;
typedef struct StringMaker StringMaker;
typedef struct CommonLabels CommonLabels;
typedef struct CommonSeps CommonSeps;
typedef struct BasicArrayList BasicArrayList;
typedef struct BasicArrayListD BasicArrayListD;
#if __has_include("org/allbinary/util/BasicArrayList.h")
#include "org/allbinary/util/BasicArrayList.h"
#endif
#include "org/allbinary/game/score/HighScoresInterface.h"

typedef struct HighScores HighScores;
struct HighScores {
    HighScoresInterface HighScoresInterface_interface;
    BasicArrayList* orderedHighScoresList;
    const char* name;
    const char* heading;
    const char* columnOneHeading;
    const char* columnTwoHeading;
};


HighScores* HighScores_new(const char* name, const char* heading, const char* columnTwoHeading);

void HighScores_init(HighScores* this, const char* name, const char* heading, const char* columnTwoHeading);

void HighScores_setList(HighScores* this, BasicArrayList* orderedHighScoresList);

BasicArrayList* HighScores_getList(HighScores* this);

const char* HighScores_getName(HighScores* this);

int32_t HighScores_getTotal(HighScores* this);

void HighScores_addHighScore(HighScores* this, HighScore* newHighScore);

const char* HighScores_getHeading(HighScores* this);

const char* HighScores_getColumnOneHeading(HighScores* this);

const char* HighScores_getColumnTwoHeading(HighScores* this);

bool HighScores_isBestScore(HighScores* this, HighScore* newHighScore);

const char* HighScores_toString(HighScores* this);
#define HighScores_new3 HighScores_new
#define HighScores_init3 HighScores_init
// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void HighScores_staticInit(void);
// Registers the class, its superclass, and its methods for the interface calls (java_register_method)
void HighScores_register(void);

#if __has_include("org/allbinary/util/BasicArrayList.h")
#include "org/allbinary/util/BasicArrayList.h"
#endif

#endif // ORG_ALLBINARY_GAME_SCORE_HIGHSCORES_H
