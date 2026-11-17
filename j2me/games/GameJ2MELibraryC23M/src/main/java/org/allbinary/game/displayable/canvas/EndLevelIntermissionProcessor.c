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
// package org.allbinary.game.displayable.canvas

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
#include "org/allbinary/canvas/Processor.h"

typedef struct EndLevelIntermissionProcessor EndLevelIntermissionProcessor;
struct EndLevelIntermissionProcessor {
    Processor base;
    AllBinaryGameCanvas* gameCanvas;
};


EndLevelIntermissionProcessor* EndLevelIntermissionProcessor_new(AllBinaryGameCanvas* gameCanvas);

void EndLevelIntermissionProcessor_init(EndLevelIntermissionProcessor* this, AllBinaryGameCanvas* gameCanvas);
void EndLevelIntermissionProcessor_process(EndLevelIntermissionProcessor* this);

static void EndLevelIntermissionProcessor_initFields(EndLevelIntermissionProcessor* this) {
    
}


void EndLevelIntermissionProcessor_init(EndLevelIntermissionProcessor* this, AllBinaryGameCanvas* gameCanvas) {
    Processor_init(&this->base);
    EndLevelIntermissionProcessor_initFields(this);
        this->gameCanvas = gameCanvas;
}

EndLevelIntermissionProcessor* EndLevelIntermissionProcessor_new(AllBinaryGameCanvas* gameCanvas) {
    EndLevelIntermissionProcessor* this = calloc(1, sizeof(EndLevelIntermissionProcessor));
    EndLevelIntermissionProcessor_init(this, gameCanvas);
    return this;
}


// throws Exception
void EndLevelIntermissionProcessor_process(EndLevelIntermissionProcessor* this) {
        AllBinaryGameCanvas_processEndLevelIntermissionGameState(this->gameCanvas);
}

