#ifndef ORG_ALLBINARY_GAME_SCORE_HIGHSCORESFACTORYINTERFACE_H
#define ORG_ALLBINARY_GAME_SCORE_HIGHSCORESFACTORYINTERFACE_H
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
typedef struct HighScoresResultsListener HighScoresResultsListener;
typedef struct HighScoresHelperBaseInterface HighScoresHelperBaseInterface;
typedef struct GameInfo GameInfo;

typedef struct HighScoresFactoryInterface HighScoresFactoryInterface;
struct HighScoresFactoryInterface {
    void (*fetchHighScores)(void* this, GameInfo* gameInfo, HighScoresResultsListener* highScoresResultsListener);
    void (*fetchHighScoresPreload)(void* this, GameInfo* gameInfo, HighScoresResultsListener* highScoresResultsListener, bool preload);
    HighScoresHelperBaseInterface* (*createHighScoresHelper)(void* this);
};

// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void HighScoresFactoryInterface_staticInit(void);

static inline void HighScoresFactoryInterface_fetchHighScores(void* this, GameInfo* gameInfo, HighScoresResultsListener* highScoresResultsListener) {
    ((__typeof__(((HighScoresFactoryInterface*) nullptr)->fetchHighScores)) java_method_of(this, "fetchHighScores"))(this, gameInfo, highScoresResultsListener);
}

static inline void HighScoresFactoryInterface_fetchHighScoresPreload(void* this, GameInfo* gameInfo, HighScoresResultsListener* highScoresResultsListener, bool preload) {
    ((__typeof__(((HighScoresFactoryInterface*) nullptr)->fetchHighScoresPreload)) java_method_of(this, "fetchHighScoresPreload"))(this, gameInfo, highScoresResultsListener, preload);
}

static inline HighScoresHelperBaseInterface* HighScoresFactoryInterface_createHighScoresHelper(void* this) {
    return ((__typeof__(((HighScoresFactoryInterface*) nullptr)->createHighScoresHelper)) java_method_of(this, "createHighScoresHelper"))(this);
}


#endif // ORG_ALLBINARY_GAME_SCORE_HIGHSCORESFACTORYINTERFACE_H
