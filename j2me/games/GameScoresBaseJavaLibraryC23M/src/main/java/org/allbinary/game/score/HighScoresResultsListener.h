#ifndef ORG_ALLBINARY_GAME_SCORE_HIGHSCORESRESULTSLISTENER_H
#define ORG_ALLBINARY_GAME_SCORE_HIGHSCORESRESULTSLISTENER_H
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
typedef struct HighScores HighScores;

typedef struct HighScoresResultsListener HighScoresResultsListener;
struct HighScoresResultsListener {
    void (*setHighScoresArray)(void* this, HighScores** highScoresArrayP);
};

// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void HighScoresResultsListener_staticInit(void);

static inline void HighScoresResultsListener_setHighScoresArray(void* this, HighScores** highScoresArrayP) {
    ((__typeof__(((HighScoresResultsListener*) nullptr)->setHighScoresArray)) java_method_of(this, "setHighScoresArray"))(this, highScoresArrayP);
}


#endif // ORG_ALLBINARY_GAME_SCORE_HIGHSCORESRESULTSLISTENER_H
