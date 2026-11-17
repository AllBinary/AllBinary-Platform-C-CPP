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
#include "org/allbinary/game/score/displayable/HighScoresCanvas.h"
#include "org/allbinary/game/score/HighScoresCanvasInputProcessorFactoryInterface.h"

typedef struct HighScoresCanvasNoInputProcessorFactory HighScoresCanvasNoInputProcessorFactory;
struct HighScoresCanvasNoInputProcessorFactory {
    HighScoresCanvasInputProcessorFactoryInterface HighScoresCanvasInputProcessorFactoryInterface_interface;
};


HighScoresCanvasNoInputProcessorFactory* HighScoresCanvasNoInputProcessorFactory_new(void);
HighScoresCanvasInputProcessor* HighScoresCanvasNoInputProcessorFactory_getInstance(HighScoresCanvasNoInputProcessorFactory* this, HighScoresCanvas* highScoresCanvas);

void HighScoresCanvasNoInputProcessorFactory_init(HighScoresCanvasNoInputProcessorFactory* this) {
}

HighScoresCanvasNoInputProcessorFactory* HighScoresCanvasNoInputProcessorFactory_new(void) {
    HighScoresCanvasNoInputProcessorFactory* this = calloc(1, sizeof(HighScoresCanvasNoInputProcessorFactory));
    HighScoresCanvasNoInputProcessorFactory_init(this);
    return this;
}


HighScoresCanvasInputProcessor* HighScoresCanvasNoInputProcessorFactory_getInstance(HighScoresCanvasNoInputProcessorFactory* this, HighScoresCanvas* highScoresCanvas) {
        return HighScoresCanvasInputProcessor_new(highScoresCanvas);
}

