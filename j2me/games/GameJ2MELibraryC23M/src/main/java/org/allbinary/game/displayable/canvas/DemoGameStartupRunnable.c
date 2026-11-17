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
#include "org/allbinary/thread/ABRunnable.h"

typedef struct DemoGameStartupRunnable DemoGameStartupRunnable;
struct DemoGameStartupRunnable {
    ABRunnable base;
    LogUtil* logUtil;
    DemoCanvas* demoCanvas;
};

constexpr int32_t DemoGameStartupRunnable_TYPE = 4;

DemoGameStartupRunnable* DemoGameStartupRunnable_new(DemoCanvas* demoCanvas);

void DemoGameStartupRunnable_init(DemoGameStartupRunnable* this, DemoCanvas* demoCanvas);
void DemoGameStartupRunnable_run(DemoGameStartupRunnable* this);
int32_t DemoGameStartupRunnable_getType(DemoGameStartupRunnable* this);

static void DemoGameStartupRunnable_initFields(DemoGameStartupRunnable* this) {
    this->logUtil = LogUtil_getInstance();
    
}


void DemoGameStartupRunnable_init(DemoGameStartupRunnable* this, DemoCanvas* demoCanvas) {
    ABRunnable_init(&this->base);
    DemoGameStartupRunnable_initFields(this);
        this->demoCanvas = demoCanvas;
}

DemoGameStartupRunnable* DemoGameStartupRunnable_new(DemoCanvas* demoCanvas) {
    DemoGameStartupRunnable* this = calloc(1, sizeof(DemoGameStartupRunnable));
    DemoGameStartupRunnable_init(this, demoCanvas);
    return this;
}


void DemoGameStartupRunnable_run(DemoGameStartupRunnable* this) {
        JAVA_TRY {
            DemoGameStartupRunnable_setRunning(this, true);
            DemoCanvas_stopGameDemo(this->demoCanvas);
            DemoCanvas_create(this->demoCanvas);
            DemoCanvas_start(this->demoCanvas);
            DemoGameStartupRunnable_setRunning(this, false);
        } JAVA_CATCH(Exception, e) {
            DemoGameStartupRunnable_setRunning(this, false);
            CommonStrings* commonStrings = CommonStrings_getInstance();
            LogUtil_put(this->logUtil, commonStrings->EXCEPTION, this, commonStrings->RUN, e);
        } JAVA_END_TRY;
}


int32_t DemoGameStartupRunnable_getType(DemoGameStartupRunnable* this) {
        return DemoGameStartupRunnable_TYPE;
}

