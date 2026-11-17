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
// package org.allbinary.game.input

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
#include "org/allbinary/input/motion/gesture/MotionGestureInput.h"
#include "org/allbinary/input/motion/gesture/TouchMotionGestureFactory.h"
#include "org/allbinary/logic/communication/log/LogUtil.h"
#include "org/allbinary/logic/string/StringUtil.h"
#include "org/allbinary/logic/util/event/AllBinaryEventObject.h"
#include "org/allbinary/string/CommonStrings.h"
#include "org/allbinary/game/input/CompleteMotionGestureInputInterface.h"

typedef struct CompleteMotionGestureInputEvent CompleteMotionGestureInputEvent;
struct CompleteMotionGestureInputEvent {
    AllBinaryEventObject base;
    CompleteMotionGestureInputInterface CompleteMotionGestureInputInterface_interface;
    LogUtil* logUtil;
    const char* name;
    MotionGestureInput* motionGestureInput;
};


CompleteMotionGestureInputEvent* CompleteMotionGestureInputEvent_new(const char* name, MotionGestureInput* motionGestureInput);

void CompleteMotionGestureInputEvent_init(CompleteMotionGestureInputEvent* this, const char* name, MotionGestureInput* motionGestureInput);
void CompleteMotionGestureInputEvent_setName(CompleteMotionGestureInputEvent* this, const char* name);
const char* CompleteMotionGestureInputEvent_getName(CompleteMotionGestureInputEvent* this);
void CompleteMotionGestureInputEvent_setMotionGestureInput(CompleteMotionGestureInputEvent* this, MotionGestureInput* motionGestureInput);
MotionGestureInput* CompleteMotionGestureInputEvent_getMotionGestureInput(CompleteMotionGestureInputEvent* this);

static void CompleteMotionGestureInputEvent_initFields(CompleteMotionGestureInputEvent* this) {
    this->logUtil = LogUtil_getInstance();
    this->name = StringUtil_getInstance()->EMPTY_STRING;
    this->motionGestureInput = TouchMotionGestureFactory_getInstance()->NO_MOTION;
}


void CompleteMotionGestureInputEvent_init(CompleteMotionGestureInputEvent* this, const char* name, MotionGestureInput* motionGestureInput) {
        AllBinaryEventObject_init(&this->base, motionGestureInput);
        CompleteMotionGestureInputEvent_initFields(this);
        CompleteMotionGestureInputEvent_setName(this, name);
        JAVA_TRY {
            CompleteMotionGestureInputEvent_setMotionGestureInput(this, motionGestureInput);
        } JAVA_CATCH(Exception, e) {
            CommonStrings* commonStrings = CommonStrings_getInstance();
            LogUtil_put(this->logUtil, commonStrings->EXCEPTION, this, "InputToGameKeyEventAction", e);
        } JAVA_END_TRY;
}

CompleteMotionGestureInputEvent* CompleteMotionGestureInputEvent_new(const char* name, MotionGestureInput* motionGestureInput) {
    CompleteMotionGestureInputEvent* this = calloc(1, sizeof(CompleteMotionGestureInputEvent));
    CompleteMotionGestureInputEvent_init(this, name, motionGestureInput);
    return this;
}


void CompleteMotionGestureInputEvent_setName(CompleteMotionGestureInputEvent* this, const char* name) {
        this->name = name;
}


const char* CompleteMotionGestureInputEvent_getName(CompleteMotionGestureInputEvent* this) {
        return this->name;
}


void CompleteMotionGestureInputEvent_setMotionGestureInput(CompleteMotionGestureInputEvent* this, MotionGestureInput* motionGestureInput) {
        this->motionGestureInput = motionGestureInput;
}


MotionGestureInput* CompleteMotionGestureInputEvent_getMotionGestureInput(CompleteMotionGestureInputEvent* this) {
        return this->motionGestureInput;
}

