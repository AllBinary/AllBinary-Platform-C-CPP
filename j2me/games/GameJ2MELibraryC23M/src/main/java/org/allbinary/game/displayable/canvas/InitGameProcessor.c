/*
 *
 * AllBinary Open License Version 1
 * Copyright (c) 2026 AllBinary
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
#include "org/allbinary/graphics/canvas/transition/progress/ProgressCanvasFactory.h"
#include "org/allbinary/logic/communication/log/LogUtil.h"
#include "org/allbinary/string/CommonStrings.h"

typedef struct InitGameProcessor InitGameProcessor;
struct InitGameProcessor {
    Processor base;
    AllBinaryGameCanvas* gameCanvas;
};


InitGameProcessor* InitGameProcessor_new(AllBinaryGameCanvas* gameCanvas);

void InitGameProcessor_init(InitGameProcessor* this, AllBinaryGameCanvas* gameCanvas);
void InitGameProcessor_process(InitGameProcessor* this);

static void InitGameProcessor_initFields(InitGameProcessor* this) {
    
}


void InitGameProcessor_init(InitGameProcessor* this, AllBinaryGameCanvas* gameCanvas) {
    Processor_init(&this->base);
    InitGameProcessor_initFields(this);
        this->gameCanvas = gameCanvas;
}

InitGameProcessor* InitGameProcessor_new(AllBinaryGameCanvas* gameCanvas) {
    InitGameProcessor* this = calloc(1, sizeof(InitGameProcessor));
    InitGameProcessor_init(this, gameCanvas);
    return this;
}


// throws Exception
void InitGameProcessor_process(InitGameProcessor* this) {
        if (ProgressCanvasFactory_isInGame(ProgressCanvasFactory_getInstance())) {
            AllBinaryGameCanvas_setProcessGameProcessorInit(this->gameCanvas);
        }
}

