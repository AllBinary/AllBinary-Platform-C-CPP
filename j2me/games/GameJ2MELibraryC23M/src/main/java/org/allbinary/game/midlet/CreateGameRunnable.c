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
#include "org/allbinary/graphics/canvas/transition/progress/ProgressCanvas.h"
#include "org/allbinary/graphics/canvas/transition/progress/ProgressCanvasFactory.h"
#include "org/allbinary/graphics/displayable/command/MyCommandsFactory.h"
#include "org/allbinary/logic/communication/log/LogUtil.h"
#include "org/allbinary/string/CommonStrings.h"
#include "org/allbinary/util/ABHashtable.h"
#include "org/allbinary/game/midlet/Runnable.h"

typedef struct CreateGameRunnable CreateGameRunnable;
struct CreateGameRunnable {
    Runnable Runnable_interface;
    LogUtil* logUtil;
    CommonStrings* commonStrings;
    DemoGameMidlet* demoGameMidlet;
    ABHashtable* hashtable;
    DemoGameMidletEvent* startGameMidletEvent;
};


CreateGameRunnable* CreateGameRunnable_new(DemoGameMidlet* demoGameMidlet, ABHashtable* hashtable);

void CreateGameRunnable_init(CreateGameRunnable* this, DemoGameMidlet* demoGameMidlet, ABHashtable* hashtable);
void CreateGameRunnable_run(CreateGameRunnable* this);

static void CreateGameRunnable_initFields(CreateGameRunnable* this) {
    this->logUtil = LogUtil_getInstance();
    this->commonStrings = CommonStrings_getInstance();
    
    
    
}


void CreateGameRunnable_init(CreateGameRunnable* this, DemoGameMidlet* demoGameMidlet, ABHashtable* hashtable) {
    CreateGameRunnable_initFields(this);
        this->demoGameMidlet = demoGameMidlet;
        this->hashtable = hashtable;
        this->startGameMidletEvent = DemoGameMidletEvent_new(this, DemoGameMidletStateFactory_getInstance()->START_GAME);
}

CreateGameRunnable* CreateGameRunnable_new(DemoGameMidlet* demoGameMidlet, ABHashtable* hashtable) {
    CreateGameRunnable* this = calloc(1, sizeof(CreateGameRunnable));
    CreateGameRunnable_init(this, demoGameMidlet, hashtable);
    return this;
}


void CreateGameRunnable_run(CreateGameRunnable* this) {
        JAVA_TRY {
            LogUtil_putF(this->logUtil, this->commonStrings->START_RUNNABLE, this, this->commonStrings->RUN);
            ProgressCanvas* progressCanvas = ProgressCanvasFactory_getInstance();
            DemoGameMidlet_commandAction(this->demoGameMidlet, MyCommandsFactory_getInstance()->SET_DISPLAYABLE, progressCanvas);
            DemoGameMidlet_stopGameCanvasRunnableInterface(this->demoGameMidlet);
            DemoGameMidlet_setGameCanvasRunnableInterface(this->demoGameMidlet, DemoGameMidlet_createGameCanvasRunnableInterface(this->demoGameMidlet));
            JAVA_CALL(DemoGameMidlet_getGameCanvasRunnableInterface(this->demoGameMidlet), setLoadStateHashtable, this->hashtable);
            DemoGameMidlet_startGameCanvasRunnableInterface(this->demoGameMidlet);
            DemoGameMidletEventHandler_fireEvent(DemoGameMidletEventHandler_getInstance(), this->startGameMidletEvent);
            LogUtil_putF(this->logUtil, this->commonStrings->END_RUNNABLE, this, this->commonStrings->RUN);
        } JAVA_CATCH(Exception, e) {
            LogUtil_put(this->logUtil, this->commonStrings->EXCEPTION, this, this->commonStrings->RUN, e);
        } JAVA_END_TRY;
}

