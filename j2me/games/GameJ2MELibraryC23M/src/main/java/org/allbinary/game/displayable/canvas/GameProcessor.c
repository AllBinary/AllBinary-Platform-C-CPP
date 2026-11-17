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

typedef struct GameProcessor GameProcessor;
struct GameProcessor {
    Processor base;
    AllBinaryGameCanvas* gameCanvas;
};


GameProcessor* GameProcessor_new(AllBinaryGameCanvas* gameCanvas);

void GameProcessor_init(GameProcessor* this, AllBinaryGameCanvas* gameCanvas);
void GameProcessor_process(GameProcessor* this);

static void GameProcessor_initFields(GameProcessor* this) {
    
}


void GameProcessor_init(GameProcessor* this, AllBinaryGameCanvas* gameCanvas) {
    Processor_init(&this->base);
    GameProcessor_initFields(this);
        this->gameCanvas = gameCanvas;
}

GameProcessor* GameProcessor_new(AllBinaryGameCanvas* gameCanvas) {
    GameProcessor* this = calloc(1, sizeof(GameProcessor));
    GameProcessor_init(this, gameCanvas);
    return this;
}


// throws Exception
void GameProcessor_process(GameProcessor* this) {
        AllBinaryGameCanvas_processPlayingGame(this->gameCanvas);
}

