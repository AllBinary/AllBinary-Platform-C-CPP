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
#include "org/allbinary/logic/communication/log/LogUtil.h"
#include "org/allbinary/string/CommonStrings.h"
#include "org/allbinary/time/GameTickTimeDelayHelper.h"
#include "org/allbinary/time/GameTickTimeDelayHelperFactory.h"
#include "org/allbinary/game/displayable/canvas/GameRunnable.h"

typedef struct DemoGameRunnable DemoGameRunnable;
struct DemoGameRunnable {
    GameRunnable base;
    LogUtil* logUtil;
    DemoCanvas* demoCanvas;
    GameTickTimeDelayHelper* gameTickTimeDelayHelper;
};


DemoGameRunnable* DemoGameRunnable_new(DemoCanvas* demoCanvas);

void DemoGameRunnable_init(DemoGameRunnable* this, DemoCanvas* demoCanvas);
void DemoGameRunnable_run(DemoGameRunnable* this);
void DemoGameRunnable_processLoopSleep(DemoGameRunnable* this);

static void DemoGameRunnable_initFields(DemoGameRunnable* this) {
    this->logUtil = LogUtil_getInstance();
    
    this->gameTickTimeDelayHelper = GameTickTimeDelayHelperFactory_getInstance();
}


void DemoGameRunnable_init(DemoGameRunnable* this, DemoCanvas* demoCanvas) {
    GameRunnable_init(&this->base);
    DemoGameRunnable_initFields(this);
        this->demoCanvas = demoCanvas;
}

DemoGameRunnable* DemoGameRunnable_new(DemoCanvas* demoCanvas) {
    DemoGameRunnable* this = calloc(1, sizeof(DemoGameRunnable));
    DemoGameRunnable_init(this, demoCanvas);
    return this;
}


void DemoGameRunnable_run(DemoGameRunnable* this) {
        JAVA_TRY {
            JAVA_CALL(DemoCanvas_getLoopTimeHelperP(this->demoCanvas), setStartTime, GameTickTimeDelayHelper_setStartTime(this->gameTickTimeDelayHelper));
            DemoCanvas_processGame(this->demoCanvas);
        } JAVA_CATCH(Exception, e) {
            CommonStrings* commonStrings = CommonStrings_getInstance();
            LogUtil_put(this->logUtil, commonStrings->EXCEPTION, this, commonStrings->RUN, e);
        } JAVA_END_TRY;
}


// throws Exception
void DemoGameRunnable_processLoopSleep(DemoGameRunnable* this) {
        DemoCanvas_processLoopSleep(this->demoCanvas);
}

