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
// package org.allbinary.game.input.motion.action

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
#include "org/allbinary/logic/communication/log/LogUtil.h"
#include "org/allbinary/logic/string/StringMaker.h"
#include "org/allbinary/string/CommonLabels.h"
#include "org/allbinary/util/BasicArrayList.h"
#include "org/allbinary/util/BasicArrayListD.h"

typedef struct GameKeyCompleteMotionGestureInputEventFactory GameKeyCompleteMotionGestureInputEventFactory;
struct GameKeyCompleteMotionGestureInputEventFactory {
    LogUtil* logUtil;
    BasicArrayList* eventList;
};

static GameKeyCompleteMotionGestureInputEventFactory* GameKeyCompleteMotionGestureInputEventFactory_SINGLETON;

GameKeyCompleteMotionGestureInputEventFactory* GameKeyCompleteMotionGestureInputEventFactory_new(void);
GameKeyCompleteMotionGestureInputEventFactory* GameKeyCompleteMotionGestureInputEventFactory_getInstance(void);
void GameKeyCompleteMotionGestureInputEventFactory_add(GameKeyCompleteMotionGestureInputEventFactory* this, GameKeyCompleteMotionGestureInputEvent* gameKeyCompleteMotionGestureInputEvent);
void GameKeyCompleteMotionGestureInputEventFactory_updateAll(GameKeyCompleteMotionGestureInputEventFactory* this);

// Static fields with runtime initializers: call this once at startup
void GameKeyCompleteMotionGestureInputEventFactory_staticInit(void) {
    GameKeyCompleteMotionGestureInputEventFactory_SINGLETON = GameKeyCompleteMotionGestureInputEventFactory_new();
}

static void GameKeyCompleteMotionGestureInputEventFactory_initFields(GameKeyCompleteMotionGestureInputEventFactory* this) {
    this->logUtil = LogUtil_getInstance();
    this->eventList = BasicArrayListD_new();
}

void GameKeyCompleteMotionGestureInputEventFactory_init(GameKeyCompleteMotionGestureInputEventFactory* this) {
    GameKeyCompleteMotionGestureInputEventFactory_initFields(this);
}

GameKeyCompleteMotionGestureInputEventFactory* GameKeyCompleteMotionGestureInputEventFactory_new(void) {
    GameKeyCompleteMotionGestureInputEventFactory* this = calloc(1, sizeof(GameKeyCompleteMotionGestureInputEventFactory));
    GameKeyCompleteMotionGestureInputEventFactory_init(this);
    return this;
}


GameKeyCompleteMotionGestureInputEventFactory* GameKeyCompleteMotionGestureInputEventFactory_getInstance(void) {
        return GameKeyCompleteMotionGestureInputEventFactory_SINGLETON;
}


void GameKeyCompleteMotionGestureInputEventFactory_add(GameKeyCompleteMotionGestureInputEventFactory* this, GameKeyCompleteMotionGestureInputEvent* gameKeyCompleteMotionGestureInputEvent) {
        BasicArrayList_add(this->eventList, gameKeyCompleteMotionGestureInputEvent);
}


void GameKeyCompleteMotionGestureInputEventFactory_updateAll(GameKeyCompleteMotionGestureInputEventFactory* this) {
        LogUtil_putF(this->logUtil, JAVA_CALL(JAVA_CALL(StringMaker_append(StringMaker_new(), CommonLabels_getInstance()->START_LABEL), appendint, BasicArrayList_size(this->eventList)), toString), this, "updateAll");
        for (int32_t index = BasicArrayList_size(this->eventList) - 1; index >= 0; index--) {
            GameKeyCompleteMotionGestureInputEvent* gameKeyCompleteMotionGestureInputEvent = ((GameKeyCompleteMotionGestureInputEvent*) this->eventList->objectArray[index]);
            GameKeyCompleteMotionGestureInputEvent_update(gameKeyCompleteMotionGestureInputEvent);
        }
}

