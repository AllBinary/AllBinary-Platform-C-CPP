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
// #include "javax/microedition/lcdui/CommandListener.h"
// #include "javax/microedition/lcdui/Graphics.h"
// #include "javax/microedition/lcdui/NullCommandListener.h"
#include "org/allbinary/game/init/BasicBuildGameInitializerFactory.h"
#include "org/allbinary/game/layer/AllBinaryGameLayerManager.h"
#include "org/allbinary/game/score/NoHighScoresFactory.h"
#include "org/allbinary/logic/NullUtil.h"
#include "org/allbinary/logic/communication/log/LogUtil.h"
#include "org/allbinary/string/CommonStrings.h"
#include "org/allbinary/game/displayable/canvas/AllBinaryGameCanvas.h"

typedef struct NullGameCanvas NullGameCanvas;
struct NullGameCanvas {
    AllBinaryGameCanvas base;
    bool runningNull;
};

static Any* NullGameCanvas_instance;
const char* NullGameCanvas_NO_GAME = "No Background Game";
constexpr int32_t NullGameCanvas_TYPE = 1;

NullGameCanvas* NullGameCanvas_new(AllBinaryGameLayerManager* gameLayerManager);
static NullGameCanvas* NullGameCanvas_createNull(void);
NullGameCanvas* NullGameCanvas_getInstance(void);
NullGameCanvas* NullGameCanvas_createCanvas(AllBinaryGameLayerManager* gameLayerManager);

void NullGameCanvas_init(NullGameCanvas* this, AllBinaryGameLayerManager* gameLayerManager);
bool NullGameCanvas_isGameOver(NullGameCanvas* this);
void NullGameCanvas_setRunning(NullGameCanvas* this, bool running);
bool NullGameCanvas_isRunning(NullGameCanvas* this);
void NullGameCanvas_pause(NullGameCanvas* this);
void NullGameCanvas_unPause(NullGameCanvas* this);
void NullGameCanvas_initCommands(NullGameCanvas* this, CommandListener* cmdListener);
void NullGameCanvas_buildGameInit(NullGameCanvas* this, bool isProgress);
void NullGameCanvas_draw(NullGameCanvas* this, Graphics* graphics);
void NullGameCanvas_run(NullGameCanvas* this);
int32_t NullGameCanvas_getType(NullGameCanvas* this);

// Static fields with runtime initializers: call this once at startup
void NullGameCanvas_staticInit(void) {
    NullGameCanvas_instance = NullUtil_getInstance()->NULL_OBJECT;
}

static void NullGameCanvas_initFields(NullGameCanvas* this) {
    this->runningNull = true;
}


static NullGameCanvas* NullGameCanvas_createNull(void) {
        JAVA_TRY {
            return NullGameCanvas_new(AllBinaryGameLayerManager_getNullInstance());
        } JAVA_CATCH(Exception, e) {
            LogUtil_put(LogUtil_getInstance(), CommonStrings_getInstance()->EXCEPTION, "NullGameCanvas", CommonStrings_getInstance()->GET_INSTANCE, e);
            java_throw(java_exception_new("RuntimeException", ""));
        } JAVA_END_TRY;
}


NullGameCanvas* NullGameCanvas_getInstance(void) {
        if (NullGameCanvas_instance == NullUtil_getInstance()->NULL_OBJECT) {
            NullGameCanvas_instance = NullGameCanvas_createNull();
        }
        return ((NullGameCanvas*) NullGameCanvas_instance);
}


// throws Exception
NullGameCanvas* NullGameCanvas_createCanvas(AllBinaryGameLayerManager* gameLayerManager) {
        NullGameCanvas* nullGameCanvas = NullGameCanvas_new(gameLayerManager);
        NullGameCanvas_setInitialized(nullGameCanvas, true);
        NullGameCanvas_setTitle(nullGameCanvas, NullGameCanvas_NO_GAME);
        return nullGameCanvas;
}


void NullGameCanvas_init(NullGameCanvas* this, AllBinaryGameLayerManager* gameLayerManager) {
        AllBinaryGameCanvas_init(&this->base, NullCommandListener_NULL_COMMAND_LISTENER, gameLayerManager, NoHighScoresFactory_getInstance(), BasicBuildGameInitializerFactory_NULL_BASE_BUILD_GMAE_INITIALIZER_FACTORY, false);
        NullGameCanvas_initFields(this);
        AllBinaryGameCanvas_setWait((&this->base), 1200);
}

NullGameCanvas* NullGameCanvas_new(AllBinaryGameLayerManager* gameLayerManager) {
    NullGameCanvas* this = calloc(1, sizeof(NullGameCanvas));
    NullGameCanvas_init(this, gameLayerManager);
    return this;
}


// synchronized
bool NullGameCanvas_isGameOver(NullGameCanvas* this) {
        return false;
}


void NullGameCanvas_setRunning(NullGameCanvas* this, bool running) {
        this->runningNull = running;
}


// synchronized
bool NullGameCanvas_isRunning(NullGameCanvas* this) {
        return this->runningNull;
}


// synchronized
void NullGameCanvas_pause(NullGameCanvas* this) {
        NullGameCanvas_setPaused(this, true);
}


// synchronized
void NullGameCanvas_unPause(NullGameCanvas* this) {
        NullGameCanvas_setPaused(this, false);
}


void NullGameCanvas_initCommands(NullGameCanvas* this, CommandListener* cmdListener) {
        NullGameCanvas_removeAllCommands(this);
        NullGameCanvas_setCommandListener(this, cmdListener);
}


// throws Exception
void NullGameCanvas_buildGameInit(NullGameCanvas* this, bool isProgress) {
}


void NullGameCanvas_draw(NullGameCanvas* this, Graphics* graphics) {
}


void NullGameCanvas_run(NullGameCanvas* this) {
        JAVA_TRY {
            JAVA_CALL(this->logUtil, putF, this->commonStrings->START_RUNNABLE, this, this->commonStrings->RUN);
            JAVA_CALL(this->logUtil, putF, this->commonStrings->END_RUNNABLE, this, this->commonStrings->RUN);
        } JAVA_CATCH(Exception, e) {
            JAVA_CALL(this->logUtil, put, this->commonStrings->EXCEPTION, this, this->commonStrings->RUN, e);
        } JAVA_END_TRY;
}


int32_t NullGameCanvas_getType(NullGameCanvas* this) {
        return NullGameCanvas_TYPE;
}

