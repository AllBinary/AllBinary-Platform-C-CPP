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
#include "org/allbinary/canvas/RunnableCanvas.h"
#include "org/allbinary/logic/communication/log/LogUtil.h"
#include "org/allbinary/string/CommonStrings.h"
#include "org/allbinary/game/displayable/canvas/GameRunnable.h"

typedef struct RunnableCanvasSingleThreadStartRunnable RunnableCanvasSingleThreadStartRunnable;
struct RunnableCanvasSingleThreadStartRunnable {
    GameRunnable base;
    LogUtil* logUtil;
    RunnableCanvas* runnableCanvas;
};


RunnableCanvasSingleThreadStartRunnable* RunnableCanvasSingleThreadStartRunnable_new(RunnableCanvas* demoCanvas);

void RunnableCanvasSingleThreadStartRunnable_init(RunnableCanvasSingleThreadStartRunnable* this, RunnableCanvas* demoCanvas);
void RunnableCanvasSingleThreadStartRunnable_run(RunnableCanvasSingleThreadStartRunnable* this);
void RunnableCanvasSingleThreadStartRunnable_processLoopSleep(RunnableCanvasSingleThreadStartRunnable* this);

static void RunnableCanvasSingleThreadStartRunnable_initFields(RunnableCanvasSingleThreadStartRunnable* this) {
    this->logUtil = LogUtil_getInstance();
    
}


void RunnableCanvasSingleThreadStartRunnable_init(RunnableCanvasSingleThreadStartRunnable* this, RunnableCanvas* demoCanvas) {
    GameRunnable_init(&this->base);
    RunnableCanvasSingleThreadStartRunnable_initFields(this);
        this->runnableCanvas = demoCanvas;
}

RunnableCanvasSingleThreadStartRunnable* RunnableCanvasSingleThreadStartRunnable_new(RunnableCanvas* demoCanvas) {
    RunnableCanvasSingleThreadStartRunnable* this = calloc(1, sizeof(RunnableCanvasSingleThreadStartRunnable));
    RunnableCanvasSingleThreadStartRunnable_init(this, demoCanvas);
    return this;
}


void RunnableCanvasSingleThreadStartRunnable_run(RunnableCanvasSingleThreadStartRunnable* this) {
        JAVA_TRY {
            RunnableCanvas_run(this->runnableCanvas);
        } JAVA_CATCH(Exception, e) {
            CommonStrings* commonStrings = CommonStrings_getInstance();
            LogUtil_put(this->logUtil, commonStrings->EXCEPTION, this, commonStrings->RUN, e);
        } JAVA_END_TRY;
}


// throws Exception
void RunnableCanvasSingleThreadStartRunnable_processLoopSleep(RunnableCanvasSingleThreadStartRunnable* this) {
        RunnableCanvas_processLoopSleep(this->runnableCanvas);
}

