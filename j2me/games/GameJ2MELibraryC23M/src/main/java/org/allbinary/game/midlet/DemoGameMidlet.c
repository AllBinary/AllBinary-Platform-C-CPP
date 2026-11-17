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
#include "org/allbinary/game/displayable/canvas/GameCanvasRunnableInterface.h"
#include "org/allbinary/game/layer/AllBinaryGameLayerManager.h"
#include "org/allbinary/graphics/canvas/transition/progress/ProgressCanvas.h"
#include "org/allbinary/graphics/canvas/transition/progress/ProgressCanvasFactory.h"
#include "org/allbinary/logic/StdUtil.h"
#include "org/allbinary/logic/system/security/licensing/ClientInformationFactory.h"
#include "org/allbinary/thread/PrimaryThreadPool.h"
#include "org/allbinary/game/displayable/canvas/NullGameCanvasRunnable.h"
#include "org/allbinary/util/ABHashtable.h"
#include "org/allbinary/game/midlet/GameMidlet.h"

typedef struct DemoGameMidlet DemoGameMidlet;
struct DemoGameMidlet {
    GameMidlet base;
};


DemoGameMidlet* DemoGameMidlet_new(ClientInformationFactory* clientInformationFactory);

void DemoGameMidlet_init(DemoGameMidlet* this, ClientInformationFactory* clientInformationFactory);
bool DemoGameMidlet_isContinue(DemoGameMidlet* this);
int32_t DemoGameMidlet_getHighestLevel(DemoGameMidlet* this);
GameCanvasRunnableInterface* DemoGameMidlet_createDemoGameCanvasRunnableInterface(DemoGameMidlet* this);
GameCanvasRunnableInterface* DemoGameMidlet_createGameCanvasRunnable(DemoGameMidlet* this, AllBinaryGameLayerManager* allBinaryGameLayerManager);
GameCanvasRunnableInterface* DemoGameMidlet_createGameCanvasRunnableInterface(DemoGameMidlet* this);
void DemoGameMidlet_demoSetup(DemoGameMidlet* this);
void DemoGameMidlet_postDemoSetup(DemoGameMidlet* this);
void DemoGameMidlet_setDemo(DemoGameMidlet* this);
void DemoGameMidlet_createGame(DemoGameMidlet* this);
bool DemoGameMidlet_isReady(DemoGameMidlet* this);


void DemoGameMidlet_init(DemoGameMidlet* this, ClientInformationFactory* clientInformationFactory) {
        GameMidlet_init(&this->base, clientInformationFactory);
}

DemoGameMidlet* DemoGameMidlet_new(ClientInformationFactory* clientInformationFactory) {
    DemoGameMidlet* this = calloc(1, sizeof(DemoGameMidlet));
    DemoGameMidlet_init(this, clientInformationFactory);
    return this;
}


// throws Exception
bool DemoGameMidlet_isContinue(DemoGameMidlet* this) {
        ABHashtable* hashtable = DemoGameMidlet_getStartStateHashtable(this);
        if (hashtable != nullptr && ABHashtable_size(hashtable) > 0) {
            return true;
        } else {
            return false;
        }
}


int32_t DemoGameMidlet_getHighestLevel(DemoGameMidlet* this) {
        return 1;
}


// throws Exception
GameCanvasRunnableInterface* DemoGameMidlet_createDemoGameCanvasRunnableInterface(DemoGameMidlet* this) {
        JAVA_CALL(this->logUtil, putF, this->commonStrings->NOT_IMPLEMENTED, this, this->commonStrings->CREATE);
        return NullGameCanvasRunnable_NULL_GAME_CANVAS_RUNNABLE;
}


// throws Exception
GameCanvasRunnableInterface* DemoGameMidlet_createGameCanvasRunnable(DemoGameMidlet* this, AllBinaryGameLayerManager* allBinaryGameLayerManager) {
        java_throw(java_exception_new("Exception", this->commonStrings->NOT_IMPLEMENTED));
}


// throws Exception
GameCanvasRunnableInterface* DemoGameMidlet_createGameCanvasRunnableInterface(DemoGameMidlet* this) {
        return DemoGameMidlet_createGameCanvasRunnable(this, DemoGameMidlet_createGameLayerManager(this));
}


void DemoGameMidlet_demoSetup(DemoGameMidlet* this) {
}


void DemoGameMidlet_postDemoSetup(DemoGameMidlet* this) {
}


// throws Exception
// synchronized
void DemoGameMidlet_setDemo(DemoGameMidlet* this) {
        JAVA_CALL(this->logUtil, putF, this->commonStrings->START, this, "setDemo");
        ProgressCanvas* progressCanvas = ProgressCanvasFactory_getInstance();
        ProgressCanvas_start(progressCanvas);
        PrimaryThreadPool_runTask(PrimaryThreadPool_getInstance(), DemoRunnable_new(this));
}


// throws Exception
// synchronized
void DemoGameMidlet_createGame(DemoGameMidlet* this) {
        const char* CREATE_GAME = "createGame";
        JAVA_CALL(this->logUtil, putF, this->commonStrings->START, this, CREATE_GAME);
        ProgressCanvas* progressCanvas = ProgressCanvasFactory_getInstance();
        ProgressCanvas_start(progressCanvas);
        ABHashtable* hashtable = DemoGameMidlet_getStartStateHashtable(this);
        DemoGameMidlet_setStartStateHashtable(this, StdUtil_getInstance()->NULL_TABLE);
        PrimaryThreadPool_runTask(PrimaryThreadPool_getInstance(), CreateGameRunnable_new(this, hashtable));
        JAVA_CALL(this->logUtil, putF, this->commonStrings->END, this, CREATE_GAME);
}


bool DemoGameMidlet_isReady(DemoGameMidlet* this) {
        return true;
}

