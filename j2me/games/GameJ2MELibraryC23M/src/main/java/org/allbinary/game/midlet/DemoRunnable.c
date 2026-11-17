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
// package org.allbinary.game.midlet

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
#include "org/allbinary/graphics/canvas/transition/progress/ProgressCanvasFactory.h"
#include "org/allbinary/graphics/displayable/command/MyCommandsFactory.h"
#include "org/allbinary/logic/communication/log/LogUtil.h"
#include "org/allbinary/logic/string/StringMaker.h"
#include "org/allbinary/string/CommonLabels.h"
#include "org/allbinary/string/CommonStrings.h"
#include "org/allbinary/game/midlet/Runnable.h"

typedef struct DemoRunnable DemoRunnable;
struct DemoRunnable {
    Runnable Runnable_interface;
    LogUtil* logUtil;
    CommonStrings* commonStrings;
    DemoGameMidlet* demoGameMidlet;
    DemoGameMidletEvent* startDemoGameMidletEvent;
};


DemoRunnable* DemoRunnable_new(DemoGameMidlet* demoGameMidlet);

void DemoRunnable_init(DemoRunnable* this, DemoGameMidlet* demoGameMidlet);
void DemoRunnable_run(DemoRunnable* this);

static void DemoRunnable_initFields(DemoRunnable* this) {
    this->logUtil = LogUtil_getInstance();
    this->commonStrings = CommonStrings_getInstance();
    
    
}


void DemoRunnable_init(DemoRunnable* this, DemoGameMidlet* demoGameMidlet) {
    DemoRunnable_initFields(this);
        this->demoGameMidlet = demoGameMidlet;
        this->startDemoGameMidletEvent = DemoGameMidletEvent_new(this->demoGameMidlet, DemoGameMidletStateFactory_getInstance()->START_DEMO);
}

DemoRunnable* DemoRunnable_new(DemoGameMidlet* demoGameMidlet) {
    DemoRunnable* this = calloc(1, sizeof(DemoRunnable));
    DemoRunnable_init(this, demoGameMidlet);
    return this;
}


void DemoRunnable_run(DemoRunnable* this) {
        JAVA_TRY {
            LogUtil_putF(this->logUtil, JAVA_CALL(JAVA_CALL(StringMaker_append(StringMaker_new(), CommonLabels_getInstance()->START_LABEL), append, "GameCanvasRunnableInterface"), toString), this, this->commonStrings->RUN);
            DemoGameMidlet_commandAction(this->demoGameMidlet, MyCommandsFactory_getInstance()->SET_DISPLAYABLE, ProgressCanvasFactory_getInstance());
            DemoGameMidlet_setGameCanvasRunnableInterface(this->demoGameMidlet, DemoGameMidlet_createDemoGameCanvasRunnableInterface(this->demoGameMidlet));
            DemoGameMidlet_demoSetup(this->demoGameMidlet);
            DemoGameMidletEventHandler_fireEvent(DemoGameMidletEventHandler_getInstance(), this->startDemoGameMidletEvent);
            DemoGameMidlet_startGameCanvasRunnableInterface(this->demoGameMidlet);
            DemoGameMidlet_postDemoSetup(this->demoGameMidlet);
            LogUtil_putF(this->logUtil, this->commonStrings->END_RUNNABLE, this, this->commonStrings->RUN);
        } JAVA_CATCH(Exception, e) {
            LogUtil_put(this->logUtil, this->commonStrings->EXCEPTION, this, this->commonStrings->RUN, e);
        } JAVA_END_TRY;
}

