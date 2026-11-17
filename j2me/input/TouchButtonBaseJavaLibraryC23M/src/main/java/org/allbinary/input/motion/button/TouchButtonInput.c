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
// package org.allbinary.input.motion.button

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
#include "org/allbinary/game/input/GameKey.h"
#include "org/allbinary/game/input/GameKeyEventSourceInterface.h"
#include "org/allbinary/game/input/Input.h"
#include "org/allbinary/game/input/InputFactory.h"
#include "org/allbinary/game/input/event/GameKeyEvent.h"
#include "org/allbinary/game/input/event/GameKeyEventFactory.h"
#include "org/allbinary/game/input/mapping/InputToGameKeyMapping.h"
#include "org/allbinary/logic/communication/log/LogUtil.h"
#include "org/allbinary/string/CommonStrings.h"

typedef struct TouchButtonInput TouchButtonInput;
struct TouchButtonInput {
    Input base;
    GameKeyEventSourceInterface GameKeyEventSourceInterface_interface;
    LogUtil* logUtil;
    GameKeyEventFactory* gameKeyEventFactory;
    int32_t TOUCH_BUTTON_SOURCE_ID;
    GameKeyEvent* gameKeyEvent;
};


TouchButtonInput* TouchButtonInput_new(int32_t id, const char* name);

void TouchButtonInput_init(TouchButtonInput* this, int32_t id, const char* name);
void TouchButtonInput_update(TouchButtonInput* this, InputToGameKeyMapping* inputToGameKeyMapping);
int32_t TouchButtonInput_getSourceId(TouchButtonInput* this);
GameKeyEvent* TouchButtonInput_getGameKeyEvent(TouchButtonInput* this);

static void TouchButtonInput_initFields(TouchButtonInput* this) {
    this->logUtil = LogUtil_getInstance();
    this->gameKeyEventFactory = GameKeyEventFactory_getInstance();
    this->TOUCH_BUTTON_SOURCE_ID = this->gameKeyEventFactory->TOUCH_BUTTON_SOURCE_ID;
    this->gameKeyEvent = GameKeyEvent_NONE;
}


void TouchButtonInput_init(TouchButtonInput* this, int32_t id, const char* name) {
        Input_init(&this->base, id, name);
        TouchButtonInput_initFields(this);
        InputFactory* inputFactory = InputFactory_getInstance();
        InputFactory_add(inputFactory, TouchButtonInput_getId(this), this);
}

TouchButtonInput* TouchButtonInput_new(int32_t id, const char* name) {
    TouchButtonInput* this = calloc(1, sizeof(TouchButtonInput));
    TouchButtonInput_init(this, id, name);
    return this;
}


void TouchButtonInput_update(TouchButtonInput* this, InputToGameKeyMapping* inputToGameKeyMapping) {
        JAVA_TRY {
            GameKey* gameKey = InputToGameKeyMapping_getInstance(inputToGameKeyMapping, TouchButtonInput_getId(this));
            this->gameKeyEvent = GameKeyEventFactory_getInstanceForInput(this->gameKeyEventFactory, this, gameKey);
        } JAVA_CATCH(Exception, e) {
            CommonStrings* commonStrings = CommonStrings_getInstance();
            LogUtil_put(this->logUtil, commonStrings->EXCEPTION, this, commonStrings->UPDATE, e);
        } JAVA_END_TRY;
}


int32_t TouchButtonInput_getSourceId(TouchButtonInput* this) {
        return this->TOUCH_BUTTON_SOURCE_ID;
}


GameKeyEvent* TouchButtonInput_getGameKeyEvent(TouchButtonInput* this) {
        return this->gameKeyEvent;
}

