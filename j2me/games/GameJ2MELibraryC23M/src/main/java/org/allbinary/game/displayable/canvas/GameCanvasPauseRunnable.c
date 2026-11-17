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
#include "org/allbinary/AndroidUtil.h"
#include "org/allbinary/game/configuration/feature/Features.h"
#include "org/allbinary/graphics/opengles/OpenGLFeatureFactory.h"
#include "org/allbinary/logic/communication/log/LogUtil.h"
#include "org/allbinary/string/CommonStrings.h"
#include "org/allbinary/game/displayable/canvas/GameRunnable.h"

typedef struct GameCanvasPauseRunnable GameCanvasPauseRunnable;
struct GameCanvasPauseRunnable {
    GameRunnable base;
    LogUtil* logUtil;
    AllBinaryGameCanvas* allBinaryGameCanvas;
};


GameCanvasPauseRunnable* GameCanvasPauseRunnable_new(AllBinaryGameCanvas* allBinaryGameCanvas);

void GameCanvasPauseRunnable_init(GameCanvasPauseRunnable* this, AllBinaryGameCanvas* allBinaryGameCanvas);
void GameCanvasPauseRunnable_run(GameCanvasPauseRunnable* this);
void GameCanvasPauseRunnable_processLoopSleep(GameCanvasPauseRunnable* this);

static void GameCanvasPauseRunnable_initFields(GameCanvasPauseRunnable* this) {
    this->logUtil = LogUtil_getInstance();
    
}


void GameCanvasPauseRunnable_init(GameCanvasPauseRunnable* this, AllBinaryGameCanvas* allBinaryGameCanvas) {
    GameRunnable_init(&this->base);
    GameCanvasPauseRunnable_initFields(this);
        this->allBinaryGameCanvas = allBinaryGameCanvas;
}

GameCanvasPauseRunnable* GameCanvasPauseRunnable_new(AllBinaryGameCanvas* allBinaryGameCanvas) {
    GameCanvasPauseRunnable* this = calloc(1, sizeof(GameCanvasPauseRunnable));
    GameCanvasPauseRunnable_init(this, allBinaryGameCanvas);
    return this;
}


void GameCanvasPauseRunnable_run(GameCanvasPauseRunnable* this) {
}


// throws Exception
void GameCanvasPauseRunnable_processLoopSleep(GameCanvasPauseRunnable* this) {
        JAVA_TRY {
            Features* features = Features_getInstance();
            bool isOpenGL = Features_isDefault(features, OpenGLFeatureFactory_getInstance()->OPENGL);
            if (isOpenGL) {
                AllBinaryGameCanvas_processSleep(this->allBinaryGameCanvas);
            }
        } JAVA_CATCH(Exception, e) {
            CommonStrings* commonStrings = CommonStrings_getInstance();
            LogUtil_put(this->logUtil, commonStrings->EXCEPTION, this, commonStrings->RUN, e);
        } JAVA_END_TRY;
}

