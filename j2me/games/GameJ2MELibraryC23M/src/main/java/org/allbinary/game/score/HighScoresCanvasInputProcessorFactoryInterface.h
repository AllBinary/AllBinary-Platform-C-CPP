#ifndef ORG_ALLBINARY_GAME_SCORE_HIGHSCORESCANVASINPUTPROCESSORFACTORYINTERFACE_H
#define ORG_ALLBINARY_GAME_SCORE_HIGHSCORESCANVASINPUTPROCESSORFACTORYINTERFACE_H
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
typedef struct HighScoresCanvasInputProcessor HighScoresCanvasInputProcessor;
typedef struct HighScoresCanvas HighScoresCanvas;

typedef struct HighScoresCanvasInputProcessorFactoryInterface HighScoresCanvasInputProcessorFactoryInterface;
struct HighScoresCanvasInputProcessorFactoryInterface {
    HighScoresCanvasInputProcessor* (*getInstance)(void* this, HighScoresCanvas* highScoresCanvas);
};

// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void HighScoresCanvasInputProcessorFactoryInterface_staticInit(void);

static inline HighScoresCanvasInputProcessor* HighScoresCanvasInputProcessorFactoryInterface_getInstance(void* this, HighScoresCanvas* highScoresCanvas) {
    return ((__typeof__(((HighScoresCanvasInputProcessorFactoryInterface*) nullptr)->getInstance)) java_method_of(this, "getInstance"))(this, highScoresCanvas);
}


#endif // ORG_ALLBINARY_GAME_SCORE_HIGHSCORESCANVASINPUTPROCESSORFACTORYINTERFACE_H
