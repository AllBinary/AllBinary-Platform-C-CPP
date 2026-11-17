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

typedef struct GameFrameRunnable GameFrameRunnable;
struct GameFrameRunnable {
    GameRunnable base;
    LogUtil* logUtil;
    GameTickDisplayInfoSingleton* gameTickDisplayInfoSingleton;
    AllBinaryGameCanvas* allBinaryGameCanvas;
    GameTickTimeDelayHelper* gameTickTimeDelayHelper;
};


GameFrameRunnable* GameFrameRunnable_new(AllBinaryGameCanvas* allBinaryGameCanvas);

void GameFrameRunnable_init(GameFrameRunnable* this, AllBinaryGameCanvas* allBinaryGameCanvas);
void GameFrameRunnable_run(GameFrameRunnable* this);

static void GameFrameRunnable_initFields(GameFrameRunnable* this) {
    this->logUtil = LogUtil_getInstance();
    this->gameTickDisplayInfoSingleton = GameTickDisplayInfoSingleton_getInstance();
    
    this->gameTickTimeDelayHelper = GameTickTimeDelayHelperFactory_getInstance();
}


void GameFrameRunnable_init(GameFrameRunnable* this, AllBinaryGameCanvas* allBinaryGameCanvas) {
    GameRunnable_init(&this->base);
    GameFrameRunnable_initFields(this);
        this->allBinaryGameCanvas = allBinaryGameCanvas;
}

GameFrameRunnable* GameFrameRunnable_new(AllBinaryGameCanvas* allBinaryGameCanvas) {
    GameFrameRunnable* this = calloc(1, sizeof(GameFrameRunnable));
    GameFrameRunnable_init(this, allBinaryGameCanvas);
    return this;
}


void GameFrameRunnable_run(GameFrameRunnable* this) {
        JAVA_TRY {
            AllBinaryGameCanvas* allBinaryGameCanvas = this->allBinaryGameCanvas;
            JAVA_CALL(AllBinaryGameCanvas_getLoopTimeHelperP(allBinaryGameCanvas), setStartTime, GameTickTimeDelayHelper_setStartTime(this->gameTickTimeDelayHelper));
            GameTickDisplayInfoSingleton_update(this->gameTickDisplayInfoSingleton);
            AllBinaryGameCanvas_processGame(allBinaryGameCanvas);
            if (!AllBinaryGameCanvas_isRunning(allBinaryGameCanvas) || AllBinaryGameCanvas_isPaused(allBinaryGameCanvas)) {
                AllBinaryGameCanvas_notifyDonePainting(allBinaryGameCanvas);
            }
        } JAVA_CATCH(Exception, e) {
            CommonStrings* commonStrings = CommonStrings_getInstance();
            LogUtil_put(this->logUtil, commonStrings->EXCEPTION, this, commonStrings->RUN, e);
        } JAVA_END_TRY;
}

