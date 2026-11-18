#ifndef ORG_ALLBINARY_GAME_SCORE_HIGHSCORESHELPERBASEINTERFACE_H
#define ORG_ALLBINARY_GAME_SCORE_HIGHSCORESHELPERBASEINTERFACE_H
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
typedef struct HighScoresResultsListener HighScoresResultsListener;
typedef struct HighScores HighScores;
#include "org/allbinary/game/score/HighScoresResultsListener.h"

typedef struct HighScoresHelperBaseInterface HighScoresHelperBaseInterface;
struct HighScoresHelperBaseInterface {
    void (*setSelectedHighScores)(void* this, HighScores* selectedHighScores);
    HighScores** (*getHighScoresArray)(void* this);
    HighScores* (*getSelectedHighScores)(void* this);
};

// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void HighScoresHelperBaseInterface_staticInit(void);

static inline void HighScoresHelperBaseInterface_setSelectedHighScores(void* this, HighScores* selectedHighScores) {
    ((__typeof__(((HighScoresHelperBaseInterface*) nullptr)->setSelectedHighScores)) java_method_of(this, "setSelectedHighScores"))(this, selectedHighScores);
}

static inline HighScores** HighScoresHelperBaseInterface_getHighScoresArray(void* this) {
    return ((__typeof__(((HighScoresHelperBaseInterface*) nullptr)->getHighScoresArray)) java_method_of(this, "getHighScoresArray"))(this);
}

static inline HighScores* HighScoresHelperBaseInterface_getSelectedHighScores(void* this) {
    return ((__typeof__(((HighScoresHelperBaseInterface*) nullptr)->getSelectedHighScores)) java_method_of(this, "getSelectedHighScores"))(this);
}
#define HighScoresHelperBaseInterface_setHighScoresArray HighScoresResultsListener_setHighScoresArray


#endif // ORG_ALLBINARY_GAME_SCORE_HIGHSCORESHELPERBASEINTERFACE_H
