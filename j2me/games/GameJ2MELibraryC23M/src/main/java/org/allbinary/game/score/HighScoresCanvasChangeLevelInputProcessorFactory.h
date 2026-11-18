#ifndef ORG_ALLBINARY_GAME_SCORE_HIGHSCORESCANVASCHANGELEVELINPUTPROCESSORFACTORY_H
#define ORG_ALLBINARY_GAME_SCORE_HIGHSCORESCANVASCHANGELEVELINPUTPROCESSORFACTORY_H
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
typedef struct HighScoresCanvasInputProcessorFactoryInterface HighScoresCanvasInputProcessorFactoryInterface;
typedef struct HighScoresCanvasLevelChangeInputProcessor HighScoresCanvasLevelChangeInputProcessor;
typedef struct HighScoresCanvasInputProcessor HighScoresCanvasInputProcessor;
typedef struct HighScoresCanvas HighScoresCanvas;
#include "org/allbinary/game/score/HighScoresCanvasInputProcessorFactoryInterface.h"

typedef struct HighScoresCanvasChangeLevelInputProcessorFactory HighScoresCanvasChangeLevelInputProcessorFactory;
struct HighScoresCanvasChangeLevelInputProcessorFactory {
    HighScoresCanvasInputProcessorFactoryInterface HighScoresCanvasInputProcessorFactoryInterface_interface;
};


HighScoresCanvasChangeLevelInputProcessorFactory* HighScoresCanvasChangeLevelInputProcessorFactory_new(void);
void HighScoresCanvasChangeLevelInputProcessorFactory_init(HighScoresCanvasChangeLevelInputProcessorFactory* this);

HighScoresCanvasInputProcessor* HighScoresCanvasChangeLevelInputProcessorFactory_getInstance(HighScoresCanvasChangeLevelInputProcessorFactory* this, HighScoresCanvas* highScoresCanvas);
// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void HighScoresCanvasChangeLevelInputProcessorFactory_staticInit(void);
// Registers the class, its superclass, and its methods for the interface calls (java_register_method)
void HighScoresCanvasChangeLevelInputProcessorFactory_register(void);


#endif // ORG_ALLBINARY_GAME_SCORE_HIGHSCORESCANVASCHANGELEVELINPUTPROCESSORFACTORY_H
