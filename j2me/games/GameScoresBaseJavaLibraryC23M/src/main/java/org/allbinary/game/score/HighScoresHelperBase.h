#ifndef ORG_ALLBINARY_GAME_SCORE_HIGHSCORESHELPERBASE_H
#define ORG_ALLBINARY_GAME_SCORE_HIGHSCORESHELPERBASE_H
/*
 * 
 * AllBinary Open License Version 1 
 * Copyright (c) 2022 AllBinary 
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
typedef struct HighScoresHelperBaseInterface HighScoresHelperBaseInterface;
typedef struct LastFetchHighScoresFactory LastFetchHighScoresFactory;
typedef struct HighScores HighScores;
typedef struct NullHighScoresSingletonFactory NullHighScoresSingletonFactory;
typedef struct LogUtil LogUtil;
typedef struct StringMaker StringMaker;
typedef struct CommonStrings CommonStrings;
#if __has_include("org/allbinary/logic/communication/log/LogUtil.h")
#include "org/allbinary/logic/communication/log/LogUtil.h"
#endif
#include "org/allbinary/game/score/HighScoresHelperBaseInterface.h"
#if __has_include("org/allbinary/game/score/HighScores.h")
#include "org/allbinary/game/score/HighScores.h"
#endif

typedef struct HighScoresHelperBase HighScoresHelperBase;
struct HighScoresHelperBase {
    HighScoresHelperBaseInterface HighScoresHelperBaseInterface_interface;
    LogUtil* logUtil;
    HighScores** highScoresArrayP;
};


HighScoresHelperBase* HighScoresHelperBase_new(void);
void HighScoresHelperBase_init(HighScoresHelperBase* this);

void HighScoresHelperBase_setHighScoresArray(HighScoresHelperBase* this, HighScores** highScoresArrayP);

HighScores* HighScoresHelperBase_getNextHighScores(HighScoresHelperBase* this);

bool HighScoresHelperBase_isAnyHighScores(HighScoresHelperBase* this);

void HighScoresHelperBase_setSelectedHighScores(HighScoresHelperBase* this, HighScores* selectedHighScores);

HighScores* HighScoresHelperBase_getSelectedHighScores(HighScoresHelperBase* this);

HighScores** HighScoresHelperBase_getHighScoresArray(HighScoresHelperBase* this);

void HighScoresHelperBase_selectHighScores(HighScoresHelperBase* this);
// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void HighScoresHelperBase_staticInit(void);
// Registers the class, its superclass, and its methods for the interface calls (java_register_method)
void HighScoresHelperBase_register(void);


#endif // ORG_ALLBINARY_GAME_SCORE_HIGHSCORESHELPERBASE_H
