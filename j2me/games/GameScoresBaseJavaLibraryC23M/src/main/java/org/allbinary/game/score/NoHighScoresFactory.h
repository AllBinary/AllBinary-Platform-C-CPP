#ifndef ORG_ALLBINARY_GAME_SCORE_NOHIGHSCORESFACTORY_H
#define ORG_ALLBINARY_GAME_SCORE_NOHIGHSCORESFACTORY_H
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
typedef struct HighScoresBase HighScoresBase;
typedef struct HighScores HighScores;
typedef struct HighScoresResultsListener HighScoresResultsListener;
typedef struct HighScoresHelperBase HighScoresHelperBase;
typedef struct HighScoresHelperBaseInterface HighScoresHelperBaseInterface;
typedef struct GameInfo GameInfo;
typedef struct LogUtil LogUtil;
#if __has_include("org/allbinary/logic/communication/log/LogUtil.h")
#include "org/allbinary/logic/communication/log/LogUtil.h"
#endif
#include "org/allbinary/game/score/HighScoresBase.h"
#if __has_include("org/allbinary/game/score/HighScores.h")
#include "org/allbinary/game/score/HighScores.h"
#endif

typedef struct NoHighScoresFactory NoHighScoresFactory;
struct NoHighScoresFactory {
    HighScoresBase base;
    LogUtil* logUtil;
    HighScores** NO_HIGH_SCORES;
};


NoHighScoresFactory* NoHighScoresFactory_new(void);

NoHighScoresFactory* NoHighScoresFactory_getInstance(void);

void NoHighScoresFactory_init(NoHighScoresFactory* this);

void NoHighScoresFactory_fetchHighScores(NoHighScoresFactory* this, GameInfo* gameInfo, HighScoresResultsListener* highScoresResultsListener);

HighScoresHelperBaseInterface* NoHighScoresFactory_createHighScoresHelper(NoHighScoresFactory* this);
#define NoHighScoresFactory_new0 NoHighScoresFactory_new
#define NoHighScoresFactory_init0 NoHighScoresFactory_init
#ifndef NoHighScoresFactory_fetchHighScoresPreload
#define NoHighScoresFactory_fetchHighScoresPreload HighScoresBase_fetchHighScoresPreload
#endif
// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void NoHighScoresFactory_staticInit(void);
// Registers the class, its superclass, and its methods for the interface calls (java_register_method)
void NoHighScoresFactory_register(void);


#endif // ORG_ALLBINARY_GAME_SCORE_NOHIGHSCORESFACTORY_H
