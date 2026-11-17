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
// package org.allbinary.game.input.event

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
#include "org/allbinary/game/input/GameKeyEventSourceInterface.h"
#include "org/allbinary/game/input/Input.h"
#include "org/allbinary/game/input/InputFactory.h"
#include "org/allbinary/logic/NullUtil.h"
#include "org/allbinary/logic/communication/log/LogUtil.h"

typedef struct GameKeyEventFactory GameKeyEventFactory;
struct GameKeyEventFactory {
    LogUtil* logUtil;
    int32_t TOUCH_BUTTON_SOURCE_ID;
    int32_t MOTION_GESTURE_SOURCE_ID;
    int32_t MAX_SOURCES;
    GameKeyEvent*** ARRAY;
};

static Any* GameKeyEventFactory_instance;

GameKeyEventFactory* GameKeyEventFactory_new(void);
GameKeyEventFactory* GameKeyEventFactory_getInstance(void);

void GameKeyEventFactory_init(GameKeyEventFactory* this);
void GameKeyEventFactory_init(GameKeyEventFactory* this);
GameKeyEvent* GameKeyEventFactory_getInstanceForKey(GameKeyEventFactory* this, GameKeyEventSourceInterface* anyType, int32_t key);
GameKeyEvent* GameKeyEventFactory_getInstanceForInput(GameKeyEventFactory* this, GameKeyEventSourceInterface* anyType, Input* input);

// Static fields with runtime initializers: call this once at startup
void GameKeyEventFactory_staticInit(void) {
    GameKeyEventFactory_instance = NullUtil_getInstance()->NULL_OBJECT;
}

static void GameKeyEventFactory_initFields(GameKeyEventFactory* this) {
    this->logUtil = LogUtil_getInstance();
    this->TOUCH_BUTTON_SOURCE_ID = 2;
    this->MOTION_GESTURE_SOURCE_ID = 3;
    this->MAX_SOURCES = 4;
    this->ARRAY = ((GameKeyEvent***) java_array_new2(sizeof(GameKeyEvent*), this->MAX_SOURCES, InputFactory_getInstance()->MAX));
}


GameKeyEventFactory* GameKeyEventFactory_getInstance(void) {
        if (GameKeyEventFactory_instance == NullUtil_getInstance()->NULL_OBJECT) {
            GameKeyEventFactory_instance = GameKeyEventFactory_new();
        }
        return ((GameKeyEventFactory*) GameKeyEventFactory_instance);
}


void GameKeyEventFactory_init(GameKeyEventFactory* this) {
    GameKeyEventFactory_initFields(this);
}

GameKeyEventFactory* GameKeyEventFactory_new(void) {
    GameKeyEventFactory* this = calloc(1, sizeof(GameKeyEventFactory));
    GameKeyEventFactory_init(this);
    return this;
}


void GameKeyEventFactory_init(GameKeyEventFactory* this) {
        NullUtil* nullUtil = NullUtil_getInstance();
        int32_t size = InputFactory_getInstance()->MAX;
        for (int32_t index = this->MAX_SOURCES; --index >= 0; ) {
            for (int32_t index2 = size; --index2 >= 0; ) {
                this->ARRAY[index][index2] = GameKeyEvent_createEvent(nullUtil->NULL_OBJECT, index, index2);
            }
        }
}


// throws Exception
GameKeyEvent* GameKeyEventFactory_getInstanceForKey(GameKeyEventFactory* this, GameKeyEventSourceInterface* anyType, int32_t key) {
        GameKeyEvent* gameKeyEvent = this->ARRAY[GameKeyEventSourceInterface_getSourceId(anyType)][key];
        return gameKeyEvent;
}


// throws Exception
GameKeyEvent* GameKeyEventFactory_getInstanceForInput(GameKeyEventFactory* this, GameKeyEventSourceInterface* anyType, Input* input) {
        GameKeyEvent* gameKeyEvent = this->ARRAY[GameKeyEventSourceInterface_getSourceId(anyType)][Input_getId(input)];
        return gameKeyEvent;
}

