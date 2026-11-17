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
#include "org/allbinary/game/input/CompleteMotionGestureInputEvent.h"
#include "org/allbinary/game/input/CompleteMotionGestureInputEventListenerInterface.h"
#include "org/allbinary/logic/communication/log/ForcedLogUtil.h"
#include "org/allbinary/logic/util/event/AllBinaryEventObject.h"
#include "org/allbinary/logic/util/event/EventStrings.h"

typedef struct NoCompleteMotionGestureInputEventListener NoCompleteMotionGestureInputEventListener;
struct NoCompleteMotionGestureInputEventListener {
    CompleteMotionGestureInputEventListenerInterface CompleteMotionGestureInputEventListenerInterface_interface;
};

static NoCompleteMotionGestureInputEventListener* NoCompleteMotionGestureInputEventListener_instance;

NoCompleteMotionGestureInputEventListener* NoCompleteMotionGestureInputEventListener_new(void);

void NoCompleteMotionGestureInputEventListener_init(NoCompleteMotionGestureInputEventListener* this);
void NoCompleteMotionGestureInputEventListener_onEvent(NoCompleteMotionGestureInputEventListener* this, AllBinaryEventObject* eventObject);
void NoCompleteMotionGestureInputEventListener_onCompleteMotionGestureInputEvent(NoCompleteMotionGestureInputEventListener* this, CompleteMotionGestureInputEvent* completeMotionGestureInputEvent);
NoCompleteMotionGestureInputEventListener* NoCompleteMotionGestureInputEventListener_getInstance(void);

// Static fields with runtime initializers: call this once at startup
void NoCompleteMotionGestureInputEventListener_staticInit(void) {
    NoCompleteMotionGestureInputEventListener_instance = NoCompleteMotionGestureInputEventListener_new();
}


void NoCompleteMotionGestureInputEventListener_init(NoCompleteMotionGestureInputEventListener* this) {
}

NoCompleteMotionGestureInputEventListener* NoCompleteMotionGestureInputEventListener_new(void) {
    NoCompleteMotionGestureInputEventListener* this = calloc(1, sizeof(NoCompleteMotionGestureInputEventListener));
    NoCompleteMotionGestureInputEventListener_init(this);
    return this;
}


void NoCompleteMotionGestureInputEventListener_onEvent(NoCompleteMotionGestureInputEventListener* this, AllBinaryEventObject* eventObject) {
        ForcedLogUtil_log(EventStrings_getInstance()->PERFORMANCE_MESSAGE, this);
}


void NoCompleteMotionGestureInputEventListener_onCompleteMotionGestureInputEvent(NoCompleteMotionGestureInputEventListener* this, CompleteMotionGestureInputEvent* completeMotionGestureInputEvent) {
}


NoCompleteMotionGestureInputEventListener* NoCompleteMotionGestureInputEventListener_getInstance(void) {
        return NoCompleteMotionGestureInputEventListener_instance;
}

