#ifndef ORG_ALLBINARY_GAME_SCORE_HIGHSCORESBASE_H
#define ORG_ALLBINARY_GAME_SCORE_HIGHSCORESBASE_H
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
typedef struct HighScoresFactoryInterface HighScoresFactoryInterface;
typedef struct HighScoresResultsListener HighScoresResultsListener;
typedef struct HighScoresHelperBaseInterface HighScoresHelperBaseInterface;
typedef struct GameInfo GameInfo;
typedef struct CommonStrings CommonStrings;
#if __has_include("org/allbinary/string/CommonStrings.h")
#include "org/allbinary/string/CommonStrings.h"
#endif
#include "org/allbinary/game/score/HighScoresFactoryInterface.h"

typedef struct HighScoresBase HighScoresBase;
struct HighScoresBase {
    HighScoresFactoryInterface HighScoresFactoryInterface_interface;
    CommonStrings* commonStrings;
};


HighScoresBase* HighScoresBase_new(void);

void HighScoresBase_init(HighScoresBase* this);

void HighScoresBase_fetchHighScores(HighScoresBase* this, GameInfo* gameInfo, HighScoresResultsListener* highScoresResultsListener);

void HighScoresBase_fetchHighScoresPreload(HighScoresBase* this, GameInfo* gameInfo, HighScoresResultsListener* highScoresResultsListener, bool preload);

HighScoresHelperBaseInterface* HighScoresBase_createHighScoresHelper(HighScoresBase* this);
#define HighScoresBase_new0 HighScoresBase_new
#define HighScoresBase_init0 HighScoresBase_init
// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void HighScoresBase_staticInit(void);
// Registers the class, its superclass, and its methods for the interface calls (java_register_method)
void HighScoresBase_register(void);


#endif // ORG_ALLBINARY_GAME_SCORE_HIGHSCORESBASE_H
