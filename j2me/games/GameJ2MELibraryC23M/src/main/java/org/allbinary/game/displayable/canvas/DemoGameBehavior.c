/*
 * 
 * AllBinary Open License Version 1 
 * Copyright (c) 2022 AllBinary 
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
#include "org/allbinary/game/GameTypeFactory.h"
#include "org/allbinary/graphics/paint/NullPaintable.h"
#include "org/allbinary/logic/communication/log/LogUtil.h"
#include "org/allbinary/logic/system/security/licensing/AbeClientInformationInterface.h"
#include "org/allbinary/string/CommonStrings.h"

typedef struct DemoGameBehavior DemoGameBehavior;
struct DemoGameBehavior {
    LogUtil* logUtil;
};

static DemoGameBehavior* DemoGameBehavior_instance;

DemoGameBehavior* DemoGameBehavior_new(void);
DemoGameBehavior* DemoGameBehavior_getInstance(void);
void DemoGameBehavior_init(DemoGameBehavior* this);
void DemoGameBehavior_pause(DemoGameBehavior* this, AllBinaryGameCanvas* allBinaryGameCanvas);
void DemoGameBehavior_unPause(DemoGameBehavior* this, AllBinaryGameCanvas* allBinaryGameCanvas);
void DemoGameBehavior_updateTouch(DemoGameBehavior* this, AllBinaryGameCanvas* allBinaryGameCanvas);
void DemoGameBehavior_updateScreenButtonPaintable(DemoGameBehavior* this, AllBinaryGameCanvas* allBinaryGameCanvas);
void DemoGameBehavior_setGameState(DemoGameBehavior* this, AllBinaryGameCanvas* allBinaryGameCanvas);
void DemoGameBehavior_removeAllGameKeyInputListeners(DemoGameBehavior* this, AllBinaryGameCanvas* allBinaryGameCanvas);
void DemoGameBehavior_updateEndGameProcessor(DemoGameBehavior* this, AllBinaryGameCanvas* allBinaryGameCanvas);
void DemoGameBehavior_buildGame(DemoGameBehavior* this, AllBinaryGameCanvas* allBinaryGameCanvas);
void DemoGameBehavior_run(DemoGameBehavior* this, AllBinaryGameCanvas* allBinaryGameCanvas);
void DemoGameBehavior_setHighScore(DemoGameBehavior* this, AbeClientInformationInterface* abeClientInformation, AllBinaryGameCanvas* allBinaryGameCanvas, const char* name, int64_t score, bool autoSubmit, bool isLast);

// Static fields with runtime initializers: call this once at startup
void DemoGameBehavior_staticInit(void) {
    DemoGameBehavior_instance = DemoGameBehavior_new();
}

static void DemoGameBehavior_initFields(DemoGameBehavior* this) {
    this->logUtil = LogUtil_getInstance();
}

void DemoGameBehavior_init(DemoGameBehavior* this) {
    DemoGameBehavior_initFields(this);
}

DemoGameBehavior* DemoGameBehavior_new(void) {
    DemoGameBehavior* this = calloc(1, sizeof(DemoGameBehavior));
    DemoGameBehavior_init(this);
    return this;
}


DemoGameBehavior* DemoGameBehavior_getInstance(void) {
        return DemoGameBehavior_instance;
}


// throws Exception
void DemoGameBehavior_init(DemoGameBehavior* this) {
}


void DemoGameBehavior_pause(DemoGameBehavior* this, AllBinaryGameCanvas* allBinaryGameCanvas) {
}


void DemoGameBehavior_unPause(DemoGameBehavior* this, AllBinaryGameCanvas* allBinaryGameCanvas) {
}


// throws Exception
void DemoGameBehavior_updateTouch(DemoGameBehavior* this, AllBinaryGameCanvas* allBinaryGameCanvas) {
}


// throws Exception
void DemoGameBehavior_updateScreenButtonPaintable(DemoGameBehavior* this, AllBinaryGameCanvas* allBinaryGameCanvas) {
        AllBinaryGameCanvas_setTouchPaintableP(allBinaryGameCanvas, NullPaintable_getInstance());
}


// throws Exception
void DemoGameBehavior_setGameState(DemoGameBehavior* this, AllBinaryGameCanvas* allBinaryGameCanvas) {
}


void DemoGameBehavior_removeAllGameKeyInputListeners(DemoGameBehavior* this, AllBinaryGameCanvas* allBinaryGameCanvas) {
}


// throws Exception
void DemoGameBehavior_updateEndGameProcessor(DemoGameBehavior* this, AllBinaryGameCanvas* allBinaryGameCanvas) {
}


// throws Exception
void DemoGameBehavior_buildGame(DemoGameBehavior* this, AllBinaryGameCanvas* allBinaryGameCanvas) {
}


// throws Exception
void DemoGameBehavior_run(DemoGameBehavior* this, AllBinaryGameCanvas* allBinaryGameCanvas) {
        CommonStrings* commonStrings = CommonStrings_getInstance();
        LogUtil_putF(this->logUtil, JAVA_CALL(GameTypeFactory_getInstance()->BOT, toString), this, commonStrings->RUN);
}


// throws Exception
void DemoGameBehavior_setHighScore(DemoGameBehavior* this, AbeClientInformationInterface* abeClientInformation, AllBinaryGameCanvas* allBinaryGameCanvas, const char* name, int64_t score, bool autoSubmit, bool isLast) {
}

