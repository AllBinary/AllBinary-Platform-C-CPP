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
#include "org/allbinary/graphics/displayable/GameTickDisplayInfoSingleton.h"
#include "org/allbinary/logic/communication/log/LogUtil.h"
#include "org/allbinary/string/CommonStrings.h"
#include "org/allbinary/time/GameTickTimeDelayHelper.h"
#include "org/allbinary/time/GameTickTimeDelayHelperFactory.h"
#include "org/allbinary/game/displayable/canvas/GameRunnable.h"

typedef struct GameCanvasRunnable GameCanvasRunnable;
struct GameCanvasRunnable {
    GameRunnable base;
    LogUtil* logUtil;
    GameTickDisplayInfoSingleton* gameTickDisplayInfoSingleton;
    AllBinaryGameCanvas* allBinaryGameCanvas;
    GameTickTimeDelayHelper* gameTickTimeDelayHelper;
};


GameCanvasRunnable* GameCanvasRunnable_new(AllBinaryGameCanvas* allBinaryGameCanvas);

void GameCanvasRunnable_init(GameCanvasRunnable* this, AllBinaryGameCanvas* allBinaryGameCanvas);
void GameCanvasRunnable_run(GameCanvasRunnable* this);
void GameCanvasRunnable_processLoopSleep(GameCanvasRunnable* this);

static void GameCanvasRunnable_initFields(GameCanvasRunnable* this) {
    this->logUtil = LogUtil_getInstance();
    this->gameTickDisplayInfoSingleton = GameTickDisplayInfoSingleton_getInstance();
    
    this->gameTickTimeDelayHelper = GameTickTimeDelayHelperFactory_getInstance();
}


void GameCanvasRunnable_init(GameCanvasRunnable* this, AllBinaryGameCanvas* allBinaryGameCanvas) {
    GameRunnable_init(&this->base);
    GameCanvasRunnable_initFields(this);
        this->allBinaryGameCanvas = allBinaryGameCanvas;
}

GameCanvasRunnable* GameCanvasRunnable_new(AllBinaryGameCanvas* allBinaryGameCanvas) {
    GameCanvasRunnable* this = calloc(1, sizeof(GameCanvasRunnable));
    GameCanvasRunnable_init(this, allBinaryGameCanvas);
    return this;
}


void GameCanvasRunnable_run(GameCanvasRunnable* this) {
        JAVA_TRY {
            JAVA_CALL(AllBinaryGameCanvas_getLoopTimeHelperP(this->allBinaryGameCanvas), setStartTime, GameTickTimeDelayHelper_setStartTime(this->gameTickTimeDelayHelper));
            GameTickDisplayInfoSingleton_update(this->gameTickDisplayInfoSingleton);
            AllBinaryGameCanvas_processGame(this->allBinaryGameCanvas);
        } JAVA_CATCH(Exception, e) {
            CommonStrings* commonStrings = CommonStrings_getInstance();
            LogUtil_put(this->logUtil, commonStrings->EXCEPTION, this, commonStrings->RUN, e);
        } JAVA_END_TRY;
}


// throws Exception
void GameCanvasRunnable_processLoopSleep(GameCanvasRunnable* this) {
        AllBinaryGameCanvas_processLoopSleep(this->allBinaryGameCanvas);
}

