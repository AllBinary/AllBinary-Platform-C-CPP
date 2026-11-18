#ifndef ORG_ALLBINARY_GAME_SCORE_DISPLAYABLE_HIGHSCORERUNNABLE_H
#define ORG_ALLBINARY_GAME_SCORE_DISPLAYABLE_HIGHSCORERUNNABLE_H
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
// package org.allbinary.game.score.displayable

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
typedef struct HighScoresCanvas HighScoresCanvas;
typedef struct J2MEUtil J2MEUtil;
typedef struct ABSystemWrapper ABSystemWrapper;
typedef struct LogUtil LogUtil;
typedef struct StringMaker StringMaker;
typedef struct CommonStrings CommonStrings;
typedef struct ARunnable ARunnable;
#include "org/allbinary/thread/ARunnable.h"
#if __has_include("org/allbinary/game/score/displayable/HighScoresCanvas.h")
#include "org/allbinary/game/score/displayable/HighScoresCanvas.h"
#endif

typedef struct HighScoreRunnable HighScoreRunnable;
struct HighScoreRunnable {
    ARunnable base;
    HighScoresCanvas* highScoresCanvas;
};


HighScoreRunnable* HighScoreRunnable_new(HighScoresCanvas* highScoresCanvas);

void HighScoreRunnable_init(HighScoreRunnable* this, HighScoresCanvas* highScoresCanvas);

void HighScoreRunnable_run(HighScoreRunnable* this);
#define HighScoreRunnable_new1 HighScoreRunnable_new
#define HighScoreRunnable_init1 HighScoreRunnable_init
// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void HighScoreRunnable_staticInit(void);
// Registers the class, its superclass, and its methods for the interface calls (java_register_method)
void HighScoreRunnable_register(void);


#endif // ORG_ALLBINARY_GAME_SCORE_DISPLAYABLE_HIGHSCORERUNNABLE_H
